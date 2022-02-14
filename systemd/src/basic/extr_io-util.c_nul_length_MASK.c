
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;



__attribute__((used)) static size_t FUNC_0(const uint8_t *VAR_0, size_t VAR_1) {
        size_t VAR_2 = 0;

        while (VAR_1 > 0) {
                if (*VAR_0 != 0)
                        break;

                VAR_2++;
                VAR_0++;
                VAR_1--;
        }

        return VAR_2;
}
