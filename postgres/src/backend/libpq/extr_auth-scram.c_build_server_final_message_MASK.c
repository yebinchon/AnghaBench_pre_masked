
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_3__ {char* client_first_message_bare; char* server_first_message; char* client_final_message_without_proof; int ServerKey; } ;
typedef TYPE_1__ scram_state ;
typedef int scram_HMAC_ctx ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char const*,int,char*,int) ;
 char* FUNC_4 (char*,char*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int *,char*,int) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static char *
FUNC_9(scram_state *VAR_2)
{
 uint8 VAR_3[VAR_1];
 char *VAR_4;
 int VAR_5;
 scram_HMAC_ctx VAR_6;


 FUNC_6(&VAR_6, VAR_2->ServerKey, VAR_1);
 FUNC_7(&VAR_6,
       VAR_2->client_first_message_bare,
       FUNC_8(VAR_2->client_first_message_bare));
 FUNC_7(&VAR_6, ",", 1);
 FUNC_7(&VAR_6,
       VAR_2->server_first_message,
       FUNC_8(VAR_2->server_first_message));
 FUNC_7(&VAR_6, ",", 1);
 FUNC_7(&VAR_6,
       VAR_2->client_final_message_without_proof,
       FUNC_8(VAR_2->client_final_message_without_proof));
 FUNC_5(VAR_3, &VAR_6);

 VAR_5 = FUNC_2(VAR_1);

 VAR_4 = FUNC_1(VAR_5 + 1);
 VAR_5 = FUNC_3((const char *) VAR_3,
         VAR_1, VAR_4,
         VAR_5);
 if (VAR_5 < 0)
  FUNC_0(VAR_0, "could not encode server signature");
 VAR_4[VAR_5] = '\0';
 return FUNC_4("v=%s", VAR_4);
}
