
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int (* xOpen ) (TYPE_3__*,char const*,int,TYPE_2__**) ;int iVersion; int (* xLanguageid ) (TYPE_2__*,int) ;int (* xClose ) (TYPE_2__*) ;} ;
typedef TYPE_1__ sqlite3_tokenizer_module ;
struct TYPE_11__ {TYPE_3__* pTokenizer; } ;
typedef TYPE_2__ sqlite3_tokenizer_cursor ;
struct TYPE_12__ {TYPE_1__* pModule; } ;
typedef TYPE_3__ sqlite3_tokenizer ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,char const*,int,TYPE_2__**) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*) ;

int FUNC_4(
  sqlite3_tokenizer *VAR_1,
  int VAR_2,
  const char *VAR_3,
  int VAR_4,
  sqlite3_tokenizer_cursor **VAR_5
){
  sqlite3_tokenizer_module const *VAR_6 = VAR_1->pModule;
  sqlite3_tokenizer_cursor *VAR_7 = 0;
  int VAR_8;

  VAR_8 = VAR_6->xOpen(VAR_1, VAR_3, VAR_4, &VAR_7);
  FUNC_0( VAR_8==VAR_0 || VAR_7==0 );
  if( VAR_8==VAR_0 ){
    VAR_7->pTokenizer = VAR_1;
    if( VAR_6->iVersion>=1 ){
      VAR_8 = VAR_6->xLanguageid(VAR_7, VAR_2);
      if( VAR_8!=VAR_0 ){
        VAR_6->xClose(VAR_7);
        VAR_7 = 0;
      }
    }
  }
  *VAR_5 = VAR_7;
  return VAR_8;
}
