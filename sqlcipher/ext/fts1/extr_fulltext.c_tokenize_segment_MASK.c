
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int (* xOpen ) (TYPE_3__*,char const*,int,TYPE_2__**) ;int (* xNext ) (TYPE_2__*,char const**,int*,int*,int*,int*) ;int (* xClose ) (TYPE_2__*) ;} ;
typedef TYPE_1__ sqlite3_tokenizer_module ;
struct TYPE_10__ {TYPE_3__* pTokenizer; } ;
typedef TYPE_2__ sqlite3_tokenizer_cursor ;
struct TYPE_11__ {TYPE_1__* pModule; } ;
typedef TYPE_3__ sqlite3_tokenizer ;
typedef int Query ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (char const*,int) ;
 int FUNC_2 (TYPE_3__*,char const*,int,TYPE_2__**) ;
 int FUNC_3 (TYPE_2__*,char const**,int*,int*,int*,int*) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_5(sqlite3_tokenizer *VAR_1,
                            const char *VAR_2, int VAR_3,
                            Query *VAR_4){
  sqlite3_tokenizer_module *VAR_5 = VAR_1->pModule;
  sqlite3_tokenizer_cursor *VAR_6;
  int VAR_7 = 1;

  int VAR_8 = VAR_5->xOpen(VAR_1, VAR_2, -1, &VAR_6);
  if( VAR_8!=VAR_0 ) return VAR_8;
  VAR_6->pTokenizer = VAR_1;

  while( 1 ){
    const char *VAR_9;
    int VAR_10, VAR_11, VAR_12, VAR_13;

    VAR_8 = VAR_5->xNext(VAR_6,
                        &VAR_9, &VAR_10,
                        &VAR_11, &VAR_12,
                        &VAR_13);
    if( VAR_8!=VAR_0 ) break;
    FUNC_0(VAR_4, !VAR_3 || VAR_7, FUNC_1(VAR_9, VAR_10));
    VAR_7 = 0;
  }

  return VAR_5->xClose(VAR_6);
}
