
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {int dummy; } ;
struct rxrpc_wire_header {int dummy; } ;
struct TYPE_16__ {int serial; } ;
struct rxrpc_skb_priv {TYPE_6__ hdr; } ;
struct rxrpc_key_token {TYPE_7__* kad; } ;
struct TYPE_13__ {scalar_t__ security_level; TYPE_9__* key; } ;
struct TYPE_12__ {scalar_t__ epoch; scalar_t__ cid; } ;
struct rxrpc_connection {scalar_t__ security_ix; TYPE_5__* channels; TYPE_3__ params; TYPE_2__ proto; int debug_id; } ;
struct TYPE_14__ {void** call_id; void* level; void* inc_nonce; void* securityIndex; void* cid; void* epoch; } ;
struct rxkad_response {TYPE_4__ encrypted; void* ticket_len; void* kvno; void* version; } ;
struct rxkad_challenge {int min_level; int nonce; int version; } ;
typedef int challenge ;
struct TYPE_11__ {struct rxrpc_key_token** data; } ;
struct TYPE_18__ {TYPE_1__ payload; } ;
struct TYPE_17__ {scalar_t__ kvno; scalar_t__ ticket_len; } ;
struct TYPE_15__ {scalar_t__ call_counter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*,int ,scalar_t__,scalar_t__,scalar_t__) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_9__*) ;
 int FUNC_4 (TYPE_9__*) ;
 int FUNC_5 (struct rxkad_response*) ;
 struct rxkad_response* FUNC_6 (int,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct rxkad_response*) ;
 int FUNC_9 (struct rxrpc_connection*,struct rxkad_response*,TYPE_7__*) ;
 int FUNC_10 (struct rxrpc_connection*,TYPE_6__*,struct rxkad_response*,TYPE_7__*) ;
 struct rxrpc_skb_priv* FUNC_11 (struct sk_buff*) ;
 scalar_t__ FUNC_12 (struct sk_buff*,int,struct rxkad_challenge*,int) ;
 int FUNC_13 (int *,int ,char const*) ;
 char* FUNC_14 (char*) ;

__attribute__((used)) static int FUNC_15(struct rxrpc_connection *VAR_10,
          struct sk_buff *VAR_11,
          u32 *VAR_12)
{
 const struct rxrpc_key_token *VAR_13;
 struct rxkad_challenge VAR_14;
 struct rxkad_response *VAR_15;
 struct rxrpc_skb_priv *VAR_16 = FUNC_11(VAR_11);
 const char *VAR_17;
 u32 VAR_18, VAR_19, VAR_20, VAR_21;
 int VAR_22;

 FUNC_0("{%d,%x}", VAR_10->debug_id, FUNC_3(VAR_10->params.key));

 VAR_17 = FUNC_14("chall_no_key");
 VAR_21 = VAR_9;
 if (!VAR_10->params.key)
  goto protocol_error;

 VAR_21 = VAR_4;
 VAR_22 = FUNC_4(VAR_10->params.key);
 if (VAR_22 < 0)
  goto other_error;

 VAR_17 = FUNC_14("chall_short");
 VAR_21 = VAR_7;
 if (FUNC_12(VAR_11, sizeof(struct rxrpc_wire_header),
     &VAR_14, sizeof(VAR_14)) < 0)
  goto protocol_error;

 VAR_18 = FUNC_7(VAR_14.version);
 VAR_19 = FUNC_7(VAR_14.nonce);
 VAR_20 = FUNC_7(VAR_14.min_level);

 FUNC_1("Rx CHALLENGE %%%u { v=%u n=%u ml=%u }",
        VAR_16->hdr.serial, VAR_18, VAR_19, VAR_20);

 VAR_17 = FUNC_14("chall_ver");
 VAR_21 = VAR_5;
 if (VAR_18 != VAR_8)
  goto protocol_error;

 VAR_21 = VAR_6;
 VAR_22 = -VAR_0;
 if (VAR_10->params.security_level < VAR_20)
  goto other_error;

 VAR_13 = VAR_10->params.key->payload.data[0];


 VAR_15 = FUNC_6(sizeof(struct rxkad_response), VAR_3);
 if (!VAR_15)
  return -VAR_1;

 VAR_15->version = FUNC_2(VAR_8);
 VAR_15->encrypted.epoch = FUNC_2(VAR_10->proto.epoch);
 VAR_15->encrypted.cid = FUNC_2(VAR_10->proto.cid);
 VAR_15->encrypted.securityIndex = FUNC_2(VAR_10->security_ix);
 VAR_15->encrypted.inc_nonce = FUNC_2(VAR_19 + 1);
 VAR_15->encrypted.level = FUNC_2(VAR_10->params.security_level);
 VAR_15->kvno = FUNC_2(VAR_13->kad->kvno);
 VAR_15->ticket_len = FUNC_2(VAR_13->kad->ticket_len);
 VAR_15->encrypted.call_id[0] = FUNC_2(VAR_10->channels[0].call_counter);
 VAR_15->encrypted.call_id[1] = FUNC_2(VAR_10->channels[1].call_counter);
 VAR_15->encrypted.call_id[2] = FUNC_2(VAR_10->channels[2].call_counter);
 VAR_15->encrypted.call_id[3] = FUNC_2(VAR_10->channels[3].call_counter);


 FUNC_8(VAR_15);
 VAR_22 = FUNC_9(VAR_10, VAR_15, VAR_13->kad);
 if (VAR_22 == 0)
  VAR_22 = FUNC_10(VAR_10, &VAR_16->hdr, VAR_15, VAR_13->kad);
 FUNC_5(VAR_15);
 return VAR_22;

protocol_error:
 FUNC_13(((void*)0), VAR_16->hdr.serial, VAR_17);
 VAR_22 = -VAR_2;
other_error:
 *VAR_12 = VAR_21;
 return VAR_22;
}
