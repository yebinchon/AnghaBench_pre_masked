
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union in_addr_union {int dummy; } in_addr_union ;


 int FUNC_0 (union in_addr_union const*) ;
 int FUNC_1 (int,union in_addr_union*,union in_addr_union*) ;
 int FUNC_2 (int,union in_addr_union*,unsigned char) ;

int FUNC_3(int VAR_0,
                          const union in_addr_union *VAR_1,
                          unsigned char VAR_2,
                          const union in_addr_union *VAR_3) {

        union in_addr_union VAR_4, VAR_5;
        int VAR_6;

        FUNC_0(VAR_1);
        FUNC_0(VAR_3);

        VAR_4 = *VAR_1;
        VAR_6 = FUNC_2(VAR_0, &VAR_4, VAR_2);
        if (VAR_6 < 0)
                return VAR_6;

        VAR_5 = *VAR_3;
        VAR_6 = FUNC_2(VAR_0, &VAR_5, VAR_2);
        if (VAR_6 < 0)
                return VAR_6;

        return FUNC_1(VAR_0, &VAR_4, &VAR_5);
}
