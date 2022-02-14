
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Range {scalar_t__ begin; } ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
    struct Range *VAR_2 = (struct Range *)VAR_0;
    struct Range *VAR_3 = (struct Range *)VAR_1;

    if (VAR_2->begin < VAR_3->begin)
        return -1;
    else if (VAR_2->begin > VAR_3->begin)
        return 1;
    else
        return 0;
}
