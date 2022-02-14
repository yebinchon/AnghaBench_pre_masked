
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

int FUNC_2(const char *VAR_1) {
        if (!VAR_1)
                return -VAR_0;

        if (FUNC_1(VAR_1, "1") || FUNC_0(VAR_1, "yes") || FUNC_0(VAR_1, "y") || FUNC_0(VAR_1, "true") || FUNC_0(VAR_1, "t") || FUNC_0(VAR_1, "on"))
                return 1;
        else if (FUNC_1(VAR_1, "0") || FUNC_0(VAR_1, "no") || FUNC_0(VAR_1, "n") || FUNC_0(VAR_1, "false") || FUNC_0(VAR_1, "f") || FUNC_0(VAR_1, "off"))
                return 0;

        return -VAR_0;
}
