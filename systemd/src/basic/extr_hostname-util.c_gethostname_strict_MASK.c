
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utsname {int nodename; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (struct utsname*) ;

int FUNC_6(char **VAR_2) {
        struct utsname VAR_3;
        char *VAR_4;



        FUNC_0(FUNC_5(&VAR_3) >= 0);

        if (FUNC_2(VAR_3.nodename))
                return -VAR_1;

        if (FUNC_4(VAR_3.nodename, "(none)"))
                return -VAR_1;

        if (FUNC_1(VAR_3.nodename))
                return -VAR_1;

        VAR_4 = FUNC_3(VAR_3.nodename);
        if (!VAR_4)
                return -VAR_0;

        *VAR_2 = VAR_4;
        return 0;
}
