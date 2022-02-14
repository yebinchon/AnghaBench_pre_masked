
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct skcipher_request {int dummy; } ;
struct sk_buff {int dummy; } ;
struct scatterlist {int dummy; } ;
struct rxrpc_crypt {int x; } ;
struct rxrpc_call {int call_id; TYPE_1__* conn; } ;
struct rxkad_level1_hdr {int data_size; } ;
typedef int sechdr ;
typedef int rxrpc_seq_t ;
typedef int iv ;
struct TYPE_2__ {int cipher; } ;


 int FUNC_0 (struct scatterlist*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct skcipher_request*) ;
 int FUNC_4 (struct rxrpc_crypt*,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct rxrpc_call*,struct sk_buff*,char*,char*,int ) ;
 int FUNC_7 (struct rxrpc_call*) ;
 int FUNC_8 (struct scatterlist*,int ) ;
 scalar_t__ FUNC_9 (struct sk_buff*,unsigned int,struct rxkad_level1_hdr*,int) ;
 int FUNC_10 (struct sk_buff*,struct scatterlist*,unsigned int,int) ;
 int FUNC_11 (struct skcipher_request*,int ,int *,int *) ;
 int FUNC_12 (struct skcipher_request*,struct scatterlist*,struct scatterlist*,int,int ) ;
 int FUNC_13 (struct skcipher_request*,int ) ;
 int FUNC_14 (struct skcipher_request*) ;
 scalar_t__ FUNC_15 (int) ;

__attribute__((used)) static int FUNC_16(struct rxrpc_call *VAR_3, struct sk_buff *VAR_4,
     unsigned int VAR_5, unsigned int VAR_6,
     rxrpc_seq_t VAR_7,
     struct skcipher_request *VAR_8)
{
 struct rxkad_level1_hdr VAR_9;
 struct rxrpc_crypt VAR_10;
 struct scatterlist VAR_11[16];
 bool VAR_12;
 u32 VAR_13, VAR_14;
 u16 VAR_15;
 int VAR_16;

 FUNC_1("");

 if (VAR_6 < 8) {
  VAR_12 = FUNC_6(VAR_3, VAR_4, "rxkad_1_hdr", "V1H",
        VAR_2);
  goto protocol_error;
 }




 FUNC_8(VAR_11, FUNC_0(VAR_11));
 VAR_16 = FUNC_10(VAR_4, VAR_11, VAR_5, 8);
 if (FUNC_15(VAR_16 < 0))
  return VAR_16;


 FUNC_4(&VAR_10, 0, sizeof(VAR_10));

 FUNC_13(VAR_8, VAR_3->conn->cipher);
 FUNC_11(VAR_8, 0, ((void*)0), ((void*)0));
 FUNC_12(VAR_8, VAR_11, VAR_11, 8, VAR_10.x);
 FUNC_3(VAR_8);
 FUNC_14(VAR_8);


 if (FUNC_9(VAR_4, VAR_5, &VAR_9, sizeof(VAR_9)) < 0) {
  VAR_12 = FUNC_6(VAR_3, VAR_4, "rxkad_1_len", "XV1",
          VAR_1);
  goto protocol_error;
 }
 VAR_5 += sizeof(VAR_9);
 VAR_6 -= sizeof(VAR_9);

 VAR_14 = FUNC_5(VAR_9.data_size);
 VAR_13 = VAR_14 & 0xffff;

 VAR_15 = VAR_14 >> 16;
 VAR_15 ^= VAR_7 ^ VAR_3->call_id;
 VAR_15 &= 0xffff;
 if (VAR_15 != 0) {
  VAR_12 = FUNC_6(VAR_3, VAR_4, "rxkad_1_check", "V1C",
          VAR_2);
  goto protocol_error;
 }

 if (VAR_13 > VAR_6) {
  VAR_12 = FUNC_6(VAR_3, VAR_4, "rxkad_1_datalen", "V1L",
          VAR_1);
  goto protocol_error;
 }

 FUNC_2(" = 0 [dlen=%x]", VAR_13);
 return 0;

protocol_error:
 if (VAR_12)
  FUNC_7(VAR_3);
 return -VAR_0;
}
