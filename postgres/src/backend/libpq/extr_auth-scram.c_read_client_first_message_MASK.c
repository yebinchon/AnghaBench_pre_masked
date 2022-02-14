
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char cbind_flag; void* client_nonce; void* client_username; void* client_first_message_bare; int channel_binding_in_use; TYPE_1__* port; } ;
typedef TYPE_2__ scram_state ;
struct TYPE_4__ {int ssl_in_use; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (char const*) ;
 int FUNC_6 (char**,int *) ;
 void* FUNC_7 (char**,char) ;
 int FUNC_8 (char) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,char*) ;

__attribute__((used)) static void
FUNC_11(scram_state *VAR_4, const char *VAR_5)
{
 char *VAR_6 = FUNC_5(VAR_5);
 char *VAR_7;
 VAR_4->cbind_flag = *VAR_6;
 switch (*VAR_6)
 {
  case 'n':





   if (VAR_4->channel_binding_in_use)
    FUNC_0(VAR_3,
      (FUNC_1(VAR_2),
       FUNC_3("malformed SCRAM message"),
       FUNC_2("The client selected SCRAM-SHA-256-PLUS, but the SCRAM message does not include channel binding data.")));

   VAR_6++;
   if (*VAR_6 != ',')
    FUNC_0(VAR_3,
      (FUNC_1(VAR_2),
       FUNC_3("malformed SCRAM message"),
       FUNC_2("Comma expected, but found character \"%s\".",
           FUNC_8(*VAR_6))));
   VAR_6++;
   break;
  case 'y':






   if (VAR_4->channel_binding_in_use)
    FUNC_0(VAR_3,
      (FUNC_1(VAR_2),
       FUNC_3("malformed SCRAM message"),
       FUNC_2("The client selected SCRAM-SHA-256-PLUS, but the SCRAM message does not include channel binding data.")));
   VAR_6++;
   if (*VAR_6 != ',')
    FUNC_0(VAR_3,
      (FUNC_1(VAR_2),
       FUNC_3("malformed SCRAM message"),
       FUNC_2("Comma expected, but found character \"%s\".",
           FUNC_8(*VAR_6))));
   VAR_6++;
   break;
  case 'p':





   if (!VAR_4->channel_binding_in_use)
    FUNC_0(VAR_3,
      (FUNC_1(VAR_2),
       FUNC_3("malformed SCRAM message"),
       FUNC_2("The client selected SCRAM-SHA-256 without channel binding, but the SCRAM message includes channel binding data.")));

   VAR_7 = FUNC_7(&VAR_6, 'p');





   if (FUNC_10(VAR_7, "tls-server-end-point") != 0)
    FUNC_0(VAR_3,
      (FUNC_1(VAR_2),
       (FUNC_3("unsupported SCRAM channel-binding type \"%s\"",
         FUNC_9(VAR_7)))));
   break;
  default:
   FUNC_0(VAR_3,
     (FUNC_1(VAR_2),
      FUNC_3("malformed SCRAM message"),
      FUNC_2("Unexpected channel-binding flag \"%s\".",
          FUNC_8(*VAR_6))));
 }




 if (*VAR_6 == 'a')
  FUNC_0(VAR_3,
    (FUNC_1(VAR_0),
     FUNC_3("client uses authorization identity, but it is not supported")));
 if (*VAR_6 != ',')
  FUNC_0(VAR_3,
    (FUNC_1(VAR_2),
     FUNC_3("malformed SCRAM message"),
     FUNC_2("Unexpected attribute \"%s\" in client-first-message.",
         FUNC_8(*VAR_6))));
 VAR_6++;

 VAR_4->client_first_message_bare = FUNC_5(VAR_6);
 if (*VAR_6 == 'm')
  FUNC_0(VAR_3,
    (FUNC_1(VAR_0),
     FUNC_3("client requires an unsupported SCRAM extension")));






 VAR_4->client_username = FUNC_7(&VAR_6, 'n');


 VAR_4->client_nonce = FUNC_7(&VAR_6, 'r');
 if (!FUNC_4(VAR_4->client_nonce))
  FUNC_0(VAR_3,
    (FUNC_1(VAR_2),
     FUNC_3("non-printable characters in SCRAM nonce")));





 while (*VAR_6 != '\0')
  FUNC_6(&VAR_6, ((void*)0));


}
