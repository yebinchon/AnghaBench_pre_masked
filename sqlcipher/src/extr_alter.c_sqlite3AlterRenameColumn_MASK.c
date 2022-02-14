
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_7__ ;
typedef struct TYPE_35__ TYPE_6__ ;
typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_1__ ;


struct TYPE_32__ {TYPE_1__* aDb; } ;
typedef TYPE_3__ sqlite3 ;
struct TYPE_33__ {scalar_t__ n; int * z; } ;
typedef TYPE_4__ Token ;
struct TYPE_34__ {int nCol; int zName; TYPE_2__* aCol; int pSchema; } ;
typedef TYPE_5__ Table ;
struct TYPE_36__ {TYPE_3__* db; } ;
struct TYPE_35__ {int * a; } ;
struct TYPE_31__ {int zName; } ;
struct TYPE_30__ {char* zDbSName; } ;
typedef TYPE_6__ SrcList ;
typedef TYPE_7__ Parse ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_7__*,TYPE_5__*) ;
 scalar_t__ FUNC_2 (TYPE_7__*,TYPE_5__*) ;
 int FUNC_3 (TYPE_7__*,int) ;
 int FUNC_4 (TYPE_7__*,char const*,int) ;
 scalar_t__ FUNC_5 (TYPE_7__*,int ,char const*,int ,int ) ;
 int FUNC_6 (TYPE_3__*,char*) ;
 int FUNC_7 (TYPE_7__*,char*,char*) ;
 int FUNC_8 (int ) ;
 TYPE_5__* FUNC_9 (TYPE_7__*,int ,int *) ;
 int FUNC_10 (TYPE_7__*) ;
 char* FUNC_11 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_12 (TYPE_7__*,char*,char const*,char const*,char const*,int,...) ;
 int FUNC_13 (TYPE_3__*,int ) ;
 int FUNC_14 (TYPE_3__*,TYPE_6__*) ;
 scalar_t__ FUNC_15 (int ,char*) ;

void FUNC_16(
  Parse *VAR_3,
  SrcList *VAR_4,
  Token *VAR_5,
  Token *VAR_6
){
  sqlite3 *VAR_7 = VAR_3->db;
  Table *VAR_8;
  int VAR_9;
  char *VAR_10 = 0;
  char *VAR_11 = 0;
  const char *VAR_12;
  int VAR_13;
  int VAR_14;


  VAR_8 = FUNC_9(VAR_3, 0, &VAR_4->a[0]);
  if( !VAR_8 ) goto exit_rename_column;


  if( VAR_2!=FUNC_1(VAR_3, VAR_8) ) goto exit_rename_column;
  if( VAR_2!=FUNC_2(VAR_3, VAR_8) ) goto exit_rename_column;


  VAR_13 = FUNC_13(VAR_7, VAR_8->pSchema);
  FUNC_0( VAR_13>=0 );
  VAR_12 = VAR_7->aDb[VAR_13].zDbSName;



  if( FUNC_5(VAR_3, VAR_1, VAR_12, VAR_8->zName, 0) ){
    goto exit_rename_column;
  }




  VAR_10 = FUNC_11(VAR_7, VAR_5);
  if( !VAR_10 ) goto exit_rename_column;
  for(VAR_9=0; VAR_9<VAR_8->nCol; VAR_9++){
    if( 0==FUNC_15(VAR_8->aCol[VAR_9].zName, VAR_10) ) break;
  }
  if( VAR_9==VAR_8->nCol ){
    FUNC_7(VAR_3, "no such column: \"%s\"", VAR_10);
    goto exit_rename_column;
  }





  FUNC_10(VAR_3);
  VAR_11 = FUNC_11(VAR_7, VAR_6);
  if( !VAR_11 ) goto exit_rename_column;
  FUNC_0( VAR_6->n>0 );
  VAR_14 = FUNC_8(VAR_6->z[0]);
  FUNC_12(VAR_3,
      "UPDATE \"%w\".%s SET "
      "sql = sqlite_rename_column(sql, type, name, %Q, %Q, %d, %Q, %d, %d) "
      "WHERE name NOT LIKE 'sqlite_%%' AND (type != 'index' OR tbl_name = %Q)"
      " AND sql NOT LIKE 'create virtual%%'",
      VAR_12, VAR_0,
      VAR_12, VAR_8->zName, VAR_9, VAR_11, VAR_14, VAR_13==1,
      VAR_8->zName
  );

  FUNC_12(VAR_3,
      "UPDATE temp.%s SET "
      "sql = sqlite_rename_column(sql, type, name, %Q, %Q, %d, %Q, %d, 1) "
      "WHERE type IN ('trigger', 'view')",
      VAR_0,
      VAR_12, VAR_8->zName, VAR_9, VAR_11, VAR_14
  );


  FUNC_3(VAR_3, VAR_13);
  FUNC_4(VAR_3, VAR_12, VAR_13==1);

 exit_rename_column:
  FUNC_14(VAR_7, VAR_4);
  FUNC_6(VAR_7, VAR_10);
  FUNC_6(VAR_7, VAR_11);
  return;
}
