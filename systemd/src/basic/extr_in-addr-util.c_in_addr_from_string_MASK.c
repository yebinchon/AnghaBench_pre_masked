
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union in_addr_union {int dummy; } in_addr_union ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (char const*) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int,char const*,union in_addr_union*) ;

int FUNC_4(int VAR_5, const char *VAR_6, union in_addr_union *VAR_7) {
        union in_addr_union VAR_8;
        FUNC_1(VAR_6);

        if (!FUNC_0(VAR_5, VAR_0, VAR_1))
                return -VAR_2;

        VAR_4 = 0;
        if (FUNC_3(VAR_5, VAR_6, VAR_7 ?: &VAR_8) <= 0)
                return FUNC_2(VAR_3);

        return 0;
}
