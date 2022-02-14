
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int attnum; } ;
typedef TYPE_1__ FormData_pg_attribute ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (char const*) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_1)
{
 const FormData_pg_attribute *VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 != ((void*)0))
  return VAR_2->attnum;
 return VAR_0;
}
