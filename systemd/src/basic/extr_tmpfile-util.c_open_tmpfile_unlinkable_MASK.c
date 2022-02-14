
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*,int,int) ;
 char* FUNC_3 (char const*,char*) ;
 int FUNC_4 (char const**) ;
 int FUNC_5 (char*) ;

int FUNC_6(const char *VAR_5, int VAR_6) {
        char *VAR_7;
        int VAR_8, VAR_9;

        if (!VAR_5) {
                VAR_9 = FUNC_4(&VAR_5);
                if (VAR_9 < 0)
                        return VAR_9;
        } else if (FUNC_0(VAR_5))
                return -VAR_0;




        VAR_8 = FUNC_2(VAR_5, VAR_6|VAR_2|VAR_1, VAR_3|VAR_4);
        if (VAR_8 >= 0)
                return VAR_8;


        VAR_7 = FUNC_3(VAR_5, "/systemd-tmp-XXXXXX");

        VAR_8 = FUNC_1(VAR_7);
        if (VAR_8 < 0)
                return VAR_8;

        (void) FUNC_5(VAR_7);

        return VAR_8;
}
