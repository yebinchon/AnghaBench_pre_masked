
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* server_nonce; int server_first_message; int iterations; int salt; int client_nonce; } ;
typedef TYPE_1__ scram_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,int,char*,int) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (char*,int ,char*,int ,int ) ;
 char* FUNC_8 (int ) ;

__attribute__((used)) static char *
FUNC_9(scram_state *VAR_3)
{
 char VAR_4[VAR_2];
 int VAR_5;

 if (!FUNC_6(VAR_4, VAR_2))
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("could not generate random nonce")));

 VAR_5 = FUNC_4(VAR_2);

 VAR_3->server_nonce = FUNC_3(VAR_5 + 1);
 VAR_5 = FUNC_5(VAR_4, VAR_2,
        VAR_3->server_nonce, VAR_5);
 if (VAR_5 < 0)
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("could not encode random nonce")));
 VAR_3->server_nonce[VAR_5] = '\0';

 VAR_3->server_first_message =
  FUNC_7("r=%s%s,s=%s,i=%u",
     VAR_3->client_nonce, VAR_3->server_nonce,
     VAR_3->salt, VAR_3->iterations);

 return FUNC_8(VAR_3->server_first_message);
}
