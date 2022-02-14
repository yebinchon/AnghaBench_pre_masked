
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RangeList {scalar_t__ count; } ;


 int FUNC_0 (struct RangeList const*,unsigned int) ;

int
FUNC_1(unsigned VAR_0, unsigned VAR_1, unsigned VAR_2,
              const struct RangeList *VAR_3,
              const struct RangeList *VAR_4,
              const struct RangeList *VAR_5)
{
    if (VAR_3 && VAR_3->count) {
        if (!FUNC_0(VAR_3, VAR_0))
            return 0;
    }
    if (VAR_4 && VAR_4->count) {
        if (!FUNC_0(VAR_4, VAR_1))
            return 0;
    }
    if (VAR_5 && VAR_5->count) {
        if (!FUNC_0(VAR_5, VAR_2))
            return 0;
    }

    return 1;
}
