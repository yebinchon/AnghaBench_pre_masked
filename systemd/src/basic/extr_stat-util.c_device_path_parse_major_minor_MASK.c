
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mode_t ;
typedef int dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char const*,int *) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 char* FUNC_3 (char const*,char*) ;

int FUNC_4(const char *VAR_3, mode_t *VAR_4, dev_t *VAR_5) {
        mode_t VAR_6;
        dev_t VAR_7;
        int VAR_8;





        if (FUNC_2(VAR_3, "/run/systemd/inaccessible/chr")) {
                VAR_6 = VAR_2;
                VAR_7 = FUNC_0(0, 0);
        } else if (FUNC_2(VAR_3, "/run/systemd/inaccessible/blk")) {
                VAR_6 = VAR_1;
                VAR_7 = FUNC_0(0, 0);
        } else {
                const char *VAR_9;

                VAR_9 = FUNC_3(VAR_3, "/dev/block/");
                if (VAR_9)
                        VAR_6 = VAR_1;
                else {
                        VAR_9 = FUNC_3(VAR_3, "/dev/char/");
                        if (!VAR_9)
                                return -VAR_0;

                        VAR_6 = VAR_2;
                }

                VAR_8 = FUNC_1(VAR_9, &VAR_7);
                if (VAR_8 < 0)
                        return VAR_8;
        }

        if (VAR_4)
                *VAR_4 = VAR_6;
        if (VAR_5)
                *VAR_5 = VAR_7;

        return 0;
}
