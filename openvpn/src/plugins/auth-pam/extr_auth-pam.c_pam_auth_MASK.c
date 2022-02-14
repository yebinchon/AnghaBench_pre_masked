
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct user_pass {char* username; TYPE_1__* name_value_list; } ;
struct pam_conv {void* appdata_ptr; int conv; } ;
typedef int pam_handle_t ;
struct TYPE_2__ {scalar_t__ len; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*,char*) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (char const*,char*,struct pam_conv*,int **) ;
 char* FUNC_5 (int *,int) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_6(const char *VAR_3, const struct user_pass *VAR_4)
{
    struct pam_conv VAR_5;
    pam_handle_t *VAR_6 = ((void*)0);
    int VAR_7 = VAR_0;
    int VAR_8 = 0;
    const int VAR_9 = (VAR_4->name_value_list && VAR_4->name_value_list->len > 0);


    VAR_5.conv = VAR_1;
    VAR_5.appdata_ptr = (void *)VAR_4;
    VAR_7 = FUNC_4(VAR_3, VAR_9 ? ((void*)0) : VAR_4->username, &VAR_5, &VAR_6);
    if (VAR_7 == VAR_0)
    {

        VAR_7 = FUNC_2(VAR_6, 0);
        if (VAR_7 == VAR_0)
        {
            VAR_7 = FUNC_1(VAR_6, 0);
        }
        if (VAR_7 == VAR_0)
        {
            VAR_8 = 1;
        }


        if (!VAR_8)
        {
            FUNC_0(VAR_2, "AUTH-PAM: BACKGROUND: user '%s' failed to authenticate: %s\n",
                    VAR_4->username,
                    FUNC_5(VAR_6, VAR_7));
        }


        FUNC_3(VAR_6, VAR_7);
    }

    return VAR_8;
}
