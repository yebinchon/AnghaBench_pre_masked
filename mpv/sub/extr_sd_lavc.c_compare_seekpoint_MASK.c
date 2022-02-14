
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seekpoint {scalar_t__ pts; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
    const struct seekpoint *VAR_2 = VAR_0, *VAR_3 = VAR_1;
    return VAR_2->pts == VAR_3->pts ? 0 : (VAR_2->pts < VAR_3->pts ? -1 : +1);
}
