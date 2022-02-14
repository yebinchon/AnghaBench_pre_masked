
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_vtab ;
struct TYPE_5__ {int (* xCreate ) (int,char const**,TYPE_3__**) ;} ;
typedef TYPE_1__ sqlite3_tokenizer_module ;
typedef int sqlite3 ;
struct TYPE_6__ {int base; int pFulltextStatements; TYPE_3__* pTokenizer; int zName; int * db; } ;
typedef TYPE_2__ fulltext_vtab ;
struct TYPE_7__ {TYPE_1__* pModule; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__**) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (char const* const,char*) ;
 int FUNC_6 (char const* const) ;
 int FUNC_7 (int,char const**,TYPE_3__**) ;

__attribute__((used)) static int FUNC_8(
  sqlite3 *VAR_1,
  void *VAR_2,
  int VAR_3,
  const char * const *VAR_4,
  sqlite3_vtab **VAR_5,
  char **VAR_6
){
  int VAR_7;
  fulltext_vtab *VAR_8;
  sqlite3_tokenizer_module *VAR_9 = ((void*)0);

  FUNC_0( VAR_3>=3 );
  VAR_8 = (fulltext_vtab *) FUNC_2(sizeof(fulltext_vtab));

  VAR_8->db = VAR_1;
  VAR_8->zName = FUNC_6(VAR_4[2]);
  VAR_8->pTokenizer = ((void*)0);

  if( VAR_3==3 ){
    FUNC_1(&VAR_9);
  } else {

    if( !FUNC_5(VAR_4[3], "simple") ){
      FUNC_1(&VAR_9);
    } else {
      FUNC_0( "unrecognized tokenizer"==((void*)0) );
    }
  }
  VAR_7 = VAR_9->xCreate(VAR_3-3, (const char **) (VAR_4+3), &VAR_8->pTokenizer);
  if( VAR_7!=VAR_0 ) return VAR_7;
  VAR_8->pTokenizer->pModule = VAR_9;



  VAR_7 = FUNC_4(VAR_1, "create table x(content text)");
  if( VAR_7!=VAR_0 ) return VAR_7;

  FUNC_3(VAR_8->pFulltextStatements, 0, sizeof(VAR_8->pFulltextStatements));

  *VAR_5 = &VAR_8->base;
  return VAR_0;
}
