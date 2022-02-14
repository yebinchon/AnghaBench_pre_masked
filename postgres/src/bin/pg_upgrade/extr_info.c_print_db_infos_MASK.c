
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ndbs; TYPE_1__* dbs; } ;
struct TYPE_4__ {int rel_arr; int db_name; } ;
typedef TYPE_2__ DbInfoArr ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(DbInfoArr *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->ndbs; VAR_2++)
 {
  FUNC_0(VAR_0, "Database: %s\n", VAR_1->dbs[VAR_2].db_name);
  FUNC_1(&VAR_1->dbs[VAR_2].rel_arr);
  FUNC_0(VAR_0, "\n\n");
 }
}
