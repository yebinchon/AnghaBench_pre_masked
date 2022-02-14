
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * lpVtbl; } ;
struct d3d9 {int refcount; scalar_t__ extended; int wined3d; TYPE_1__ IDirect3D9Ex_iface; } ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

BOOL FUNC_3(struct d3d9 *VAR_14, BOOL VAR_15)
{
    DWORD VAR_16 = VAR_9 | VAR_2 | VAR_8
            | VAR_11 | VAR_4
            | VAR_7 | VAR_3
            | VAR_6 | VAR_5;

    if (!VAR_15)
        VAR_16 |= VAR_12;
    else
        VAR_16 |= VAR_10;

    VAR_14->IDirect3D9Ex_iface.lpVtbl = &VAR_13;
    VAR_14->refcount = 1;

    FUNC_1();
    VAR_14->wined3d = FUNC_0(VAR_16);
    FUNC_2();
    if (!VAR_14->wined3d)
        return VAR_0;
    VAR_14->extended = VAR_15;

    return VAR_1;
}
