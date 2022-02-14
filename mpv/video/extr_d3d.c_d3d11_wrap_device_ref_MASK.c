
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ data; } ;
struct TYPE_9__ {int * device; } ;
struct TYPE_8__ {TYPE_2__* hwctx; } ;
typedef int ID3D11Device ;
typedef TYPE_1__ AVHWDeviceContext ;
typedef TYPE_2__ AVD3D11VADeviceContext ;
typedef TYPE_3__ AVBufferRef ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__**) ;
 TYPE_3__* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;

AVBufferRef *FUNC_4(ID3D11Device *VAR_1)
{
    AVBufferRef *VAR_2 = FUNC_2(VAR_0);
    if (!VAR_2)
        return ((void*)0);

    AVHWDeviceContext *VAR_3 = (void *)VAR_2->data;
    AVD3D11VADeviceContext *VAR_4 = VAR_3->hwctx;

    FUNC_0(VAR_1);
    VAR_4->device = VAR_1;

    if (FUNC_3(VAR_2) < 0)
        FUNC_1(&VAR_2);

    return VAR_2;
}
