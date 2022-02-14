
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skcipher_request {int dummy; } ;
struct scatterlist {int dummy; } ;
struct rxrpc_crypt {int x; } ;
struct rxrpc_connection {TYPE_1__* cipher; } ;
struct rxkad_response {int encrypted; } ;
struct rxkad_key {int session_key; } ;
typedef int iv ;
struct TYPE_2__ {int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct skcipher_request*) ;
 int FUNC_1 (struct rxrpc_crypt*,int ,int) ;
 int FUNC_2 (struct scatterlist*,int) ;
 int FUNC_3 (struct scatterlist*,int *,int) ;
 struct skcipher_request* FUNC_4 (int *,int ) ;
 int FUNC_5 (struct skcipher_request*) ;
 int FUNC_6 (struct skcipher_request*,int ,int *,int *) ;
 int FUNC_7 (struct skcipher_request*,struct scatterlist*,struct scatterlist*,int,int ) ;
 int FUNC_8 (struct skcipher_request*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_9(struct rxrpc_connection *VAR_2,
      struct rxkad_response *VAR_3,
      const struct rxkad_key *VAR_4)
{
 struct skcipher_request *VAR_5;
 struct rxrpc_crypt VAR_6;
 struct scatterlist VAR_7[1];

 VAR_5 = FUNC_4(&VAR_2->cipher->base, VAR_1);
 if (!VAR_5)
  return -VAR_0;


 FUNC_1(&VAR_6, VAR_4->session_key, sizeof(VAR_6));

 FUNC_2(VAR_7, 1);
 FUNC_3(VAR_7, &VAR_3->encrypted, sizeof(VAR_3->encrypted));
 FUNC_8(VAR_5, VAR_2->cipher);
 FUNC_6(VAR_5, 0, ((void*)0), ((void*)0));
 FUNC_7(VAR_5, VAR_7, VAR_7, sizeof(VAR_3->encrypted), VAR_6.x);
 FUNC_0(VAR_5);
 FUNC_5(VAR_5);
 return 0;
}
