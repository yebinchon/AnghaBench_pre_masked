
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * lpVtbl; } ;
struct d3d8 {int refcount; int wined3d; TYPE_1__ IDirect3D8_iface; } ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

BOOL FUNC_3(struct d3d8 *VAR_11)
{
    DWORD VAR_12 = VAR_4 | VAR_9
            | VAR_2 | VAR_8
            | VAR_5 | VAR_7
            | VAR_3 | VAR_6;

    VAR_11->IDirect3D8_iface.lpVtbl = &VAR_10;
    VAR_11->refcount = 1;

    FUNC_1();
    VAR_11->wined3d = FUNC_0(VAR_12);
    FUNC_2();
    if (!VAR_11->wined3d)
        return VAR_0;

    return VAR_1;
}
