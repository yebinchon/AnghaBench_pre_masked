
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static inline size_t FUNC_0(uint8_t* VAR_0, size_t VAR_1)
{
    size_t VAR_2 = 2;

    while (VAR_2 < VAR_1) {
        if (3 < VAR_0[VAR_2]) {

            VAR_2 += 3;
        } else if (0 != VAR_0[VAR_2 - 1]) {

            VAR_2 += 2;
        } else if (0 != VAR_0[VAR_2 - 2]) {

            VAR_2 += 1;
        } else {

            return VAR_2;
        }
    }

    return VAR_1;
}
