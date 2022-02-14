
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flock {int l_len; int l_start; int l_whence; int l_type; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int,int ,struct flock*) ;
 int FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (char const*,int,int) ;
 char* FUNC_3 (char const*,char*) ;
 int FUNC_4 (int) ;

int FUNC_5(const char *VAR_10) {

        struct flock VAR_11 = {
                .l_type = VAR_2,
                .l_whence = VAR_8,
                .l_start = 0,
                .l_len = 0,
        };

        const char *VAR_12;
        int VAR_13, VAR_14;
        if (VAR_10)
                VAR_12 = FUNC_3(VAR_10, VAR_0);
        else
                VAR_12 = VAR_0;

        VAR_13 = FUNC_2(VAR_12, VAR_7|VAR_4|VAR_3|VAR_5|VAR_6, 0600);
        if (VAR_13 < 0)
                return FUNC_1(VAR_9, "Cannot open %s: %m", VAR_12);

        VAR_14 = FUNC_0(VAR_13, VAR_1, &VAR_11);
        if (VAR_14 < 0) {
                FUNC_4(VAR_13);
                return FUNC_1(VAR_9, "Locking %s failed: %m", VAR_12);
        }

        return VAR_13;
}
