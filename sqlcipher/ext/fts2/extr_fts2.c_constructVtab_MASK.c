
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int sqlite3_vtab ;
struct TYPE_9__ {int (* xCreate ) (int,char const* const*,TYPE_4__**) ;} ;
typedef TYPE_1__ sqlite3_tokenizer_module ;
typedef int sqlite3 ;
struct TYPE_10__ {int nPendingData; int base; int pFulltextStatements; scalar_t__ azColumn; int nColumn; TYPE_4__* pTokenizer; scalar_t__ azContentColumn; int zName; int zDb; int * db; } ;
typedef TYPE_2__ fulltext_vtab ;
typedef int fts2Hash ;
struct TYPE_11__ {char** azTokenizer; int zName; scalar_t__ azColumn; scalar_t__ azContentColumn; int nColumn; int zDb; } ;
typedef TYPE_3__ TableSpec ;
struct TYPE_12__ {TYPE_1__ const* pModule; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ,char const* const*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int ,int) ;
 scalar_t__ FUNC_5 (int *,char const*,int) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (int) ;
 char* FUNC_9 (char*,char*) ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (int,char const* const*,TYPE_4__**) ;
 int FUNC_12 (int,char const* const*,TYPE_4__**) ;

__attribute__((used)) static int FUNC_13(
  sqlite3 *VAR_3,
  fts2Hash *VAR_4,
  TableSpec *VAR_5,
  sqlite3_vtab **VAR_6,
  char **VAR_7
){
  int VAR_8;
  int VAR_9;
  fulltext_vtab *VAR_10 = 0;
  const sqlite3_tokenizer_module *VAR_11 = ((void*)0);
  char *VAR_12;

  char const *VAR_13;
  int VAR_14;

  VAR_10 = (fulltext_vtab *) FUNC_8(sizeof(fulltext_vtab));
  if( VAR_10==0 ) return VAR_1;
  FUNC_0(VAR_10);

  VAR_10->db = VAR_3;
  VAR_10->zDb = VAR_5->zDb;
  VAR_10->zName = VAR_5->zName;
  VAR_10->nColumn = VAR_5->nColumn;
  VAR_10->azContentColumn = VAR_5->azContentColumn;
  VAR_5->azContentColumn = 0;
  VAR_10->azColumn = VAR_5->azColumn;
  VAR_5->azColumn = 0;

  if( VAR_5->azTokenizer==0 ){
    return VAR_1;
  }

  VAR_13 = VAR_5->azTokenizer[0];
  if( !VAR_13 ){
    VAR_13 = "simple";
  }
  VAR_14 = FUNC_10(VAR_13)+1;

  VAR_11 = (sqlite3_tokenizer_module *)FUNC_5(VAR_4, VAR_13, VAR_14);
  if( !VAR_11 ){
    *VAR_7 = FUNC_9("unknown tokenizer: %s", VAR_5->azTokenizer[0]);
    VAR_8 = VAR_0;
    goto err;
  }

  for(VAR_9=0; VAR_5->azTokenizer[VAR_9]; VAR_9++){}
  if( VAR_9 ){
    VAR_8 = VAR_11->xCreate(VAR_9-1, (const char*const*)&VAR_5->azTokenizer[1],
                    &VAR_10->pTokenizer);
  }else{
    VAR_8 = VAR_11->xCreate(0, 0, &VAR_10->pTokenizer);
  }
  if( VAR_8!=VAR_2 ) goto err;
  VAR_10->pTokenizer->pModule = VAR_11;



  VAR_12 = FUNC_2(VAR_10->nColumn, (const char*const*)VAR_10->azColumn,
                          VAR_5->zName);
  VAR_8 = FUNC_6(VAR_3, VAR_12);
  FUNC_7(VAR_12);
  if( VAR_8!=VAR_2 ) goto err;

  FUNC_4(VAR_10->pFulltextStatements, 0, sizeof(VAR_10->pFulltextStatements));


  VAR_10->nPendingData = -1;

  *VAR_6 = &VAR_10->base;
  FUNC_1(("FTS2 Connect %p\n", VAR_10));

  return VAR_8;

err:
  FUNC_3(VAR_10);
  return VAR_8;
}
