
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * lpVtbl; } ;
struct TYPE_6__ {int ref; TYPE_1__ IStream_iface; } ;
typedef TYPE_2__ HGLOBALStreamImpl ;


 int FUNC_0 () ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (int ,int ,int) ;

__attribute__((used)) static HGLOBALStreamImpl *FUNC_2(void)
{
    HGLOBALStreamImpl *VAR_1;

    VAR_1 = FUNC_1(FUNC_0(), 0, sizeof(*VAR_1));
    if (VAR_1)
    {
        VAR_1->IStream_iface.lpVtbl = &VAR_0;
        VAR_1->ref = 1;
    }
    return VAR_1;
}
