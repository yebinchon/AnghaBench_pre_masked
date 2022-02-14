
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

int FUNC_0(char VAR_1) {

        if (VAR_1 >= '0' && VAR_1 <= '9')
                return VAR_1 - '0';

        if (VAR_1 >= 'a' && VAR_1 <= 'f')
                return VAR_1 - 'a' + 10;

        if (VAR_1 >= 'A' && VAR_1 <= 'F')
                return VAR_1 - 'A' + 10;

        return -VAR_0;
}
