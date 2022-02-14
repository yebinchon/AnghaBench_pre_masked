
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct skcipher_request {int dummy; } ;
struct sk_buff {int dummy; } ;
struct scatterlist {int dummy; } ;
struct rxrpc_crypt {int x; } ;
struct rxrpc_call {int cid; int call_id; TYPE_3__* conn; void** crypto_buf; int debug_id; } ;
typedef int rxrpc_seq_t ;
typedef int iv ;
struct TYPE_5__ {int security_level; int key; } ;
struct TYPE_4__ {int x; } ;
struct TYPE_6__ {TYPE_2__ params; int cipher; TYPE_1__ csum_iv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int FUNC_0 (char*,int ,int ,int) ;
 int FUNC_1 (struct skcipher_request*) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct rxrpc_crypt*,int ,int) ;
 int FUNC_5 (void*) ;
 struct skcipher_request* FUNC_6 (struct rxrpc_call*) ;
 int FUNC_7 (struct rxrpc_call*,struct sk_buff*,unsigned int,unsigned int,int,struct skcipher_request*) ;
 int FUNC_8 (struct rxrpc_call*,struct sk_buff*,unsigned int,unsigned int,int,struct skcipher_request*) ;
 int FUNC_9 (struct rxrpc_call*,struct sk_buff*,char*,char*,int ) ;
 int FUNC_10 (struct rxrpc_call*) ;
 int FUNC_11 (struct scatterlist*,void**,int) ;
 int FUNC_12 (struct skcipher_request*,int ,int *,int *) ;
 int FUNC_13 (struct skcipher_request*,struct scatterlist*,struct scatterlist*,int,int ) ;
 int FUNC_14 (struct skcipher_request*,int ) ;
 int FUNC_15 (struct skcipher_request*) ;

__attribute__((used)) static int FUNC_16(struct rxrpc_call *VAR_6, struct sk_buff *VAR_7,
          unsigned int VAR_8, unsigned int VAR_9,
          rxrpc_seq_t VAR_10, u16 VAR_11)
{
 struct skcipher_request *VAR_12;
 struct rxrpc_crypt VAR_13;
 struct scatterlist VAR_14;
 bool VAR_15;
 u16 VAR_16;
 u32 VAR_17, VAR_18;

 FUNC_0("{%d{%x}},{#%u}",
        VAR_6->debug_id, FUNC_3(VAR_6->conn->params.key), VAR_10);

 if (!VAR_6->conn->cipher)
  return 0;

 VAR_12 = FUNC_6(VAR_6);
 if (!VAR_12)
  return -VAR_1;


 FUNC_4(&VAR_13, VAR_6->conn->csum_iv.x, sizeof(VAR_13));


 VAR_17 = (VAR_6->cid & VAR_4) << (32 - VAR_5);
 VAR_17 |= VAR_10 & 0x3fffffff;
 VAR_6->crypto_buf[0] = FUNC_2(VAR_6->call_id);
 VAR_6->crypto_buf[1] = FUNC_2(VAR_17);

 FUNC_11(&VAR_14, VAR_6->crypto_buf, 8);
 FUNC_14(VAR_12, VAR_6->conn->cipher);
 FUNC_12(VAR_12, 0, ((void*)0), ((void*)0));
 FUNC_13(VAR_12, &VAR_14, &VAR_14, 8, VAR_13.x);
 FUNC_1(VAR_12);
 FUNC_15(VAR_12);

 VAR_18 = FUNC_5(VAR_6->crypto_buf[1]);
 VAR_16 = (VAR_18 >> 16) & 0xffff;
 if (VAR_16 == 0)
  VAR_16 = 1;

 if (VAR_16 != VAR_11) {
  VAR_15 = FUNC_9(VAR_6, VAR_7, "rxkad_csum", "VCK",
          VAR_3);
  goto protocol_error;
 }

 switch (VAR_6->conn->params.security_level) {
 case 128:
  return 0;
 case 130:
  return FUNC_7(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_12);
 case 129:
  return FUNC_8(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_12);
 default:
  return -VAR_0;
 }

protocol_error:
 if (VAR_15)
  FUNC_10(VAR_6);
 return -VAR_2;
}
