
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * savedargs; int * iter; } ;
typedef TYPE_1__ PLySRFState ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0)
{
 PLySRFState *VAR_1 = (PLySRFState *) VAR_0;


 FUNC_1(VAR_1->iter);
 VAR_1->iter = ((void*)0);

 if (VAR_1->savedargs)
  FUNC_0(VAR_1->savedargs);
 VAR_1->savedargs = ((void*)0);
}
