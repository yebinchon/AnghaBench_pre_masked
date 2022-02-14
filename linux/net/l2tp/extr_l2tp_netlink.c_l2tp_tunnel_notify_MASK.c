
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct l2tp_tunnel {int dummy; } ;
struct genl_info {int snd_seq; int snd_portid; } ;
struct genl_family {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct genl_family*,struct sk_buff*,int ,int ,int ) ;
 int FUNC_1 (struct sk_buff*,int ,int ,int ,struct l2tp_tunnel*,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct genl_family *VAR_6,
         struct genl_info *VAR_7,
         struct l2tp_tunnel *VAR_8,
         u8 VAR_9)
{
 struct sk_buff *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_3(VAR_4, VAR_3);
 if (!VAR_10)
  return -VAR_0;

 VAR_11 = FUNC_1(VAR_10, VAR_7->snd_portid, VAR_7->snd_seq,
      VAR_5, VAR_8, VAR_9);

 if (VAR_11 >= 0) {
  VAR_11 = FUNC_0(VAR_6, VAR_10, 0, 0, VAR_2);

  if (VAR_11 == -VAR_1)
   VAR_11 = 0;
  return VAR_11;
 }

 FUNC_2(VAR_10);

 return VAR_11;
}
