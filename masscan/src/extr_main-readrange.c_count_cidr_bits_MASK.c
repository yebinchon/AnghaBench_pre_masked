
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Range {unsigned int begin; unsigned int end; } ;



__attribute__((used)) static unsigned
FUNC_0(struct Range VAR_0)
{
    unsigned VAR_1;

    for (VAR_1=0; VAR_1<32; VAR_1++) {
        unsigned VAR_2 = 0xFFFFFFFF >> VAR_1;

        if ((VAR_0.begin & ~VAR_2) == (VAR_0.end & ~VAR_2)) {
            if ((VAR_0.begin & VAR_2) == 0 && (VAR_0.end & VAR_2) == VAR_2)
                return VAR_1;
        }
    }

    return 0;
}
