
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct TYPE_2__ {scalar_t__ src_name; scalar_t__ sa; scalar_t__ da; scalar_t__ dst_name; } ;
struct j1939_sk_buff_cb {TYPE_1__ addr; } ;
struct j1939_priv {int ndev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct j1939_sk_buff_cb* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,char*,...) ;

__attribute__((used)) static int FUNC_3(struct j1939_priv *VAR_2,
        struct sk_buff *VAR_3)
{
 struct j1939_sk_buff_cb *VAR_4 = FUNC_0(VAR_3);

 if (VAR_3->len != 8) {
  FUNC_2(VAR_2->ndev, "tx address claim with dlc %i\n",
         VAR_3->len);
  return -VAR_0;
 }

 if (VAR_4->addr.src_name != FUNC_1(VAR_3)) {
  FUNC_2(VAR_2->ndev, "tx address claim with different name\n");
  return -VAR_0;
 }

 if (VAR_4->addr.sa == VAR_1) {
  FUNC_2(VAR_2->ndev, "tx address claim with broadcast sa\n");
  return -VAR_0;
 }


 if (VAR_4->addr.dst_name || VAR_4->addr.da != VAR_1) {
  FUNC_2(VAR_2->ndev, "tx address claim with dest, not broadcast\n");
  return -VAR_0;
 }
 return 0;
}
