
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char const* what; } ;
struct TYPE_5__ {char const* what; } ;
struct TYPE_7__ {TYPE_2__ parameters_fragment; scalar_t__ from_fragment; TYPE_1__ parameters_proc_self_mountinfo; scalar_t__ from_proc_self_mountinfo; } ;
typedef TYPE_3__ Mount ;



__attribute__((used)) static const char *FUNC_0(const Mount *VAR_0) {
        if (VAR_0->from_proc_self_mountinfo && VAR_0->parameters_proc_self_mountinfo.what)
                return VAR_0->parameters_proc_self_mountinfo.what;
        if (VAR_0->from_fragment && VAR_0->parameters_fragment.what)
                return VAR_0->parameters_fragment.what;
        return ((void*)0);
}
