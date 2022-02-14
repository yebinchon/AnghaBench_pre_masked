
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* options; } ;
struct TYPE_5__ {TYPE_1__ parameters_fragment; scalar_t__ from_fragment; } ;
typedef TYPE_2__ Swap ;



__attribute__((used)) static const char *FUNC_0(Swap *VAR_0) {
        if (VAR_0->from_fragment)
                return VAR_0->parameters_fragment.options;
        return ((void*)0);
}
