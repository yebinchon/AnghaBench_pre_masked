
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__,char*,char const*) ;
 scalar_t__ FUNC_2 (char const*) ;

int FUNC_3(const char *VAR_4) {
        if (FUNC_2(VAR_4) < 0 && VAR_3 != VAR_0)



                if (VAR_3 != VAR_1 || FUNC_0(VAR_4, VAR_2) >= 0)
                        return FUNC_1(VAR_3, "Failed to remove \"%s\": %m", VAR_4);

        return 0;
}
