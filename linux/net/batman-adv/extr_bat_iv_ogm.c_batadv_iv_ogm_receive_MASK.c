
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int * data; scalar_t__ len; } ;
struct batadv_priv {TYPE_2__* algo_ops; } ;
struct batadv_ogm_packet {int tvlv_len; } ;
struct batadv_hard_iface {int soft_iface; } ;
struct TYPE_3__ {scalar_t__ enable; } ;
struct TYPE_4__ {TYPE_1__ iface; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct batadv_priv*,int ,scalar_t__) ;
 int FUNC_1 (struct sk_buff*,struct batadv_hard_iface*,scalar_t__) ;
 int FUNC_2 (struct batadv_priv*,int ) ;
 scalar_t__ FUNC_3 (int,int ,struct batadv_ogm_packet*) ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (struct sk_buff*,int,struct batadv_hard_iface*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 struct batadv_priv* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_7,
     struct batadv_hard_iface *VAR_8)
{
 struct batadv_priv *VAR_9 = FUNC_7(VAR_8->soft_iface);
 struct batadv_ogm_packet *VAR_10;
 u8 *VAR_11;
 int VAR_12;
 bool VAR_13;
 int VAR_14 = VAR_4;

 VAR_13 = FUNC_1(VAR_7, VAR_8, VAR_2);
 if (!VAR_13)
  goto free_skb;




 if (VAR_9->algo_ops->iface.enable != VAR_6)
  goto free_skb;

 FUNC_2(VAR_9, VAR_0);
 FUNC_0(VAR_9, VAR_1,
      VAR_7->len + VAR_3);

 VAR_12 = 0;
 VAR_10 = (struct batadv_ogm_packet *)VAR_7->data;


 while (FUNC_3(VAR_12, FUNC_9(VAR_7),
      VAR_10)) {
  FUNC_4(VAR_7, VAR_12, VAR_8);

  VAR_12 += VAR_2;
  VAR_12 += FUNC_8(VAR_10->tvlv_len);

  VAR_11 = VAR_7->data + VAR_12;
  VAR_10 = (struct batadv_ogm_packet *)VAR_11;
 }

 VAR_14 = VAR_5;

free_skb:
 if (VAR_14 == VAR_5)
  FUNC_5(VAR_7);
 else
  FUNC_6(VAR_7);

 return VAR_14;
}
