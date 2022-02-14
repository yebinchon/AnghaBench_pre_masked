
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * FUNC_0 (char const*,char) ;

int FUNC_1(char VAR_0, const char *VAR_1) {

        if ((VAR_0 >= '0' && VAR_0 <= '9') ||
            (VAR_0 >= 'A' && VAR_0 <= 'Z') ||
            (VAR_0 >= 'a' && VAR_0 <= 'z') ||
            FUNC_0("#+-.:=@_", VAR_0) != ((void*)0) ||
            (VAR_1 != ((void*)0) && FUNC_0(VAR_1, VAR_0) != ((void*)0)))
                return 1;

        return 0;
}
