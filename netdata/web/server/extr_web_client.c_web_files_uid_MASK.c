
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct passwd {char* pw_name; int pw_uid; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 () ;
 struct passwd* FUNC_4 (char*) ;
 struct passwd* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int) ;

uid_t FUNC_7(void) {
    static char *VAR_2 = ((void*)0);
    static uid_t VAR_3 = 0;

    if(FUNC_6(!VAR_2)) {



        struct passwd *VAR_4 = FUNC_5(FUNC_3());
        VAR_2 = FUNC_0(VAR_0, "web files owner", (VAR_4)?(VAR_4->pw_name?VAR_4->pw_name:""):"");
        if(!VAR_2 || !*VAR_2)
            VAR_3 = FUNC_3();
        else {



            VAR_4 = FUNC_4(VAR_2);
            if(!VAR_4) {
                FUNC_2("User '%s' is not present. Ignoring option.", VAR_2);
                VAR_3 = FUNC_3();
            }
            else {
                FUNC_1(VAR_1, "Web files owner set to %s.", VAR_2);
                VAR_3 = VAR_4->pw_uid;
            }
        }
    }

    return(VAR_3);
}
