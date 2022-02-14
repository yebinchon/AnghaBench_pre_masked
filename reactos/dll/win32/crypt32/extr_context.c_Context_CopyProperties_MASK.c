
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * properties; } ;
typedef int CONTEXT_PROPERTY_LIST ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (void const*) ;

void FUNC_3(const void *VAR_0, const void *VAR_1)
{
    CONTEXT_PROPERTY_LIST *VAR_2, *VAR_3;

    VAR_2 = FUNC_2(VAR_0)->properties;
    VAR_3 = FUNC_2(VAR_1)->properties;
    FUNC_1(VAR_2 && VAR_3);
    FUNC_0(VAR_2, VAR_3);
}
