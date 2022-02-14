
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rxrpc_key_token {TYPE_2__* kad; int security_index; } ;
struct TYPE_7__ {int security_level; TYPE_4__* key; } ;
struct rxrpc_connection {int size_align; int security_size; struct crypto_sync_skcipher* cipher; TYPE_3__ params; int security_ix; int debug_id; } ;
struct rxkad_level2_hdr {int dummy; } ;
struct rxkad_level1_hdr {int dummy; } ;
struct crypto_sync_skcipher {int dummy; } ;
struct TYPE_5__ {struct rxrpc_key_token** data; } ;
struct TYPE_8__ {TYPE_1__ payload; } ;
struct TYPE_6__ {int session_key; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct crypto_sync_skcipher*) ;
 int FUNC_2 (struct crypto_sync_skcipher*) ;



 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (char*,int) ;
 struct crypto_sync_skcipher* FUNC_6 (char*,int ,int ) ;
 scalar_t__ FUNC_7 (struct crypto_sync_skcipher*,int ,int) ;
 int FUNC_8 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_9(struct rxrpc_connection *VAR_1)
{
 struct crypto_sync_skcipher *VAR_2;
 struct rxrpc_key_token *VAR_3;
 int VAR_4;

 FUNC_4("{%d},{%x}", VAR_1->debug_id, FUNC_8(VAR_1->params.key));

 VAR_3 = VAR_1->params.key->payload.data[0];
 VAR_1->security_ix = VAR_3->security_index;

 VAR_2 = FUNC_6("pcbc(fcrypt)", 0, 0);
 if (FUNC_1(VAR_2)) {
  FUNC_3("no cipher");
  VAR_4 = FUNC_2(VAR_2);
  goto error;
 }

 if (FUNC_7(VAR_2, VAR_3->kad->session_key,
       sizeof(VAR_3->kad->session_key)) < 0)
  FUNC_0();

 switch (VAR_1->params.security_level) {
 case 128:
  break;
 case 130:
  VAR_1->size_align = 8;
  VAR_1->security_size = sizeof(struct rxkad_level1_hdr);
  break;
 case 129:
  VAR_1->size_align = 8;
  VAR_1->security_size = sizeof(struct rxkad_level2_hdr);
  break;
 default:
  VAR_4 = -VAR_0;
  goto error;
 }

 VAR_1->cipher = VAR_2;
 VAR_4 = 0;
error:
 FUNC_5(" = %d", VAR_4);
 return VAR_4;
}
