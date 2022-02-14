
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ pVtab; } ;
typedef TYPE_1__ sqlite3_vtab_cursor ;
typedef int sqlite3_value ;
struct TYPE_7__ {int db; } ;
typedef TYPE_2__ schema_vtab ;
struct TYPE_8__ {int pDbList; int pColumnList; int pTableList; scalar_t__ rowid; } ;
typedef TYPE_3__ schema_cursor ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,char*,int,int *,int ) ;

__attribute__((used)) static int FUNC_3(
  sqlite3_vtab_cursor *VAR_1,
  int VAR_2, const char *VAR_3,
  int VAR_4, sqlite3_value **VAR_5
){
  int VAR_6;
  schema_vtab *VAR_7 = (schema_vtab *)(VAR_1->pVtab);
  schema_cursor *VAR_8 = (schema_cursor *)VAR_1;
  VAR_8->rowid = 0;
  FUNC_0(&VAR_8->pTableList);
  FUNC_0(&VAR_8->pColumnList);
  FUNC_0(&VAR_8->pDbList);
  VAR_6 = FUNC_2(VAR_7->db,"PRAGMA database_list", -1, &VAR_8->pDbList, 0);
  return (VAR_6==VAR_0 ? FUNC_1(VAR_1) : VAR_6);
}
