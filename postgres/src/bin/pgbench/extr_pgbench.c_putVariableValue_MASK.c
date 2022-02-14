
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int value; int * svalue; } ;
typedef TYPE_1__ Variable ;
typedef int PgBenchValue ;
typedef int CState ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *,char const*,char*) ;

__attribute__((used)) static bool
FUNC_2(CState *VAR_0, const char *VAR_1, char *VAR_2,
     const PgBenchValue *VAR_3)
{
 Variable *VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2);
 if (!VAR_4)
  return 0;

 if (VAR_4->svalue)
  FUNC_0(VAR_4->svalue);
 VAR_4->svalue = ((void*)0);
 VAR_4->value = *VAR_3;

 return 1;
}
