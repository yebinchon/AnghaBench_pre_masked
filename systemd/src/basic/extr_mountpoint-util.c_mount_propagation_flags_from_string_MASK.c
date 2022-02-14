
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

int FUNC_2(const char *VAR_4, unsigned long *VAR_5) {

        if (FUNC_0(VAR_4))
                *VAR_5 = 0;
        else if (FUNC_1(VAR_4, "shared"))
                *VAR_5 = VAR_2;
        else if (FUNC_1(VAR_4, "slave"))
                *VAR_5 = VAR_3;
        else if (FUNC_1(VAR_4, "private"))
                *VAR_5 = VAR_1;
        else
                return -VAR_0;
        return 0;
}
