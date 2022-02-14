
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utsname {int nodename; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (struct utsname*) ;

char* FUNC_5(void) {
        struct utsname VAR_1;





        FUNC_0(FUNC_4(&VAR_1) >= 0);

        if (FUNC_1(VAR_1.nodename) || FUNC_3(VAR_1.nodename, "(none)"))
                return FUNC_2(VAR_0);

        return FUNC_2(VAR_1.nodename);
}
