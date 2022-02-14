
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint16_t ;


 int VAR_0 ;
 int FUNC_0 (char const*,unsigned int*,unsigned int*) ;

int FUNC_1(const char *VAR_1, uint16_t *VAR_2, uint16_t *VAR_3) {
        unsigned VAR_4, VAR_5;
        int VAR_6;

        VAR_6 = FUNC_0(VAR_1, &VAR_4, &VAR_5);
        if (VAR_6 < 0)
                return VAR_6;

        if (VAR_4 <= 0 || VAR_4 > 65535 || VAR_5 <= 0 || VAR_5 > 65535)
                return -VAR_0;

        if (VAR_5 < VAR_4)
                return -VAR_0;

        *VAR_2 = VAR_4;
        *VAR_3 = VAR_5;

        return 0;
}
