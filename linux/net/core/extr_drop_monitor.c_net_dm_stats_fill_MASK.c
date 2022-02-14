
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct genl_info {int snd_seq; int snd_portid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 void* FUNC_2 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_3, struct genl_info *VAR_4)
{
 void *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(VAR_3, VAR_4->snd_portid, VAR_4->snd_seq,
     &VAR_2, 0, VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_4(VAR_3);
 if (VAR_6)
  goto nla_put_failure;

 VAR_6 = FUNC_3(VAR_3);
 if (VAR_6)
  goto nla_put_failure;

 FUNC_1(VAR_3, VAR_5);

 return 0;

nla_put_failure:
 FUNC_0(VAR_3, VAR_5);
 return -VAR_0;
}
