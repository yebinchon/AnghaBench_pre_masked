
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct Fts3Index {int nPrefix; int hPending; } ;
struct TYPE_7__ {int (* xNext ) (int *,char const**,int*,int*,int*,int*) ;int (* xClose ) (int *) ;} ;
typedef TYPE_1__ sqlite3_tokenizer_module ;
typedef int sqlite3_tokenizer_cursor ;
struct TYPE_8__ {TYPE_1__* pModule; } ;
typedef TYPE_2__ sqlite3_tokenizer ;
struct TYPE_9__ {int nIndex; struct Fts3Index* aIndex; TYPE_2__* pTokenizer; } ;
typedef TYPE_3__ Fts3Table ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,int,int,int *,char const*,int) ;
 int FUNC_2 (TYPE_2__*,int,char const*,int,int **) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(
  Fts3Table *VAR_3,
  int VAR_4,
  const char *VAR_5,
  int VAR_6,
  u32 *VAR_7
){
  int VAR_8;
  int VAR_9 = 0;
  int VAR_10 = 0;
  int VAR_11 = 0;
  int VAR_12 = 0;

  char const *VAR_13;
  int VAR_14 = 0;

  sqlite3_tokenizer *VAR_15 = VAR_3->pTokenizer;
  sqlite3_tokenizer_module const *VAR_16 = VAR_15->pModule;
  sqlite3_tokenizer_cursor *VAR_17;
  int (*VAR_18)(sqlite3_tokenizer_cursor *VAR_19,
      const char**,int*,int*,int*,int*);

  FUNC_0( VAR_15 && VAR_16 );




  if( VAR_5==0 ){
    *VAR_7 = 0;
    return VAR_2;
  }

  VAR_8 = FUNC_2(VAR_15, VAR_4, VAR_5, -1, &VAR_17);
  if( VAR_8!=VAR_2 ){
    return VAR_8;
  }

  VAR_18 = VAR_16->xNext;
  while( VAR_2==VAR_8
      && VAR_2==(VAR_8 = VAR_18(VAR_17, &VAR_13, &VAR_14, &VAR_9, &VAR_10, &VAR_11))
  ){
    int VAR_20;
    if( VAR_11>=VAR_12 ) VAR_12 = VAR_11+1;




    if( VAR_11<0 || !VAR_13 || VAR_14<=0 ){
      VAR_8 = VAR_1;
      break;
    }


    VAR_8 = FUNC_1(
        VAR_3, VAR_6, VAR_11, &VAR_3->aIndex[0].hPending, VAR_13, VAR_14
    );



    for(VAR_20=1; VAR_8==VAR_2 && VAR_20<VAR_3->nIndex; VAR_20++){
      struct Fts3Index *VAR_21 = &VAR_3->aIndex[VAR_20];
      if( VAR_14<VAR_21->nPrefix ) continue;
      VAR_8 = FUNC_1(
          VAR_3, VAR_6, VAR_11, &VAR_21->hPending, VAR_13, VAR_21->nPrefix
      );
    }
  }

  VAR_16->xClose(VAR_17);
  *VAR_7 += VAR_12;
  return (VAR_8==VAR_0 ? VAR_2 : VAR_8);
}
