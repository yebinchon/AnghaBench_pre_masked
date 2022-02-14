
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int sqlite_int64 ;
struct TYPE_10__ {TYPE_3__* pTokenizer; } ;
typedef TYPE_2__ sqlite3_tokenizer_cursor ;
struct TYPE_11__ {TYPE_1__* pModule; } ;
typedef TYPE_3__ sqlite3_tokenizer ;
struct TYPE_9__ {int (* xOpen ) (TYPE_3__*,char const*,int,TYPE_2__**) ;int (* xNext ) (TYPE_2__*,char const**,int*,int*,int*,int*) ;int (* xClose ) (TYPE_2__*) ;} ;
typedef int Hash ;
typedef int DocList ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,char const*,int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,char const*,int,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int,int,int) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*,char const*,int,TYPE_2__**) ;
 int FUNC_7 (TYPE_2__*,char const**,int*,int*,int*,int*) ;
 int FUNC_8 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_9(Hash *VAR_4, sqlite3_tokenizer *VAR_5,
                       const char *VAR_6, sqlite_int64 VAR_7){
  sqlite3_tokenizer_cursor *VAR_8;
  const char *VAR_9;
  int VAR_10;
  int VAR_11, VAR_12, VAR_13;

  int VAR_14 = VAR_5->pModule->xOpen(VAR_5, VAR_6, -1, &VAR_8);
  if( VAR_14!=VAR_3 ) return VAR_14;

  VAR_8->pTokenizer = VAR_5;
  FUNC_1(VAR_4, VAR_1, 1);
  while( VAR_3==VAR_5->pModule->xNext(VAR_8,
                                               &VAR_9, &VAR_10,
                                               &VAR_11, &VAR_12,
                                               &VAR_13) ){
    DocList *VAR_15;


    if( VAR_13<0 ) {
      VAR_14 = VAR_2;
      goto err;
    }

    VAR_15 = FUNC_0(VAR_4, VAR_9, VAR_10);
    if( VAR_15==((void*)0) ){
      VAR_15 = FUNC_5(VAR_0);
      FUNC_3(VAR_15, VAR_7);
      FUNC_2(VAR_4, VAR_9, VAR_10, VAR_15);
    }
    FUNC_4(VAR_15, VAR_13, VAR_11, VAR_12);
  }

err:





  VAR_5->pModule->xClose(VAR_8);
  return VAR_14;
}
