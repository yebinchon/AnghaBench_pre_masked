
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


typedef int u32 ;
typedef int u16 ;
struct skcipher_request {int dummy; } ;
struct sk_buff {int len; } ;
struct scatterlist {int dummy; } ;
struct rxrpc_key_token {TYPE_4__* kad; } ;
struct rxrpc_crypt {int x; } ;
struct rxrpc_call {int call_id; TYPE_5__* conn; } ;
struct rxkad_level2_hdr {int data_size; } ;
typedef int sechdr ;
typedef int rxrpc_seq_t ;
typedef int iv ;
struct TYPE_12__ {int nr_frags; } ;
struct TYPE_9__ {TYPE_2__* key; } ;
struct TYPE_11__ {int cipher; TYPE_3__ params; } ;
struct TYPE_10__ {int session_key; } ;
struct TYPE_7__ {struct rxrpc_key_token** data; } ;
struct TYPE_8__ {TYPE_1__ payload; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct skcipher_request*) ;
 int FUNC_3 (struct scatterlist*) ;
 struct scatterlist* FUNC_4 (int,int,int ) ;
 int FUNC_5 (struct rxrpc_crypt*,int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct rxrpc_call*,struct sk_buff*,char*,char*,int ) ;
 int FUNC_8 (struct rxrpc_call*) ;
 int FUNC_9 (struct scatterlist*,int) ;
 scalar_t__ FUNC_10 (struct sk_buff*,unsigned int,struct rxkad_level2_hdr*,int) ;
 TYPE_6__* FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*,struct scatterlist*,unsigned int,unsigned int) ;
 int FUNC_13 (struct skcipher_request*,int ,int *,int *) ;
 int FUNC_14 (struct skcipher_request*,struct scatterlist*,struct scatterlist*,unsigned int,int ) ;
 int FUNC_15 (struct skcipher_request*,int ) ;
 int FUNC_16 (struct skcipher_request*) ;
 scalar_t__ FUNC_17 (int) ;

__attribute__((used)) static int FUNC_18(struct rxrpc_call *VAR_5, struct sk_buff *VAR_6,
     unsigned int VAR_7, unsigned int VAR_8,
     rxrpc_seq_t VAR_9,
     struct skcipher_request *VAR_10)
{
 const struct rxrpc_key_token *VAR_11;
 struct rxkad_level2_hdr VAR_12;
 struct rxrpc_crypt VAR_13;
 struct scatterlist VAR_14[4], *VAR_15;
 bool VAR_16;
 u32 VAR_17, VAR_18;
 u16 VAR_19;
 int VAR_20, VAR_21;

 FUNC_0(",{%d}", VAR_6->len);

 if (VAR_8 < 8) {
  VAR_16 = FUNC_7(VAR_5, VAR_6, "rxkad_2_hdr", "V2H",
          VAR_4);
  goto protocol_error;
 }




 VAR_15 = VAR_14;
 VAR_20 = FUNC_11(VAR_6)->nr_frags;
 if (VAR_20 <= 4) {
  VAR_20 = 4;
 } else {
  VAR_15 = FUNC_4(VAR_20, sizeof(*VAR_15), VAR_2);
  if (!VAR_15)
   goto nomem;
 }

 FUNC_9(VAR_15, VAR_20);
 VAR_21 = FUNC_12(VAR_6, VAR_15, VAR_7, VAR_8);
 if (FUNC_17(VAR_21 < 0)) {
  if (VAR_15 != VAR_14)
   FUNC_3(VAR_15);
  return VAR_21;
 }


 VAR_11 = VAR_5->conn->params.key->payload.data[0];
 FUNC_5(&VAR_13, VAR_11->kad->session_key, sizeof(VAR_13));

 FUNC_15(VAR_10, VAR_5->conn->cipher);
 FUNC_13(VAR_10, 0, ((void*)0), ((void*)0));
 FUNC_14(VAR_10, VAR_15, VAR_15, VAR_8, VAR_13.x);
 FUNC_2(VAR_10);
 FUNC_16(VAR_10);
 if (VAR_15 != VAR_14)
  FUNC_3(VAR_15);


 if (FUNC_10(VAR_6, VAR_7, &VAR_12, sizeof(VAR_12)) < 0) {
  VAR_16 = FUNC_7(VAR_5, VAR_6, "rxkad_2_len", "XV2",
          VAR_3);
  goto protocol_error;
 }
 VAR_7 += sizeof(VAR_12);
 VAR_8 -= sizeof(VAR_12);

 VAR_18 = FUNC_6(VAR_12.data_size);
 VAR_17 = VAR_18 & 0xffff;

 VAR_19 = VAR_18 >> 16;
 VAR_19 ^= VAR_9 ^ VAR_5->call_id;
 VAR_19 &= 0xffff;
 if (VAR_19 != 0) {
  VAR_16 = FUNC_7(VAR_5, VAR_6, "rxkad_2_check", "V2C",
          VAR_4);
  goto protocol_error;
 }

 if (VAR_17 > VAR_8) {
  VAR_16 = FUNC_7(VAR_5, VAR_6, "rxkad_2_datalen", "V2L",
          VAR_3);
  goto protocol_error;
 }

 FUNC_1(" = 0 [dlen=%x]", VAR_17);
 return 0;

protocol_error:
 if (VAR_16)
  FUNC_8(VAR_5);
 return -VAR_1;

nomem:
 FUNC_1(" = -ENOMEM");
 return -VAR_0;
}
