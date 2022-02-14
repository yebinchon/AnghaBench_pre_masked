
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int func_info_t ;
struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_5__ {int ref; int * info; int * obj; TYPE_2__ IUnknown_iface; int dispex; } ;
typedef TYPE_1__ func_disp_t ;
typedef int DispatchEx ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_2__*,int *) ;

__attribute__((used)) static func_disp_t *FUNC_2(DispatchEx *VAR_2, func_info_t *VAR_3)
{
    func_disp_t *VAR_4;

    VAR_4 = FUNC_0(sizeof(func_disp_t));
    if(!VAR_4)
        return ((void*)0);

    VAR_4->IUnknown_iface.lpVtbl = &VAR_0;
    FUNC_1(&VAR_4->dispex, &VAR_4->IUnknown_iface, &VAR_1);
    VAR_4->ref = 1;
    VAR_4->obj = VAR_2;
    VAR_4->info = VAR_3;

    return VAR_4;
}
