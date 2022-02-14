
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {scalar_t__ pgn; scalar_t__ sa; void* da; scalar_t__ dst_name; scalar_t__ src_name; } ;
struct j1939_sk_buff_cb {TYPE_1__ addr; } ;
struct j1939_priv {int ndev; } ;
struct j1939_ecu {scalar_t__ addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct j1939_priv*,struct sk_buff*) ;
 int FUNC_2 (void*) ;
 struct j1939_ecu* FUNC_3 (struct j1939_priv*,scalar_t__) ;
 int FUNC_4 (struct j1939_ecu*) ;
 int FUNC_5 (struct j1939_ecu*) ;
 void* FUNC_6 (struct j1939_priv*,scalar_t__) ;
 struct j1939_sk_buff_cb* FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (int ,char*,scalar_t__) ;

int FUNC_9(struct j1939_priv *VAR_3, struct sk_buff *VAR_4)
{
 struct j1939_sk_buff_cb *VAR_5 = FUNC_7(VAR_4);
 int VAR_6;
 u8 VAR_7;


 if (VAR_5->addr.pgn == VAR_2) {
  struct j1939_ecu *VAR_8;

  VAR_6 = FUNC_1(VAR_3, VAR_4);

  if (VAR_6 < 0)
   return VAR_6;
  VAR_8 = FUNC_3(VAR_3, VAR_5->addr.src_name);
  if (!VAR_8)
   return -VAR_1;

  if (VAR_8->addr != VAR_5->addr.sa)

   FUNC_5(VAR_8);
  FUNC_4(VAR_8);
 } else if (VAR_5->addr.src_name) {

  VAR_7 = FUNC_6(VAR_3, VAR_5->addr.src_name);
  if (!FUNC_2(VAR_7) &&
      !FUNC_0(VAR_4)) {
   FUNC_8(VAR_3->ndev, "tx drop: invalid sa for name 0x%016llx\n",
          VAR_5->addr.src_name);
   return -VAR_0;
  }
  VAR_5->addr.sa = VAR_7;
 }


 if (VAR_5->addr.dst_name) {
  VAR_7 = FUNC_6(VAR_3, VAR_5->addr.dst_name);
  if (!FUNC_2(VAR_7)) {
   FUNC_8(VAR_3->ndev, "tx drop: invalid da for name 0x%016llx\n",
          VAR_5->addr.dst_name);
   return -VAR_0;
  }
  VAR_5->addr.da = VAR_7;
 }
 return 0;
}
