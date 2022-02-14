
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 scalar_t__ FUNC_0 (char const) ;

int FUNC_1(const char *VAR_0, const char *VAR_1, size_t VAR_2) {

        for (; VAR_2 > 0; VAR_0++, VAR_1++, VAR_2--) {
                int VAR_3, VAR_4;

                VAR_3 = (int) (uint8_t) FUNC_0(*VAR_0);
                VAR_4 = (int) (uint8_t) FUNC_0(*VAR_1);

                if (VAR_3 != VAR_4)
                        return VAR_3 - VAR_4;
        }

        return 0;
}
