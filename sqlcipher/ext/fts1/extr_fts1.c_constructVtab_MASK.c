
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int sqlite3_vtab ;
struct TYPE_11__ {int (* xCreate ) (int,char const* const*,TYPE_4__**) ;} ;
typedef TYPE_1__ sqlite3_tokenizer_module ;
typedef int sqlite3 ;
struct TYPE_12__ {int base; struct TYPE_12__* pFulltextStatements; scalar_t__ azColumn; int nColumn; TYPE_4__* pTokenizer; scalar_t__ azContentColumn; int zName; int zDb; int * db; } ;
typedef TYPE_2__ fulltext_vtab ;
struct TYPE_13__ {scalar_t__* azTokenizer; int zName; scalar_t__ azColumn; scalar_t__ azContentColumn; int nColumn; int zDb; } ;
typedef TYPE_3__ TableSpec ;
struct TYPE_14__ {TYPE_1__ const* pModule; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int ,char const* const*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 int FUNC_5 (TYPE_1__ const**) ;
 int FUNC_6 (TYPE_1__ const**) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (char*,scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__,char*) ;
 int FUNC_11 (int,char const* const*,TYPE_4__**) ;
 int FUNC_12 (int,char const* const*,TYPE_4__**) ;

__attribute__((used)) static int FUNC_13(
  sqlite3 *VAR_3,
  TableSpec *VAR_4,
  sqlite3_vtab **VAR_5,
  char **VAR_6
){
  int VAR_7;
  int VAR_8;
  fulltext_vtab *VAR_9 = 0;
  const sqlite3_tokenizer_module *VAR_10 = ((void*)0);
  char *VAR_11;

  VAR_9 = (fulltext_vtab *) FUNC_3(sizeof(fulltext_vtab));
  if( VAR_9==0 ) return VAR_1;
  FUNC_4(VAR_9, 0, sizeof(*VAR_9));

  VAR_9->db = VAR_3;
  VAR_9->zDb = VAR_4->zDb;
  VAR_9->zName = VAR_4->zName;
  VAR_9->nColumn = VAR_4->nColumn;
  VAR_9->azContentColumn = VAR_4->azContentColumn;
  VAR_4->azContentColumn = 0;
  VAR_9->azColumn = VAR_4->azColumn;
  VAR_4->azColumn = 0;

  if( VAR_4->azTokenizer==0 ){
    return VAR_1;
  }

  if( VAR_4->azTokenizer[0]==0 || FUNC_10(VAR_4->azTokenizer[0], "simple") ){
    FUNC_6(&VAR_10);
  }else if( FUNC_10(VAR_4->azTokenizer[0], "porter") ){
    FUNC_5(&VAR_10);
  }else{
    *VAR_6 = FUNC_9("unknown tokenizer: %s", VAR_4->azTokenizer[0]);
    VAR_7 = VAR_0;
    goto err;
  }
  for(VAR_8=0; VAR_4->azTokenizer[VAR_8]; VAR_8++){}
  if( VAR_8 ){
    VAR_7 = VAR_10->xCreate(VAR_8-1, (const char*const*)&VAR_4->azTokenizer[1],
                    &VAR_9->pTokenizer);
  }else{
    VAR_7 = VAR_10->xCreate(0, 0, &VAR_9->pTokenizer);
  }
  if( VAR_7!=VAR_2 ) goto err;
  VAR_9->pTokenizer->pModule = VAR_10;



  VAR_11 = FUNC_1(VAR_9->nColumn, (const char*const*)VAR_9->azColumn,
                          VAR_4->zName);
  VAR_7 = FUNC_7(VAR_3, VAR_11);
  FUNC_8(VAR_11);
  if( VAR_7!=VAR_2 ) goto err;

  FUNC_4(VAR_9->pFulltextStatements, 0, sizeof(VAR_9->pFulltextStatements));

  *VAR_5 = &VAR_9->base;
  FUNC_0(("FTS1 Connect %p\n", VAR_9));

  return VAR_7;

err:
  FUNC_2(VAR_9);
  return VAR_7;
}
