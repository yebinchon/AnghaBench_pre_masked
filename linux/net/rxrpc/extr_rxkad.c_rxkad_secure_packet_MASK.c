
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct skcipher_request {int dummy; } ;
struct sk_buff {int dummy; } ;
struct scatterlist {int dummy; } ;
struct TYPE_6__ {int seq; int cksum; } ;
struct rxrpc_skb_priv {TYPE_2__ hdr; } ;
struct rxrpc_crypt {int x; } ;
struct rxrpc_call {int cid; int call_id; TYPE_4__* conn; void** crypto_buf; int debug_id; } ;
typedef int iv ;
struct TYPE_7__ {int security_level; int key; } ;
struct TYPE_5__ {int x; } ;
struct TYPE_8__ {TYPE_3__ params; int cipher; TYPE_1__ csum_iv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (char*,int ,int ,int,size_t) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (struct skcipher_request*) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct rxrpc_crypt*,int ,int) ;
 int FUNC_7 (void*) ;
 struct skcipher_request* FUNC_8 (struct rxrpc_call*) ;
 int FUNC_9 (struct rxrpc_call*,struct sk_buff*,size_t,void*,struct skcipher_request*) ;
 int FUNC_10 (struct rxrpc_call*,struct sk_buff*,size_t,void*,struct skcipher_request*) ;
 struct rxrpc_skb_priv* FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct scatterlist*,void**,int) ;
 int FUNC_13 (struct skcipher_request*,int ,int *,int *) ;
 int FUNC_14 (struct skcipher_request*,struct scatterlist*,struct scatterlist*,int,int ) ;
 int FUNC_15 (struct skcipher_request*,int ) ;
 int FUNC_16 (struct skcipher_request*) ;

__attribute__((used)) static int FUNC_17(struct rxrpc_call *VAR_4,
          struct sk_buff *VAR_5,
          size_t VAR_6,
          void *VAR_7)
{
 struct rxrpc_skb_priv *VAR_8;
 struct skcipher_request *VAR_9;
 struct rxrpc_crypt VAR_10;
 struct scatterlist VAR_11;
 u32 VAR_12, VAR_13;
 int VAR_14;

 VAR_8 = FUNC_11(VAR_5);

 FUNC_0("{%d{%x}},{#%u},%zu,",
        VAR_4->debug_id, FUNC_4(VAR_4->conn->params.key),
        VAR_8->hdr.seq, VAR_6);

 if (!VAR_4->conn->cipher)
  return 0;

 VAR_14 = FUNC_5(VAR_4->conn->params.key);
 if (VAR_14 < 0)
  return VAR_14;

 VAR_9 = FUNC_8(VAR_4);
 if (!VAR_9)
  return -VAR_0;


 FUNC_6(&VAR_10, VAR_4->conn->csum_iv.x, sizeof(VAR_10));


 VAR_12 = (VAR_4->cid & VAR_2) << (32 - VAR_3);
 VAR_12 |= VAR_8->hdr.seq & 0x3fffffff;
 VAR_4->crypto_buf[0] = FUNC_3(VAR_4->call_id);
 VAR_4->crypto_buf[1] = FUNC_3(VAR_12);

 FUNC_12(&VAR_11, VAR_4->crypto_buf, 8);
 FUNC_15(VAR_9, VAR_4->conn->cipher);
 FUNC_13(VAR_9, 0, ((void*)0), ((void*)0));
 FUNC_14(VAR_9, &VAR_11, &VAR_11, 8, VAR_10.x);
 FUNC_2(VAR_9);
 FUNC_16(VAR_9);

 VAR_13 = FUNC_7(VAR_4->crypto_buf[1]);
 VAR_13 = (VAR_13 >> 16) & 0xffff;
 if (VAR_13 == 0)
  VAR_13 = 1;
 VAR_8->hdr.cksum = VAR_13;

 switch (VAR_4->conn->params.security_level) {
 case 128:
  VAR_14 = 0;
  break;
 case 130:
  VAR_14 = FUNC_9(VAR_4, VAR_5, VAR_6, VAR_7,
            VAR_9);
  break;
 case 129:
  VAR_14 = FUNC_10(VAR_4, VAR_5, VAR_6,
        VAR_7, VAR_9);
  break;
 default:
  VAR_14 = -VAR_1;
  break;
 }

 FUNC_1(" = %d [set %hx]", VAR_14, VAR_13);
 return VAR_14;
}
