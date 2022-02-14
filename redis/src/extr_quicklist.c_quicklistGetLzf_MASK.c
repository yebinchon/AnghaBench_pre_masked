
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ zl; } ;
typedef TYPE_1__ quicklistNode ;
struct TYPE_5__ {size_t sz; void* compressed; } ;
typedef TYPE_2__ quicklistLZF ;



size_t FUNC_0(const quicklistNode *VAR_0, void **VAR_1) {
    quicklistLZF *VAR_2 = (quicklistLZF *)VAR_0->zl;
    *VAR_1 = VAR_2->compressed;
    return VAR_2->sz;
}
