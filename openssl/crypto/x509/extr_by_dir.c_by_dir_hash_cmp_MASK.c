
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ hash; } ;
typedef TYPE_1__ BY_DIR_HASH ;



__attribute__((used)) static int FUNC_0(const BY_DIR_HASH *const *VAR_0,
                           const BY_DIR_HASH *const *VAR_1)
{
    if ((*VAR_0)->hash > (*VAR_1)->hash)
        return 1;
    if ((*VAR_0)->hash < (*VAR_1)->hash)
        return -1;
    return 0;
}
