
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct vo {TYPE_1__* priv; } ;
struct TYPE_4__ {int * d3d9_dll; } ;
typedef TYPE_1__ d3d_priv ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct vo*) ;

__attribute__((used)) static void FUNC_4(struct vo *VAR_0)
{
    d3d_priv *VAR_1 = VAR_0->priv;

    FUNC_1(VAR_1, "uninit called.\n");

    FUNC_2(VAR_1);
    FUNC_3(VAR_0);
    if (VAR_1->d3d9_dll)
        FUNC_0(VAR_1->d3d9_dll);
    VAR_1->d3d9_dll = ((void*)0);
}
