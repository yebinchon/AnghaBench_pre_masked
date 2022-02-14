
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* db_name; int rel_arr; } ;
struct TYPE_4__ {int ndbs; TYPE_2__* dbs; } ;
typedef TYPE_1__ DbInfoArr ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_2(DbInfoArr *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->ndbs; VAR_1++)
 {
  FUNC_0(&VAR_0->dbs[VAR_1].rel_arr);
  FUNC_1(VAR_0->dbs[VAR_1].db_name);
 }
 FUNC_1(VAR_0->dbs);
 VAR_0->dbs = ((void*)0);
 VAR_0->ndbs = 0;
}
