
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct group {char* gr_name; int gr_gid; } ;
typedef int gid_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 () ;
 struct group* FUNC_4 (int ) ;
 struct group* FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int) ;

gid_t FUNC_7(void) {
    static char *VAR_2 = ((void*)0);
    static gid_t VAR_3 = 0;

    if(FUNC_6(!VAR_2)) {



        struct group *VAR_4 = FUNC_4(FUNC_3());
        VAR_2 = FUNC_0(VAR_0, "web files group", (VAR_4)?(VAR_4->gr_name?VAR_4->gr_name:""):"");
        if(!VAR_2 || !*VAR_2)
            VAR_3 = FUNC_3();
        else {



            VAR_4 = FUNC_5(VAR_2);
            if(!VAR_4) {
                FUNC_2("Group '%s' is not present. Ignoring option.", VAR_2);
                VAR_3 = FUNC_3();
            }
            else {
                FUNC_1(VAR_1, "Web files group set to %s.", VAR_2);
                VAR_3 = VAR_4->gr_gid;
            }
        }
    }

    return(VAR_3);
}
