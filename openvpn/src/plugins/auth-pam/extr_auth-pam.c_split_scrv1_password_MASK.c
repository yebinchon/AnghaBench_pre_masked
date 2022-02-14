
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_pass {char* password; char* response; int verb; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,int) ;
 int VAR_0 ;
 char* FUNC_5 (char*,char) ;
 int FUNC_6 (char*,char*) ;
 char* FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char*,char*,int const) ;

__attribute__((used)) static void
FUNC_10(struct user_pass *VAR_1)
{
    const int VAR_2 = FUNC_8("SCRV1:");
    if (FUNC_9(VAR_1->password, "SCRV1:", VAR_2) != 0)
    {
        return;
    }

    char *VAR_3 = FUNC_7(VAR_1->password);
    if (!VAR_3)
    {
        FUNC_1(VAR_0, "AUTH-PAM: out of memory parsing static challenge password\n");
        goto out;
    }

    char *VAR_4 = VAR_3 + VAR_2;
    char *VAR_5 = FUNC_5(VAR_4, ':');
    if (!VAR_5)
    {
        goto out;
    }
    *VAR_5++ = '\0';

    int VAR_6 = FUNC_3(VAR_4, VAR_1->password, sizeof(VAR_1->password)-1);
    if (VAR_6 >= 0)
    {
        VAR_1->password[VAR_6] = '\0';
        VAR_6 = FUNC_3(VAR_5, VAR_1->response, sizeof(VAR_1->response)-1);
        if (VAR_6 >= 0)
        {
            VAR_1->response[VAR_6] = '\0';
            if (FUNC_0(VAR_1->verb))
            {
                FUNC_1(VAR_0, "AUTH-PAM: BACKGROUND: parsed static challenge password\n");
            }
            goto out;
        }
    }


    FUNC_4(VAR_1->password, sizeof(VAR_1->password));
    FUNC_4(VAR_1->response, sizeof(VAR_1->response));
    FUNC_6(VAR_1->password, VAR_3);

    FUNC_1(VAR_0, "AUTH-PAM: base64 decode error while parsing static challenge password\n");

out:
    if (VAR_3)
    {
        FUNC_4(VAR_3, FUNC_8(VAR_3));
        FUNC_2(VAR_3);
    }
}
