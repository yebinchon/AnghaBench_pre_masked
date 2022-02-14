
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * lpVtbl; } ;
struct TYPE_6__ {int ref; unsigned int exif_color_space; TYPE_1__ IWICColorContext_iface; scalar_t__ profile_len; int * profile; scalar_t__ type; } ;
typedef TYPE_1__ IWICColorContext ;
typedef int HRESULT ;
typedef TYPE_2__ ColorContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 TYPE_2__* FUNC_1 (int ,int ,int) ;
 int VAR_3 ;

HRESULT FUNC_2(IWICColorContext **VAR_4)
{
    ColorContext *VAR_5;

    if (!VAR_4) return VAR_1;

    VAR_5 = FUNC_1(FUNC_0(), 0, sizeof(ColorContext));
    if (!VAR_5) return VAR_2;

    VAR_5->IWICColorContext_iface.lpVtbl = &VAR_0;
    VAR_5->ref = 1;
    VAR_5->type = 0;
    VAR_5->profile = ((void*)0);
    VAR_5->profile_len = 0;
    VAR_5->exif_color_space = ~0u;

    *VAR_4 = &VAR_5->IWICColorContext_iface;

    return VAR_3;
}
