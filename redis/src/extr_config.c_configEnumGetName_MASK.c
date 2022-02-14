
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* name; int val; } ;
typedef TYPE_1__ configEnum ;



const char *FUNC_0(configEnum *VAR_0, int VAR_1) {
    while(VAR_0->name != ((void*)0)) {
        if (VAR_0->val == VAR_1) return VAR_0->name;
        VAR_0++;
    }
    return ((void*)0);
}
