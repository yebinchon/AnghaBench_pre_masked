
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct genl_info {int snd_seq; int snd_portid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 void* FUNC_2 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_9, struct genl_info *VAR_10)
{
 void *VAR_11;

 VAR_11 = FUNC_2(VAR_9, VAR_10->snd_portid, VAR_10->snd_seq,
     &VAR_8, 0, VAR_4);
 if (!VAR_11)
  return -VAR_0;

 if (FUNC_4(VAR_9, VAR_1, VAR_5))
  goto nla_put_failure;

 if (FUNC_3(VAR_9, VAR_3, VAR_7))
  goto nla_put_failure;

 if (FUNC_3(VAR_9, VAR_2, VAR_6))
  goto nla_put_failure;

 FUNC_1(VAR_9, VAR_11);

 return 0;

nla_put_failure:
 FUNC_0(VAR_9, VAR_11);
 return -VAR_0;
}
