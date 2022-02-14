
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int up ;
struct user_pass {int verb; char* username; char* password; char* common_name; char* response; struct name_value_list const* name_value_list; } ;
struct name_value_list {int dummy; } ;




 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 char* FUNC_2 () ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (struct user_pass*,int ,int) ;
 int FUNC_6 (char const*,struct user_pass*) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int,char*,int) ;
 int FUNC_10 (int,int ) ;
 int FUNC_11 (struct user_pass*) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_12(int VAR_5, const char *VAR_6, int VAR_7, const struct name_value_list *VAR_8)
{
    struct user_pass VAR_9;
    int VAR_10;







    if (FUNC_0(VAR_7))
    {
        FUNC_4(VAR_4, "AUTH-PAM: BACKGROUND: INIT service='%s'\n", VAR_6);
    }
    if (FUNC_10(VAR_5, VAR_1) == -1)
    {
        FUNC_4(VAR_4, "AUTH-PAM: BACKGROUND: write error on response socket [1]\n");
        goto done;
    }




    while (1)
    {
        FUNC_5(&VAR_9, 0, sizeof(VAR_9));
        VAR_9.verb = VAR_7;
        VAR_9.name_value_list = VAR_8;


        VAR_10 = FUNC_8(VAR_5);

        if (FUNC_0(VAR_7))
        {
            FUNC_4(VAR_4, "AUTH-PAM: BACKGROUND: received command code: %d\n", VAR_10);
        }

        switch (VAR_10)
        {
            case 128:
                if (FUNC_9(VAR_5, VAR_9.username, sizeof(VAR_9.username)) == -1
                    || FUNC_9(VAR_5, VAR_9.password, sizeof(VAR_9.password)) == -1
                    || FUNC_9(VAR_5, VAR_9.common_name, sizeof(VAR_9.common_name)) == -1)
                {
                    FUNC_4(VAR_4, "AUTH-PAM: BACKGROUND: read error on command channel: code=%d, exiting\n",
                            VAR_10);
                    goto done;
                }

                if (FUNC_0(VAR_7))
                {




                    FUNC_4(VAR_4, "AUTH-PAM: BACKGROUND: USER: %s\n", VAR_9.username);

                }


                FUNC_11(&VAR_9);

                if (FUNC_6(VAR_6, &VAR_9))
                {
                    if (FUNC_10(VAR_5, VAR_3) == -1)
                    {
                        FUNC_4(VAR_4, "AUTH-PAM: BACKGROUND: write error on response socket [2]\n");
                        goto done;
                    }
                }
                else
                {
                    if (FUNC_10(VAR_5, VAR_2) == -1)
                    {
                        FUNC_4(VAR_4, "AUTH-PAM: BACKGROUND: write error on response socket [3]\n");
                        goto done;
                    }
                }
                FUNC_7(VAR_9.password, sizeof(VAR_9.password));
                break;

            case 129:
                goto done;

            case -1:
                FUNC_4(VAR_4, "AUTH-PAM: BACKGROUND: read error on command channel\n");
                goto done;

            default:
                FUNC_4(VAR_4, "AUTH-PAM: BACKGROUND: unknown command code: code=%d, exiting\n",
                        VAR_10);
                goto done;
        }
        FUNC_7(VAR_9.response, sizeof(VAR_9.response));
    }
done:
    FUNC_7(VAR_9.password, sizeof(VAR_9.password));
    FUNC_7(VAR_9.response, sizeof(VAR_9.response));



    if (FUNC_0(VAR_7))
    {
        FUNC_4(VAR_4, "AUTH-PAM: BACKGROUND: EXIT\n");
    }

    return;
}
