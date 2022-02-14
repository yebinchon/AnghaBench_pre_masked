
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct genl_info {int snd_seq; int snd_portid; struct batadv_priv** user_ptr; } ;
struct batadv_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*,struct batadv_priv*,int ,int ,int ,int ) ;
 int FUNC_1 (struct sk_buff*,struct genl_info*) ;
 int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_4, struct genl_info *VAR_5)
{
 struct batadv_priv *VAR_6 = VAR_5->user_ptr[0];
 struct sk_buff *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_3(VAR_3, VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_8 = FUNC_0(VAR_7, VAR_6, VAR_0,
           VAR_5->snd_portid, VAR_5->snd_seq, 0);
 if (VAR_8 < 0) {
  FUNC_2(VAR_7);
  return VAR_8;
 }

 VAR_8 = FUNC_1(VAR_7, VAR_5);

 return VAR_8;
}
