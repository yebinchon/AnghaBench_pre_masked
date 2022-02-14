
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* TupleDesc ;
struct TYPE_10__ {int attnum; } ;
struct TYPE_9__ {int attisdropped; int attname; } ;
struct TYPE_8__ {int natts; } ;
typedef TYPE_2__* Form_pg_attribute ;
typedef TYPE_3__ FormData_pg_attribute ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (char const*) ;
 TYPE_2__* FUNC_1 (TYPE_1__*,int) ;
 scalar_t__ FUNC_2 (int *,char const*) ;

int
FUNC_3(TupleDesc VAR_1, const char *VAR_2)
{
 int VAR_3;
 const FormData_pg_attribute *VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_1->natts; VAR_3++)
 {
  Form_pg_attribute VAR_5 = FUNC_1(VAR_1, VAR_3);

  if (FUNC_2(&VAR_5->attname, VAR_2) == 0 &&
   !VAR_5->attisdropped)
   return VAR_3 + 1;
 }

 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4 != ((void*)0))
  return VAR_4->attnum;


 return VAR_0;
}
