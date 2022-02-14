
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct options {int user_script_used; int * chroot_dir; } ;
typedef int script_name ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char*,int *) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char*,int,char*,char const*) ;

__attribute__((used)) static void
FUNC_3(struct options *VAR_2,
                const char **VAR_3,
                const char *VAR_4,
                const char *VAR_5,
                bool VAR_6)
{
    if (*VAR_3)
    {
        FUNC_1(VAR_1, "Multiple --%s scripts defined.  "
            "The previously configured script is overridden.", VAR_5);
    }
    *VAR_3 = VAR_4;
    VAR_2->user_script_used = 1;


    {
        char VAR_7[100];
        FUNC_2(VAR_7, sizeof(VAR_7),
                         "--%s script", VAR_5);

        if (FUNC_0(*VAR_3, VAR_7, (VAR_6 ? VAR_2->chroot_dir : ((void*)0))))
        {
            FUNC_1(VAR_0, "Please correct this error.");
        }

    }

}
