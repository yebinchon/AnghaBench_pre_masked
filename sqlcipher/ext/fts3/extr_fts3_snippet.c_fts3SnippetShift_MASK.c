
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_5__ {int (* xNext ) (int *,char const**,int*,int*,int*,int*) ;int (* xClose ) (int *) ;} ;
typedef TYPE_1__ sqlite3_tokenizer_module ;
typedef int sqlite3_tokenizer_cursor ;
struct TYPE_7__ {scalar_t__ pModule; } ;
struct TYPE_6__ {TYPE_3__* pTokenizer; } ;
typedef TYPE_2__ Fts3Table ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,int,char const*,int,int **) ;
 int FUNC_2 (int *,char const**,int*,int*,int*,int*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(
  Fts3Table *VAR_2,
  int VAR_3,
  int VAR_4,
  const char *VAR_5,
  int VAR_6,
  int *VAR_7,
  u64 *VAR_8
){
  u64 VAR_9 = *VAR_8;

  if( VAR_9 ){
    int VAR_10;
    int VAR_11;
    int VAR_12;

    for(VAR_10=0; !(VAR_9 & ((u64)1 << VAR_10)); VAR_10++);
    for(VAR_11=0; !(VAR_9 & ((u64)1 << (VAR_4-1-VAR_11))); VAR_11++);
    FUNC_0( (VAR_4-1-VAR_11)<=63 && (VAR_4-1-VAR_11)>=0 );
    VAR_12 = (VAR_10-VAR_11)/2;
    if( VAR_12>0 ){
      int VAR_13;
      int VAR_14 = 0;
      int VAR_15;
      sqlite3_tokenizer_module *VAR_16;
      sqlite3_tokenizer_cursor *VAR_17;
      VAR_16 = (sqlite3_tokenizer_module *)VAR_2->pTokenizer->pModule;




      VAR_15 = FUNC_1(VAR_2->pTokenizer, VAR_3, VAR_5, VAR_6, &VAR_17);
      if( VAR_15!=VAR_1 ){
        return VAR_15;
      }
      while( VAR_15==VAR_1 && VAR_14<(VAR_4+VAR_12) ){
        const char *VAR_18; int VAR_19 = 0, VAR_20 = 0, VAR_21 = 0;
        VAR_15 = VAR_16->xNext(VAR_17, &VAR_18, &VAR_19, &VAR_20, &VAR_21, &VAR_14);
      }
      VAR_16->xClose(VAR_17);
      if( VAR_15!=VAR_1 && VAR_15!=VAR_0 ){ return VAR_15; }

      VAR_13 = (VAR_15==VAR_0)+VAR_14-VAR_4;
      FUNC_0( VAR_13<=VAR_12 );
      if( VAR_13>0 ){
        *VAR_7 += VAR_13;
        *VAR_8 = VAR_9 >> VAR_13;
      }
    }
  }
  return VAR_1;
}
