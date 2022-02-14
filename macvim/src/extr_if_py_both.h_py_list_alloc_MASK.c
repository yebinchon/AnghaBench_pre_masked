
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lv_refcount; } ;
typedef TYPE_1__ list_T ;


 int FUNC_0 () ;
 TYPE_1__* FUNC_1 () ;

__attribute__((used)) static list_T *
FUNC_2(void)
{
    list_T *VAR_0;

    if (!(VAR_0 = FUNC_1()))
    {
 FUNC_0();
 return ((void*)0);
    }
    ++VAR_0->lv_refcount;

    return VAR_0;
}
