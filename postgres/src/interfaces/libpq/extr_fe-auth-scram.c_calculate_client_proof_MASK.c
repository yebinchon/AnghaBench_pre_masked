
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8 ;
typedef int scram_HMAC_ctx ;
struct TYPE_3__ {char const* client_first_message_bare; char const* server_first_message; int SaltedPassword; int iterations; int saltlen; int salt; int password; } ;
typedef TYPE_1__ fe_scram_state ;


 int VAR_0 ;
 int FUNC_0 (int ,int*) ;
 int FUNC_1 (int*,int,int*) ;
 int FUNC_2 (int*,int *) ;
 int FUNC_3 (int *,int*,int) ;
 int FUNC_4 (int *,char const*,int) ;
 int FUNC_5 (int ,int ,int ,int ,int ) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static void
FUNC_7(fe_scram_state *VAR_1,
        const char *VAR_2,
        uint8 *VAR_3)
{
 uint8 VAR_4[VAR_0];
 uint8 VAR_5[VAR_0];
 uint8 VAR_6[VAR_0];
 int VAR_7;
 scram_HMAC_ctx VAR_8;





 FUNC_5(VAR_1->password, VAR_1->salt, VAR_1->saltlen,
       VAR_1->iterations, VAR_1->SaltedPassword);

 FUNC_0(VAR_1->SaltedPassword, VAR_5);
 FUNC_1(VAR_5, VAR_0, VAR_4);

 FUNC_3(&VAR_8, VAR_4, VAR_0);
 FUNC_4(&VAR_8,
       VAR_1->client_first_message_bare,
       FUNC_6(VAR_1->client_first_message_bare));
 FUNC_4(&VAR_8, ",", 1);
 FUNC_4(&VAR_8,
       VAR_1->server_first_message,
       FUNC_6(VAR_1->server_first_message));
 FUNC_4(&VAR_8, ",", 1);
 FUNC_4(&VAR_8,
       VAR_2,
       FUNC_6(VAR_2));
 FUNC_2(VAR_6, &VAR_8);

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
  VAR_3[VAR_7] = VAR_5[VAR_7] ^ VAR_6[VAR_7];
}
