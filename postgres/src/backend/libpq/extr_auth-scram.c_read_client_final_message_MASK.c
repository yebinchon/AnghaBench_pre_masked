
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char cbind_flag; char* ClientProof; char* client_final_message_without_proof; void* client_final_nonce; int port; scalar_t__ channel_binding_in_use; } ;
typedef TYPE_1__ scram_state ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_1 (int ,size_t*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char const*,int) ;
 void* FUNC_8 (int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (size_t) ;
 int FUNC_11 (char*,size_t,char*,int) ;
 int FUNC_12 (size_t) ;
 int FUNC_13 (char*,size_t,char*,int) ;
 char* FUNC_14 (char const*) ;
 char* FUNC_15 (char**,char*) ;
 void* FUNC_16 (char**,char) ;
 int FUNC_17 (char*,size_t,char*) ;
 scalar_t__ FUNC_18 (char*,char*) ;
 size_t FUNC_19 (char*) ;

__attribute__((used)) static void
FUNC_20(scram_state *VAR_4, const char *VAR_5)
{
 char VAR_6;
 char *VAR_7;
 char *VAR_8;
 char *VAR_9,
      *VAR_10;
 char *VAR_11;
 char *VAR_12;
 int VAR_13;

 VAR_9 = VAR_11 = FUNC_14(VAR_5);
 VAR_7 = FUNC_16(&VAR_11, 'c');
 if (VAR_4->channel_binding_in_use)
 {
  FUNC_2(VAR_2, "channel binding not supported by this build");

 }
 else
 {






  if (!(FUNC_18(VAR_7, "biws") == 0 && VAR_4->cbind_flag == 'n') &&
   !(FUNC_18(VAR_7, "eSws") == 0 && VAR_4->cbind_flag == 'y'))
   FUNC_3(VAR_2,
     (FUNC_4(VAR_1),
      (FUNC_6("unexpected SCRAM channel-binding attribute in client-final-message"))));
 }

 VAR_4->client_final_nonce = FUNC_16(&VAR_11, 'r');


 do
 {
  VAR_10 = VAR_11 - 1;
  VAR_8 = FUNC_15(&VAR_11, &VAR_6);
 } while (VAR_6 != 'p');

 VAR_13 = FUNC_10(FUNC_19(VAR_8));
 VAR_12 = FUNC_8(VAR_13);
 if (FUNC_11(VAR_8, FUNC_19(VAR_8), VAR_12,
       VAR_13) != VAR_3)
  FUNC_3(VAR_2,
    (FUNC_4(VAR_1),
     FUNC_6("malformed SCRAM message"),
     FUNC_5("Malformed proof in client-final-message.")));
 FUNC_7(VAR_4->ClientProof, VAR_12, VAR_3);
 FUNC_9(VAR_12);

 if (*VAR_11 != '\0')
  FUNC_3(VAR_2,
    (FUNC_4(VAR_1),
     FUNC_6("malformed SCRAM message"),
     FUNC_5("Garbage found at the end of client-final-message.")));

 VAR_4->client_final_message_without_proof = FUNC_8(VAR_10 - VAR_9 + 1);
 FUNC_7(VAR_4->client_final_message_without_proof, VAR_5, VAR_10 - VAR_9);
 VAR_4->client_final_message_without_proof[VAR_10 - VAR_9] = '\0';
}
