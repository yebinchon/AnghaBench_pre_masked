
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct skcipher_request {int dummy; } ;
struct rxrpc_call {struct skcipher_request* cipher_req; TYPE_2__* conn; } ;
struct crypto_skcipher {int dummy; } ;
struct TYPE_4__ {TYPE_1__* cipher; } ;
struct TYPE_3__ {struct crypto_skcipher base; } ;


 int VAR_0 ;
 struct skcipher_request* FUNC_0 (struct crypto_skcipher*,int ) ;

__attribute__((used)) static struct skcipher_request *FUNC_1(struct rxrpc_call *VAR_1)
{
 struct crypto_skcipher *VAR_2 = &VAR_1->conn->cipher->base;
 struct skcipher_request *VAR_3 = VAR_1->cipher_req;

 if (!VAR_3) {
  VAR_3 = FUNC_0(VAR_2, VAR_0);
  if (!VAR_3)
   return ((void*)0);
  VAR_1->cipher_req = VAR_3;
 }

 return VAR_3;
}
