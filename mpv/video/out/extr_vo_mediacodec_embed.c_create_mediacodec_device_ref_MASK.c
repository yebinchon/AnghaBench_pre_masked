
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct vo {TYPE_1__* opts; } ;
struct TYPE_12__ {scalar_t__ data; } ;
struct TYPE_11__ {TYPE_2__* hwctx; } ;
struct TYPE_10__ {void* surface; } ;
struct TYPE_9__ {scalar_t__ WinID; } ;
typedef TYPE_2__ AVMediaCodecDeviceContext ;
typedef TYPE_3__ AVHWDeviceContext ;
typedef TYPE_4__ AVBufferRef ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__**) ;
 TYPE_4__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;

__attribute__((used)) static AVBufferRef *FUNC_3(struct vo *VAR_1)
{
    AVBufferRef *VAR_2 = FUNC_1(VAR_0);
    if (!VAR_2)
        return ((void*)0);

    AVHWDeviceContext *VAR_3 = (void *)VAR_2->data;
    AVMediaCodecDeviceContext *VAR_4 = VAR_3->hwctx;
    VAR_4->surface = (void *)(intptr_t)(VAR_1->opts->WinID);

    if (FUNC_2(VAR_2) < 0)
        FUNC_0(&VAR_2);

    return VAR_2;
}
