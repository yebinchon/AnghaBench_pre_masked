
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union in_addr_union {int dummy; } in_addr_union ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int,char const*,union in_addr_union*) ;

int FUNC_2(const char *VAR_3, int *VAR_4, union in_addr_union *VAR_5) {
        int VAR_6;

        FUNC_0(VAR_3);

        VAR_6 = FUNC_1(VAR_0, VAR_3, VAR_5);
        if (VAR_6 >= 0) {
                if (VAR_4)
                        *VAR_4 = VAR_0;
                return 0;
        }

        VAR_6 = FUNC_1(VAR_1, VAR_3, VAR_5);
        if (VAR_6 >= 0) {
                if (VAR_4)
                        *VAR_4 = VAR_1;
                return 0;
        }

        return -VAR_2;
}
