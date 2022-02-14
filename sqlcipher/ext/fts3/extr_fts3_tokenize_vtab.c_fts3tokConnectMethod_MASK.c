
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_vtab ;
struct TYPE_5__ {int (* xCreate ) (int,char const* const*,int **) ;int (* xDestroy ) (int *) ;} ;
typedef TYPE_1__ sqlite3_tokenizer_module ;
typedef int sqlite3_tokenizer ;
typedef int sqlite3 ;
struct TYPE_6__ {int base; int * pTok; TYPE_1__ const* pMod; } ;
typedef TYPE_2__ Fts3tokTable ;
typedef int Fts3Hash ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char const* const*,char***) ;
 int FUNC_2 (int *,char const*,TYPE_1__ const**,char**) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (char**) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int,char const* const*,int **) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(
  sqlite3 *VAR_3,
  void *VAR_4,
  int VAR_5,
  const char * const *VAR_6,
  sqlite3_vtab **VAR_7,
  char **VAR_8
){
  Fts3tokTable *VAR_9 = 0;
  const sqlite3_tokenizer_module *VAR_10 = 0;
  sqlite3_tokenizer *VAR_11 = 0;
  int VAR_12;
  char **VAR_13 = 0;
  int VAR_14;

  VAR_12 = FUNC_4(VAR_3, VAR_0);
  if( VAR_12!=VAR_2 ) return VAR_12;

  VAR_14 = VAR_5-3;
  VAR_12 = FUNC_1(VAR_14, &VAR_6[3], &VAR_13);

  if( VAR_12==VAR_2 ){
    const char *VAR_15;
    if( VAR_14<1 ){
      VAR_15 = "simple";
    }else{
      VAR_15 = VAR_13[0];
    }
    VAR_12 = FUNC_2((Fts3Hash*)VAR_4, VAR_15, &VAR_10, VAR_8);
  }

  FUNC_0( (VAR_12==VAR_2)==(VAR_10!=0) );
  if( VAR_12==VAR_2 ){
    const char * const *VAR_16 = (const char * const *)&VAR_13[1];
    VAR_12 = VAR_10->xCreate((VAR_14>1 ? VAR_14-1 : 0), VAR_16, &VAR_11);
  }

  if( VAR_12==VAR_2 ){
    VAR_9 = (Fts3tokTable *)FUNC_6(sizeof(Fts3tokTable));
    if( VAR_9==0 ){
      VAR_12 = VAR_1;
    }
  }

  if( VAR_12==VAR_2 ){
    FUNC_3(VAR_9, 0, sizeof(Fts3tokTable));
    VAR_9->pMod = VAR_10;
    VAR_9->pTok = VAR_11;
    *VAR_7 = &VAR_9->base;
  }else{
    if( VAR_11 ){
      VAR_10->xDestroy(VAR_11);
    }
  }

  FUNC_5(VAR_13);
  return VAR_12;
}
