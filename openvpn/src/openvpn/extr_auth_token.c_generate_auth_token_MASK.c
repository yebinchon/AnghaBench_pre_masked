
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef char uint8_t ;
typedef char uint64_t ;
typedef int timestamp ;
struct user_pass {char* username; } ;
struct TYPE_3__ {int * hmac; } ;
struct TYPE_4__ {TYPE_1__ auth_token_key; } ;
struct tls_multi {char* auth_token; int auth_token_state_flags; TYPE_2__ opt; } ;
struct gc_arena {int dummy; } ;
struct buffer {int dummy; } ;
typedef int sessid ;
typedef char int64_t ;
typedef int initial_timestamp ;
typedef int hmac_output ;
typedef int hmac_ctx_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct buffer*) ;
 scalar_t__ FUNC_2 (struct buffer*) ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 struct buffer FUNC_3 (int,struct gc_arena*) ;
 int FUNC_4 (struct buffer*,char*,int) ;
 int FUNC_5 (struct buffer*,int ) ;
 int FUNC_6 (int ,char*,char*,char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct gc_arena*) ;
 struct gc_arena FUNC_9 () ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,char const*,int) ;
 char FUNC_14 (char) ;
 int FUNC_15 (int ,char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_16 (char*,char*,int) ;
 int FUNC_17 (scalar_t__,int ,char**) ;
 int FUNC_18 (char*,int) ;
 char* FUNC_19 (char*) ;
 int FUNC_20 (char*) ;

void
FUNC_21(const struct user_pass *VAR_6, struct tls_multi *VAR_7)
{
    struct gc_arena VAR_8 = FUNC_9();

    int64_t VAR_9 = FUNC_14((uint64_t)VAR_5);
    int64_t VAR_10 = VAR_9;

    hmac_ctx_t *VAR_11 = VAR_7->opt.auth_token_key.hmac;
    FUNC_0(FUNC_12(VAR_11) == 256/8);

    uint8_t VAR_12[VAR_0];

    if (VAR_7->auth_token)
    {




        char VAR_13[9];





        char *VAR_14 = VAR_7->auth_token + FUNC_20(VAR_4);
        char *VAR_15 = VAR_14 + VAR_0*8/6;

        VAR_15[12] = '\0';
        FUNC_0(FUNC_16(VAR_15, VAR_13, 9) == 9);






        uint64_t *VAR_16 = (uint64_t *) VAR_13;
        VAR_10 = *VAR_16;

        VAR_15[0] = '\0';
        FUNC_0(FUNC_16(VAR_14, VAR_12, VAR_0)==VAR_0);



        FUNC_7(VAR_7->auth_token);
    }
    else if (!FUNC_18(VAR_12, VAR_0))
    {
        FUNC_15( VAR_3, "Failed to get enough randomness for "
             "authentication token");
    }






    uint8_t VAR_17[256/8];

    FUNC_11(VAR_11);






    if (VAR_7->auth_token_state_flags & VAR_1)
    {
        FUNC_13(VAR_11, (const uint8_t *) "", 0);
    }
    else
    {
        FUNC_13(VAR_11, (uint8_t *) VAR_6->username, (int) FUNC_20(VAR_6->username));
    }
    FUNC_13(VAR_11, VAR_12, VAR_0);
    FUNC_13(VAR_11, (uint8_t *) &VAR_10, sizeof(VAR_10));
    FUNC_13(VAR_11, (uint8_t *) &VAR_9, sizeof(VAR_9));
    FUNC_10(VAR_11, VAR_17);


    struct buffer VAR_18 = FUNC_3(
        2*sizeof(uint64_t) + VAR_0 + 256/8, &VAR_8);

    FUNC_0(FUNC_4(&VAR_18, VAR_12, sizeof(VAR_12)));
    FUNC_0(FUNC_4(&VAR_18, &VAR_10, sizeof(VAR_10)));
    FUNC_0(FUNC_4(&VAR_18, &VAR_9, sizeof(VAR_9)));
    FUNC_0(FUNC_4(&VAR_18, VAR_17, sizeof(VAR_17)));

    char *VAR_19;
    FUNC_17(FUNC_2(&VAR_18), FUNC_1(&VAR_18), &VAR_19);

    struct buffer VAR_20 = FUNC_3(
        FUNC_20(VAR_4) + FUNC_20(VAR_19) + 1, &VAR_8);

    FUNC_0(FUNC_4(&VAR_20, VAR_4, FUNC_20(VAR_4)));
    FUNC_0(FUNC_4(&VAR_20, VAR_19, (int)FUNC_20(VAR_19)));
    FUNC_0(FUNC_5(&VAR_20, 0));

    FUNC_7(VAR_19);

    VAR_7->auth_token = FUNC_19((char *)FUNC_2(&VAR_20));

    FUNC_6(VAR_2, "Generated token for client: %s (%s)",
         VAR_7->auth_token, VAR_6->username);

    FUNC_8(&VAR_8);
}
