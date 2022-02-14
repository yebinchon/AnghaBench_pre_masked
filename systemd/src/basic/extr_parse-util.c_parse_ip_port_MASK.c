
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;


 int VAR_0 ;
 int FUNC_0 (char const*,scalar_t__*) ;

int FUNC_1(const char *VAR_1, uint16_t *VAR_2) {
        uint16_t VAR_3;
        int VAR_4;

        VAR_4 = FUNC_0(VAR_1, &VAR_3);
        if (VAR_4 < 0)
                return VAR_4;

        if (VAR_3 == 0)
                return -VAR_0;

        *VAR_2 = (uint16_t) VAR_3;

        return 0;
}
