
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct user_pass {char const* username; char* password; } ;
struct tls_session {char* common_name; TYPE_1__* opt; } ;
struct tls_multi {int dummy; } ;
struct status_output {int dummy; } ;
struct gc_arena {int dummy; } ;
struct argv {int dummy; } ;
struct TYPE_2__ {int ssl_flags; int es; scalar_t__ auth_user_pass_verify_script_via_file; int auth_user_pass_verify_script; int tmp_dir; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tls_session*,struct tls_multi*,struct user_pass const*) ;
 struct argv FUNC_1 () ;
 int FUNC_2 (struct argv*,int ) ;
 int FUNC_3 (struct argv*,char*,char const*) ;
 int FUNC_4 (struct argv*) ;
 int FUNC_5 (struct gc_arena*) ;
 struct gc_arena FUNC_6 () ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (struct argv*,int ,int ,char*) ;
 char* FUNC_9 (int ,char*,struct gc_arena*) ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (int ,char*,char*) ;
 int FUNC_13 (struct tls_session*) ;
 int FUNC_14 (struct status_output*) ;
 struct status_output* FUNC_15 (char const*,int ,int,int *,int ) ;
 int FUNC_16 (struct status_output*,char*,char*) ;
 scalar_t__ FUNC_17 (char const*) ;

__attribute__((used)) static bool
FUNC_18(struct tls_session *VAR_3, struct tls_multi *VAR_4,
                        const struct user_pass *VAR_5)
{
    struct gc_arena VAR_6 = FUNC_6();
    struct argv VAR_7 = FUNC_1();
    const char *VAR_8 = "";
    bool VAR_9 = 0;


    if ((VAR_3->opt->ssl_flags & VAR_1) || FUNC_17(VAR_5->username))
    {

        FUNC_12(VAR_3->opt->es, "script_type", "user-pass-verify");

        if (VAR_3->opt->auth_user_pass_verify_script_via_file)
        {
            struct status_output *VAR_10;

            VAR_8 = FUNC_9(VAR_3->opt->tmp_dir, "up",
                                                 &VAR_6);
            if (VAR_8)
            {
                VAR_10 = FUNC_15(VAR_8, 0, -1, ((void*)0), VAR_2);
                FUNC_16(VAR_10, "%s", VAR_5->username);
                FUNC_16(VAR_10, "%s", VAR_5->password);
                if (!FUNC_14(VAR_10))
                {
                    FUNC_7(VAR_0, "TLS Auth Error: could not write username/password to file: %s",
                        VAR_8);
                    goto done;
                }
            }
            else
            {
                FUNC_7(VAR_0, "TLS Auth Error: could not create write "
                    "username/password to temp file");
            }
        }
        else
        {
            FUNC_12(VAR_3->opt->es, "username", VAR_5->username);
            FUNC_12(VAR_3->opt->es, "password", VAR_5->password);
        }


        FUNC_12(VAR_3->opt->es, "common_name", VAR_3->common_name);


        FUNC_13(VAR_3);


        FUNC_0(VAR_3, VAR_4, VAR_5);


        FUNC_2(&VAR_7, VAR_3->opt->auth_user_pass_verify_script);
        FUNC_3(&VAR_7, "%s", VAR_8);


        VAR_9 = FUNC_8(&VAR_7, VAR_3->opt->es, 0,
                                 "--auth-user-pass-verify");

        if (!VAR_3->opt->auth_user_pass_verify_script_via_file)
        {
            FUNC_11(VAR_3->opt->es, "password");
        }
    }
    else
    {
        FUNC_7(VAR_0, "TLS Auth Error: peer provided a blank username");
    }

done:
    if (VAR_8 && FUNC_17(VAR_8) > 0)
    {
        FUNC_10(VAR_8);
    }

    FUNC_4(&VAR_7);
    FUNC_5(&VAR_6);
    return VAR_9;
}
