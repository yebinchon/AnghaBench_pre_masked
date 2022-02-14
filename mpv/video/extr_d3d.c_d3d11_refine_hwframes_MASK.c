
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ data; } ;
struct TYPE_6__ {int BindFlags; } ;
struct TYPE_5__ {scalar_t__ format; scalar_t__ sw_format; TYPE_2__* hwctx; } ;
typedef TYPE_1__ AVHWFramesContext ;
typedef TYPE_2__ AVD3D11VAFramesContext ;
typedef TYPE_3__ AVBufferRef ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(AVBufferRef *VAR_3)
{
    AVHWFramesContext *VAR_4 = (void *)VAR_3->data;

    if (VAR_4->format == VAR_0) {
        AVD3D11VAFramesContext *VAR_5 = VAR_4->hwctx;



        if (VAR_4->sw_format != VAR_1)
            VAR_5->BindFlags |= VAR_2;
    }
}
