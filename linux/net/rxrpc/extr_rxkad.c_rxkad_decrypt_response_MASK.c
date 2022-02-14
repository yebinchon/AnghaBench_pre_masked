
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skcipher_request {int dummy; } ;
struct scatterlist {int dummy; } ;
struct rxrpc_crypt {int x; int * n; } ;
struct rxrpc_connection {int dummy; } ;
struct rxkad_response {int encrypted; } ;
typedef int iv ;


 int FUNC_0 () ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct skcipher_request*) ;
 scalar_t__ FUNC_4 (int ,int ,int) ;
 int FUNC_5 (struct rxrpc_crypt*,struct rxrpc_crypt const*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct skcipher_request* VAR_2 ;
 int FUNC_9 (struct scatterlist*,int) ;
 int FUNC_10 (struct scatterlist*,int *,int) ;
 int FUNC_11 (struct skcipher_request*,int ,int *,int *) ;
 int FUNC_12 (struct skcipher_request*,struct scatterlist*,struct scatterlist*,int,int ) ;
 int FUNC_13 (struct skcipher_request*,int ) ;
 int FUNC_14 (struct skcipher_request*) ;

__attribute__((used)) static void FUNC_15(struct rxrpc_connection *VAR_3,
       struct rxkad_response *VAR_4,
       const struct rxrpc_crypt *VAR_5)
{
 struct skcipher_request *VAR_6 = VAR_2;
 struct scatterlist VAR_7[1];
 struct rxrpc_crypt VAR_8;

 FUNC_1(",,%08x%08x",
        FUNC_8(VAR_5->n[0]), FUNC_8(VAR_5->n[1]));

 FUNC_6(&VAR_1);
 if (FUNC_4(VAR_0, VAR_5->x,
     sizeof(*VAR_5)) < 0)
  FUNC_0();

 FUNC_5(&VAR_8, VAR_5, sizeof(VAR_8));

 FUNC_9(VAR_7, 1);
 FUNC_10(VAR_7, &VAR_4->encrypted, sizeof(VAR_4->encrypted));
 FUNC_13(VAR_6, VAR_0);
 FUNC_11(VAR_6, 0, ((void*)0), ((void*)0));
 FUNC_12(VAR_6, VAR_7, VAR_7, sizeof(VAR_4->encrypted), VAR_8.x);
 FUNC_3(VAR_6);
 FUNC_14(VAR_6);

 FUNC_7(&VAR_1);

 FUNC_2("");
}
