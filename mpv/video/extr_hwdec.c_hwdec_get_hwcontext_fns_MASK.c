
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwcontext_fns {int av_hwdevice_type; } ;


 struct hwcontext_fns const** VAR_0 ;

const struct hwcontext_fns *FUNC_0(int VAR_1)
{
    for (int VAR_2 = 0; VAR_0[VAR_2]; VAR_2++) {
        if (VAR_0[VAR_2]->av_hwdevice_type == VAR_1)
            return VAR_0[VAR_2];
    }
    return ((void*)0);
}
