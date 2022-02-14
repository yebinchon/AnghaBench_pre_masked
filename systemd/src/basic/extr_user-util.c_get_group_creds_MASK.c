
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct group {char* gr_name; int gr_gid; } ;
typedef int gid_t ;
typedef int UserCredsFlags ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_2 ;
 char* VAR_3 ;
 scalar_t__ FUNC_1 (char const*,char*,char*) ;
 int VAR_4 ;
 int FUNC_2 (char const**) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int ) ;
 struct group* FUNC_4 (int ) ;
 struct group* FUNC_5 (char const*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (char const*,int *) ;
 scalar_t__ FUNC_8 () ;

int FUNC_9(const char **VAR_6, gid_t *VAR_7, UserCredsFlags VAR_8) {
        struct group *VAR_9;
        gid_t VAR_10;

        FUNC_2(VAR_6);



        if (FUNC_1(*VAR_6, "root", "0")) {
                *VAR_6 = "root";

                if (VAR_7)
                        *VAR_7 = 0;

                return 0;
        }

        if (FUNC_8() &&
            FUNC_1(*VAR_6, VAR_3, "65534")) {
                *VAR_6 = VAR_3;

                if (VAR_7)
                        *VAR_7 = VAR_2;

                return 0;
        }

        if (FUNC_7(*VAR_6, &VAR_10) >= 0) {
                VAR_5 = 0;
                VAR_9 = FUNC_4(VAR_10);

                if (VAR_9)
                        *VAR_6 = VAR_9->gr_name;
                else if (FUNC_0(VAR_8, VAR_4)) {
                        if (VAR_7)
                                *VAR_7 = VAR_10;

                        return 0;
                }
        } else {
                VAR_5 = 0;
                VAR_9 = FUNC_5(*VAR_6);
        }

        if (!VAR_9)
                return FUNC_3(VAR_1);

        if (VAR_7) {
                if (!FUNC_6(VAR_9->gr_gid))
                        return -VAR_0;

                *VAR_7 = VAR_9->gr_gid;
        }

        return 0;
}
