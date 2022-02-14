
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Range {int begin; int end; } ;



__attribute__((used)) static int
FUNC_0(struct Range VAR_0, struct Range VAR_1)
{
    if (VAR_0.begin < VAR_1.begin) {
        if (VAR_0.end == 0xFFFFFFFF || VAR_0.end + 1 >= VAR_1.begin)
            return 1;
    }
    if (VAR_0.begin >= VAR_1.begin) {
        if (VAR_0.end <= VAR_1.end)
            return 1;
    }

    if (VAR_1.begin < VAR_0.begin) {
        if (VAR_1.end == 0xFFFFFFFF || VAR_1.end + 1 >= VAR_0.begin)
            return 1;
    }
    if (VAR_1.begin >= VAR_0.begin) {
        if (VAR_1.end <= VAR_0.end)
            return 1;
    }

    return 0;
}
