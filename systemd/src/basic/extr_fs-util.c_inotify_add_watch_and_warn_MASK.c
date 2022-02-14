
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int,char const*,int ) ;
 int FUNC_1 (scalar_t__,char*,char const*) ;

int FUNC_2(int VAR_2, const char *VAR_3, uint32_t VAR_4) {

        if (FUNC_0(VAR_2, VAR_3, VAR_4) < 0) {
                if (VAR_1 == VAR_0)
                        return FUNC_1(VAR_1, "Failed to add a watch for %s: inotify watch limit reached", VAR_3);

                return FUNC_1(VAR_1, "Failed to add a watch for %s: %m", VAR_3);
        }

        return 0;
}
