
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* TupleDesc ;
struct TYPE_8__ {int attname; } ;
struct TYPE_7__ {int natts; } ;
typedef TYPE_2__ FormData_pg_attribute ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* FUNC_1 (int) ;
 TYPE_2__* FUNC_2 (TYPE_1__*,int) ;
 char* FUNC_3 (int ) ;

char *
FUNC_4(TupleDesc VAR_3, int VAR_4)
{
 const FormData_pg_attribute *VAR_5;

 VAR_2 = 0;

 if (VAR_4 > VAR_3->natts || VAR_4 == 0 ||
  VAR_4 <= VAR_0)
 {
  VAR_2 = VAR_1;
  return ((void*)0);
 }

 if (VAR_4 > 0)
  VAR_5 = FUNC_2(VAR_3, VAR_4 - 1);
 else
  VAR_5 = FUNC_1(VAR_4);

 return FUNC_3(FUNC_0(VAR_5->attname));
}
