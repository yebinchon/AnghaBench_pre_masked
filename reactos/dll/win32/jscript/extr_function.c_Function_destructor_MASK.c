
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int jsdisp_t ;
struct TYPE_7__ {TYPE_1__* vtbl; } ;
struct TYPE_6__ {int (* destructor ) (TYPE_2__*) ;} ;
typedef TYPE_2__ FunctionInstance ;


 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(jsdisp_t *VAR_0)
{
    FunctionInstance *VAR_1 = FUNC_0(VAR_0);
    VAR_1->vtbl->destructor(VAR_1);
    FUNC_1(VAR_1);
}
