
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char const*,char*) ;

__attribute__((used)) static inline int FUNC_2(const char *VAR_0) {




    if(!FUNC_1(VAR_0, "8a795b0c-2311-11e6-8563-000c295076a6")
       || !FUNC_1(VAR_0, "4aed1458-1c3e-11e6-a53f-000c290fc8f5")
            ) {
        FUNC_0("Blacklisted machine GUID '%s' found.", VAR_0);
        return 1;
    }

    return 0;
}
