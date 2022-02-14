
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

int FUNC_0(char VAR_1) {
        unsigned VAR_2;

        if (VAR_1 >= '0' && VAR_1 <= '9')
                return VAR_1 - '0';

        VAR_2 = '9' - '0' + 1;

        if (VAR_1 >= 'A' && VAR_1 <= 'V')
                return VAR_1 - 'A' + VAR_2;

        return -VAR_0;
}
