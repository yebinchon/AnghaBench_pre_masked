
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int sqlite_int64 ;
struct TYPE_12__ {TYPE_3__* pTokenizer; } ;
typedef TYPE_2__ sqlite3_tokenizer_cursor ;
struct TYPE_13__ {TYPE_1__* pModule; } ;
typedef TYPE_3__ sqlite3_tokenizer ;
struct TYPE_14__ {TYPE_3__* pTokenizer; } ;
typedef TYPE_4__ fulltext_vtab ;
typedef int fts1Hash ;
struct TYPE_11__ {int (* xOpen ) (TYPE_3__*,char const*,int,TYPE_2__**) ;int (* xNext ) (TYPE_2__*,char const**,int*,int*,int*,int*) ;int (* xClose ) (TYPE_2__*) ;} ;
typedef int DocList ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int,int,int,int) ;
 int * FUNC_2 (int ) ;
 int * FUNC_3 (int *,char const*,int) ;
 int FUNC_4 (int *,char const*,int,int *) ;
 int FUNC_5 (TYPE_3__*,char const*,int,TYPE_2__**) ;
 int FUNC_6 (TYPE_2__*,char const**,int*,int*,int*,int*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_9(fulltext_vtab *VAR_3, fts1Hash *VAR_4, sqlite_int64 VAR_5,
                      const char *VAR_6, int VAR_7){
  sqlite3_tokenizer *VAR_8 = VAR_3->pTokenizer;
  sqlite3_tokenizer_cursor *VAR_9;
  const char *VAR_10;
  int VAR_11;
  int VAR_12, VAR_13, VAR_14;
  int VAR_15;

  VAR_15 = VAR_8->pModule->xOpen(VAR_8, VAR_6, -1, &VAR_9);
  if( VAR_15!=VAR_2 ) return VAR_15;

  VAR_9->pTokenizer = VAR_8;
  while( VAR_2==VAR_8->pModule->xNext(VAR_9,
                                               &VAR_10, &VAR_11,
                                               &VAR_12, &VAR_13,
                                               &VAR_14) ){
    DocList *VAR_16;


    if( VAR_14<0 ){
      VAR_8->pModule->xClose(VAR_9);
      return VAR_1;
    }

    VAR_16 = FUNC_3(VAR_4, VAR_10, VAR_11);
    if( VAR_16==((void*)0) ){
      VAR_16 = FUNC_2(VAR_0);
      FUNC_0(VAR_16, VAR_5);
      FUNC_4(VAR_4, VAR_10, VAR_11, VAR_16);
    }
    if( VAR_7>=0 ){
      FUNC_1(VAR_16, VAR_7, VAR_14, VAR_12, VAR_13);
    }
  }






  VAR_8->pModule->xClose(VAR_9);
  return VAR_15;
}
