
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 () ;
 int FUNC_2 (char const*) ;
 char* FUNC_3 (char const*) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (char const*,int ) ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 scalar_t__ FUNC_6 (char const*,int ) ;
 char* FUNC_7 (char*,char const*) ;

__attribute__((used)) static int FUNC_8(const char *VAR_5) {
        int VAR_6;

        FUNC_0(VAR_5);






        if (!FUNC_2(VAR_5))
                return -VAR_0;

        VAR_6 = FUNC_1();
        if (VAR_6 < 0)
                return VAR_6;
        if (VAR_6 > 0) {



                if (FUNC_6(VAR_5, VAR_3))
                        return 0;

                if (FUNC_5(VAR_5, "name="))
                        return -VAR_1;

        } else {
                const char *VAR_7, *VAR_8;

                VAR_8 = FUNC_3(VAR_5);
                VAR_7 = FUNC_7("/sys/fs/cgroup/", VAR_8);

                if (FUNC_4(VAR_7, VAR_2) < 0)
                        return -VAR_4;
        }

        return 0;
}
