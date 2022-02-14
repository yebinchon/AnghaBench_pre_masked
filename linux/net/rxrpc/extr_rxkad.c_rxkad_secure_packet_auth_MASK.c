
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct skcipher_request {int dummy; } ;
struct sk_buff {int dummy; } ;
struct scatterlist {int dummy; } ;
struct TYPE_3__ {int seq; } ;
struct rxrpc_skb_priv {TYPE_1__ hdr; } ;
struct rxrpc_crypt {int x; } ;
struct rxrpc_call {int call_id; TYPE_2__* conn; } ;
struct rxkad_level1_hdr {int data_size; } ;
typedef int iv ;
typedef int hdr ;
struct TYPE_4__ {int cipher; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct skcipher_request*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (void*,struct rxkad_level1_hdr*,int) ;
 int FUNC_5 (struct rxrpc_crypt*,int ,int) ;
 struct rxrpc_skb_priv* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct scatterlist*,void*,int) ;
 int FUNC_8 (struct skcipher_request*,int ,int *,int *) ;
 int FUNC_9 (struct skcipher_request*,struct scatterlist*,struct scatterlist*,int,int ) ;
 int FUNC_10 (struct skcipher_request*,int ) ;
 int FUNC_11 (struct skcipher_request*) ;

__attribute__((used)) static int FUNC_12(const struct rxrpc_call *VAR_0,
        struct sk_buff *VAR_1,
        u32 VAR_2,
        void *VAR_3,
        struct skcipher_request *VAR_4)
{
 struct rxrpc_skb_priv *VAR_5 = FUNC_6(VAR_1);
 struct rxkad_level1_hdr VAR_6;
 struct rxrpc_crypt VAR_7;
 struct scatterlist VAR_8;
 u16 VAR_9;

 FUNC_0("");

 VAR_9 = VAR_5->hdr.seq ^ VAR_0->call_id;
 VAR_2 |= (u32)VAR_9 << 16;

 VAR_6.data_size = FUNC_3(VAR_2);
 FUNC_4(VAR_3, &VAR_6, sizeof(VAR_6));


 FUNC_5(&VAR_7, 0, sizeof(VAR_7));

 FUNC_7(&VAR_8, VAR_3, 8);
 FUNC_10(VAR_4, VAR_0->conn->cipher);
 FUNC_8(VAR_4, 0, ((void*)0), ((void*)0));
 FUNC_9(VAR_4, &VAR_8, &VAR_8, 8, VAR_7.x);
 FUNC_2(VAR_4);
 FUNC_11(VAR_4);

 FUNC_1(" = 0");
 return 0;
}
