
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct ila_xlat_params {int dummy; } ;
struct ila_net {int dummy; } ;
struct ila_map {int dummy; } ;
struct genl_info {TYPE_1__* genlhdr; int snd_seq; int snd_portid; } ;
struct TYPE_2__ {int cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct net* FUNC_0 (struct genl_info*) ;
 int FUNC_1 (struct sk_buff*,struct genl_info*) ;
 int FUNC_2 (struct ila_map*,int ,int ,int ,struct sk_buff*,int ) ;
 struct ila_map* FUNC_3 (struct ila_xlat_params*,struct ila_net*) ;
 int VAR_3 ;
 struct ila_net* FUNC_4 (struct net*,int ) ;
 int FUNC_5 (struct sk_buff*) ;
 struct sk_buff* FUNC_6 (int ,int ) ;
 int FUNC_7 (struct genl_info*,struct ila_xlat_params*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;

int FUNC_10(struct sk_buff *VAR_4, struct genl_info *VAR_5)
{
 struct net *VAR_6 = FUNC_0(VAR_5);
 struct ila_net *VAR_7 = FUNC_4(VAR_6, VAR_3);
 struct sk_buff *VAR_8;
 struct ila_xlat_params VAR_9;
 struct ila_map *VAR_10;
 int VAR_11;

 VAR_11 = FUNC_7(VAR_5, &VAR_9);
 if (VAR_11)
  return VAR_11;

 VAR_8 = FUNC_6(VAR_2, VAR_1);
 if (!VAR_8)
  return -VAR_0;

 FUNC_8();

 VAR_10 = FUNC_3(&VAR_9, VAR_7);
 if (VAR_10) {
  VAR_11 = FUNC_2(VAR_10,
        VAR_5->snd_portid,
        VAR_5->snd_seq, 0, VAR_8,
        VAR_5->genlhdr->cmd);
 }

 FUNC_9();

 if (VAR_11 < 0)
  goto out_free;

 return FUNC_1(VAR_8, VAR_5);

out_free:
 FUNC_5(VAR_8);
 return VAR_11;
}
