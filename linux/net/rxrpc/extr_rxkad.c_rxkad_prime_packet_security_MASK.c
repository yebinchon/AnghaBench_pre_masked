
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct skcipher_request {int dummy; } ;
struct scatterlist {int dummy; } ;
struct rxrpc_key_token {TYPE_4__* kad; } ;
struct rxrpc_crypt {int x; } ;
struct TYPE_11__ {int cid; int epoch; } ;
struct TYPE_9__ {TYPE_2__* key; } ;
struct rxrpc_connection {struct rxrpc_crypt csum_iv; TYPE_6__* cipher; int security_ix; TYPE_5__ proto; TYPE_3__ params; } ;
typedef int iv ;
typedef scalar_t__ __be32 ;
struct TYPE_12__ {int base; } ;
struct TYPE_10__ {scalar_t__* session_key; } ;
struct TYPE_7__ {struct rxrpc_key_token** data; } ;
struct TYPE_8__ {TYPE_1__ payload; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct skcipher_request*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__*) ;
 scalar_t__* FUNC_5 (size_t,int ) ;
 int FUNC_6 (struct rxrpc_crypt*,scalar_t__*,int) ;
 int FUNC_7 (struct scatterlist*,scalar_t__*,size_t) ;
 struct skcipher_request* FUNC_8 (int *,int ) ;
 int FUNC_9 (struct skcipher_request*) ;
 int FUNC_10 (struct skcipher_request*,int ,int *,int *) ;
 int FUNC_11 (struct skcipher_request*,struct scatterlist*,struct scatterlist*,size_t,int ) ;
 int FUNC_12 (struct skcipher_request*,TYPE_6__*) ;

__attribute__((used)) static int FUNC_13(struct rxrpc_connection *VAR_3)
{
 struct skcipher_request *VAR_4;
 struct rxrpc_key_token *VAR_5;
 struct scatterlist VAR_6;
 struct rxrpc_crypt VAR_7;
 __be32 *VAR_8;
 size_t VAR_9 = 4 * sizeof(__be32);

 FUNC_0("");

 if (!VAR_3->params.key)
  return 0;

 VAR_8 = FUNC_5(VAR_9, VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_4 = FUNC_8(&VAR_3->cipher->base, VAR_2);
 if (!VAR_4) {
  FUNC_4(VAR_8);
  return -VAR_0;
 }

 VAR_5 = VAR_3->params.key->payload.data[0];
 FUNC_6(&VAR_7, VAR_5->kad->session_key, sizeof(VAR_7));

 VAR_8[0] = FUNC_3(VAR_3->proto.epoch);
 VAR_8[1] = FUNC_3(VAR_3->proto.cid);
 VAR_8[2] = 0;
 VAR_8[3] = FUNC_3(VAR_3->security_ix);

 FUNC_7(&VAR_6, VAR_8, VAR_9);
 FUNC_12(VAR_4, VAR_3->cipher);
 FUNC_10(VAR_4, 0, ((void*)0), ((void*)0));
 FUNC_11(VAR_4, &VAR_6, &VAR_6, VAR_9, VAR_7.x);
 FUNC_2(VAR_4);
 FUNC_9(VAR_4);

 FUNC_6(&VAR_3->csum_iv, VAR_8 + 2, sizeof(VAR_3->csum_iv));
 FUNC_4(VAR_8);
 FUNC_1(" = 0");
 return 0;
}
