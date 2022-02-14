
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int endCharCode; int startCharCode; } ;
typedef scalar_t__ DWORD ;
typedef TYPE_1__ CMAP_SegmentedCoverage_group ;


 scalar_t__ const FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void* VAR_1)
{
    const DWORD *VAR_2 = VAR_0;
    const CMAP_SegmentedCoverage_group *VAR_3 = VAR_1;

    if (*VAR_2 < FUNC_0(VAR_3->startCharCode))
        return -1;
    if (*VAR_2 > FUNC_0(VAR_3->endCharCode))
        return 1;
    return 0;
}
