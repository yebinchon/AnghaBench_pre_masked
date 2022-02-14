
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * user_df; int * offsets; int * dt; } ;
typedef TYPE_1__ DataFormat ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (char*,TYPE_1__*) ;

void FUNC_3(DataFormat * VAR_0)
{
    FUNC_2("Deleting DataFormat: %p\n", VAR_0);

    FUNC_1(FUNC_0(), 0, VAR_0->dt);
    VAR_0->dt = ((void*)0);
    FUNC_1(FUNC_0(), 0, VAR_0->offsets);
    VAR_0->offsets = ((void*)0);
    FUNC_1(FUNC_0(), 0, VAR_0->user_df);
    VAR_0->user_df = ((void*)0);
}
