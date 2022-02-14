
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct user_pass {int username; int password; } ;
struct tls_session {TYPE_1__* opt; struct key_state* key; } ;
struct tls_multi {int auth_token_state_flags; scalar_t__ auth_token_initial; scalar_t__ auth_token; } ;
struct key_state {int authenticated; int auth_deferred; } ;
struct TYPE_2__ {int ssl_flags; scalar_t__ auth_token_generate; scalar_t__ auth_user_pass_verify_script; int plugins; scalar_t__ auth_token_call_auth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_0 (struct user_pass*,struct tls_multi*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_17 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,...) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (struct tls_multi*) ;
 int FUNC_6 (struct tls_session*,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ,char) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (struct tls_multi*,int ) ;
 int FUNC_12 (struct user_pass*,struct tls_multi*,struct tls_session*) ;
 int FUNC_13 (struct tls_session*,struct tls_multi*,struct user_pass*) ;
 int FUNC_14 (struct tls_session*,struct tls_multi*,struct user_pass*) ;
 int FUNC_15 (struct tls_session*,struct tls_multi*,struct user_pass*) ;
 int FUNC_16 (struct tls_multi*) ;

void
FUNC_17(struct user_pass *VAR_18, struct tls_multi *VAR_19,
                 struct tls_session *VAR_20)
{
    int VAR_21 = VAR_14;
    bool VAR_22 = 1;
    struct key_state *VAR_23 = &VAR_20->key[VAR_9];
    FUNC_9(VAR_18->username);
    FUNC_8(VAR_18->password, VAR_3, VAR_2, '_');





    bool VAR_24 = 0;







    if (VAR_20->opt->auth_token_generate && FUNC_1(VAR_18->password))
    {
        VAR_19->auth_token_state_flags = FUNC_12(VAR_18, VAR_19, VAR_20);
        if (VAR_20->opt->auth_token_call_auth)
        {





        }
        else if (VAR_19->auth_token_state_flags == VAR_1)
        {




            FUNC_3(VAR_10, "TLS: Username/auth-token authentication "
                        "succeeded for username '%s'",
                VAR_18->username);
              VAR_24 = 1;
        }
        else
        {
            FUNC_16(VAR_19);
            VAR_23->authenticated = 0;
            FUNC_3(VAR_10, "TLS: Username/auth-token authentication "
                        "failed for username '%s'", VAR_18->username);
            return;
        }
    }

    if (!VAR_24)
    {






        if (FUNC_4(VAR_20->opt->plugins, VAR_11))
        {
            VAR_21 = FUNC_14(VAR_20, VAR_19, VAR_18);
        }

        if (VAR_20->opt->auth_user_pass_verify_script)
        {
            VAR_22 = FUNC_15(VAR_20, VAR_19, VAR_18);
        }
    }


    if ((VAR_20->opt->ssl_flags & VAR_15) &&
         FUNC_10(VAR_18->username)>VAR_16)
    {
        FUNC_3(VAR_5,
                "TLS Auth Error: --username-as-common name specified and username is longer than the maximum permitted Common Name length of %d characters",
                VAR_16);
        VAR_21 = VAR_13;
    }

    if ((VAR_21 == VAR_14



         ) && VAR_22



        && FUNC_11(VAR_19, VAR_18->username))
    {
        VAR_23->authenticated = 1;
        if ((VAR_20->opt->ssl_flags & VAR_15))
        {
            FUNC_6(VAR_20, VAR_18->username);
        }
        FUNC_3(VAR_4, "TLS: Username/Password authentication %s for username '%s' %s",
            "succeeded",
            VAR_18->username,
            (VAR_20->opt->ssl_flags & VAR_15) ? "[CN SET]" : "");

    }
    else
    {
        FUNC_3(VAR_5, "TLS Auth Error: Auth Username/Password verification failed for peer");
    }
}
