
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * lpVtbl; } ;
struct ddraw_clipper {int ref; TYPE_1__ IDirectDrawClipper_iface; } ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;

HRESULT FUNC_0(struct ddraw_clipper *VAR_2)
{
    VAR_2->IDirectDrawClipper_iface.lpVtbl = &VAR_1;
    VAR_2->ref = 1;

    return VAR_0;
}
