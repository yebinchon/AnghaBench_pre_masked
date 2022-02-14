
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* xCreate ) (int,char const**,TYPE_2__**) ;} ;
typedef TYPE_1__ sqlite3_tokenizer_module ;
struct TYPE_6__ {TYPE_1__* pModule; } ;
typedef TYPE_2__ sqlite3_tokenizer ;
typedef int sqlite3_int64 ;
typedef int Fts3Hash ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char**,char*,...) ;
 scalar_t__ FUNC_3 (int *,char*,int) ;
 scalar_t__ FUNC_4 (char*,int*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char*,char const*) ;
 scalar_t__ FUNC_7 (void*,int) ;
 size_t FUNC_8 (char*) ;
 int FUNC_9 (int,char const**,TYPE_2__**) ;

int FUNC_10(
  Fts3Hash *VAR_3,
  const char *VAR_4,
  sqlite3_tokenizer **VAR_5,
  char **VAR_6
){
  int VAR_7;
  char *VAR_8 = (char *)VAR_4;
  int VAR_9 = 0;
  char *VAR_10;
  char *VAR_11;
  sqlite3_tokenizer_module *VAR_12;

  VAR_10 = FUNC_6("%s", VAR_4);
  if( !VAR_10 ) return VAR_1;
  VAR_11 = &VAR_10[FUNC_8(VAR_10)];

  VAR_8 = (char *)FUNC_4(VAR_10, &VAR_9);
  if( VAR_8==0 ){
    FUNC_0( VAR_9==0 );
    VAR_8 = VAR_10;
  }
  VAR_8[VAR_9] = '\0';
  FUNC_1(VAR_8);

  VAR_12 = (sqlite3_tokenizer_module *)FUNC_3(VAR_3,VAR_8,(int)FUNC_8(VAR_8)+1);
  if( !VAR_12 ){
    FUNC_2(VAR_6, "unknown tokenizer: %s", VAR_8);
    VAR_7 = VAR_0;
  }else{
    char const **VAR_13 = 0;
    int VAR_14 = 0;
    VAR_8 = &VAR_8[VAR_9+1];
    while( VAR_8<VAR_11 && (((void*)0)!=(VAR_8 = (char *)FUNC_4(VAR_8, &VAR_9))) ){
      sqlite3_int64 VAR_15 = sizeof(char *)*(VAR_14+1);
      char const **VAR_16 = (const char **)FUNC_7((void *)VAR_13, VAR_15);
      if( !VAR_16 ){
        FUNC_5(VAR_10);
        FUNC_5((void *)VAR_13);
        return VAR_1;
      }
      VAR_13 = VAR_16;
      VAR_13[VAR_14++] = VAR_8;
      VAR_8[VAR_9] = '\0';
      FUNC_1(VAR_8);
      VAR_8 = &VAR_8[VAR_9+1];
    }
    VAR_7 = VAR_12->xCreate(VAR_14, VAR_13, VAR_5);
    FUNC_0( VAR_7!=VAR_2 || *VAR_5 );
    if( VAR_7!=VAR_2 ){
      FUNC_2(VAR_6, "unknown tokenizer");
    }else{
      (*VAR_5)->pModule = VAR_12;
    }
    FUNC_5((void *)VAR_13);
  }

  FUNC_5(VAR_10);
  return VAR_7;
}
