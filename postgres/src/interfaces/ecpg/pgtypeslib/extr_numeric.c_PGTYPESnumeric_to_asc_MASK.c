
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int dscale; } ;
typedef TYPE_1__ numeric ;


 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 () ;
 char* FUNC_3 (TYPE_1__*,int) ;

char *
FUNC_4(numeric *VAR_0, int VAR_1)
{
 numeric *VAR_2 = FUNC_2();
 char *VAR_3;

 if (VAR_2 == ((void*)0))
  return ((void*)0);

 if (FUNC_0(VAR_0, VAR_2) < 0)
 {
  FUNC_1(VAR_2);
  return ((void*)0);
 }

 if (VAR_1 < 0)
  VAR_1 = VAR_0->dscale;


 VAR_3 = FUNC_3(VAR_2, VAR_1);
 FUNC_1(VAR_2);
 return VAR_3;
}
