
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LogTarget ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char const*) ;

int FUNC_2(const char *VAR_1) {
        LogTarget VAR_2;

        VAR_2 = FUNC_1(VAR_1);
        if (VAR_2 < 0)
                return -VAR_0;

        FUNC_0(VAR_2);
        return 0;
}
