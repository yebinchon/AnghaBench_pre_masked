
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct d3drm_frame {int dummy; } ;
struct TYPE_4__ {int * lpVtbl; } ;
typedef TYPE_1__ IDirect3DRMFrame ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct d3drm_frame* FUNC_1 (TYPE_1__*) ;

struct d3drm_frame *FUNC_2(IDirect3DRMFrame *VAR_1)
{
    if (!VAR_1)
        return ((void*)0);
    FUNC_0(VAR_1->lpVtbl == &VAR_0);

    return FUNC_1(VAR_1);
}
