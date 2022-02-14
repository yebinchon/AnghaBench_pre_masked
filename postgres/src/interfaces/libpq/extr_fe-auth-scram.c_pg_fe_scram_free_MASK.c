
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* server_final_message; struct TYPE_3__* nonce; struct TYPE_3__* salt; struct TYPE_3__* server_first_message; struct TYPE_3__* client_final_message_without_proof; struct TYPE_3__* client_first_message_bare; struct TYPE_3__* client_nonce; struct TYPE_3__* sasl_mechanism; struct TYPE_3__* password; } ;
typedef TYPE_1__ fe_scram_state ;


 int FUNC_0 (TYPE_1__*) ;

void
FUNC_1(void *VAR_0)
{
 fe_scram_state *VAR_1 = (fe_scram_state *) VAR_0;

 if (VAR_1->password)
  FUNC_0(VAR_1->password);
 if (VAR_1->sasl_mechanism)
  FUNC_0(VAR_1->sasl_mechanism);


 if (VAR_1->client_nonce)
  FUNC_0(VAR_1->client_nonce);
 if (VAR_1->client_first_message_bare)
  FUNC_0(VAR_1->client_first_message_bare);
 if (VAR_1->client_final_message_without_proof)
  FUNC_0(VAR_1->client_final_message_without_proof);


 if (VAR_1->server_first_message)
  FUNC_0(VAR_1->server_first_message);
 if (VAR_1->salt)
  FUNC_0(VAR_1->salt);
 if (VAR_1->nonce)
  FUNC_0(VAR_1->nonce);


 if (VAR_1->server_final_message)
  FUNC_0(VAR_1->server_final_message);

 FUNC_0(VAR_1);
}
