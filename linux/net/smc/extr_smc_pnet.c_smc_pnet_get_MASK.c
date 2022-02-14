
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct genl_info {int snd_seq; int snd_portid; int * attrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (struct net*,struct sk_buff*,int ,int ,int ,int ) ;
 struct net* FUNC_1 (struct genl_info*) ;
 int FUNC_2 (struct sk_buff*,struct genl_info*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*) ;
 struct sk_buff* FUNC_5 (int ,int ) ;
 void* FUNC_6 (struct sk_buff*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_8, struct genl_info *VAR_9)
{
 struct net *VAR_10 = FUNC_1(VAR_9);
 struct sk_buff *VAR_11;
 void *VAR_12;

 if (!VAR_9->attrs[VAR_7])
  return -VAR_0;

 VAR_11 = FUNC_5(VAR_4, VAR_3);
 if (!VAR_11)
  return -VAR_2;

 FUNC_0(VAR_10, VAR_11, VAR_9->snd_portid, VAR_9->snd_seq,
         FUNC_3(VAR_9->attrs[VAR_7]), 0);


 VAR_12 = FUNC_6(VAR_11, VAR_9->snd_portid, VAR_9->snd_seq, VAR_5, 0,
   VAR_6);
 if (!VAR_12) {
  FUNC_4(VAR_11);
  return -VAR_1;
 }
 return FUNC_2(VAR_11, VAR_9);
}
