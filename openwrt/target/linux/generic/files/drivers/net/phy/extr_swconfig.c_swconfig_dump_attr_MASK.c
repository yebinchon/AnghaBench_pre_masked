
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switch_attr {int type; scalar_t__ description; scalar_t__ name; } ;
struct swconfig_callback {int* args; struct sk_buff* msg; struct genl_info* info; } ;
struct sk_buff {int len; } ;
struct genl_info {int snd_seq; int snd_portid; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct sk_buff*,void*) ;
 int FUNC_2 (struct sk_buff*,void*) ;
 void* FUNC_3 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,scalar_t__) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int) ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_6(struct swconfig_callback *VAR_8, void *VAR_9)
{
 struct switch_attr *VAR_10 = VAR_9;
 struct genl_info *VAR_11 = VAR_8->info;
 struct sk_buff *VAR_12 = VAR_8->msg;
 int VAR_13 = VAR_8->args[0];
 void *VAR_14;

 VAR_14 = FUNC_3(VAR_12, VAR_11->snd_portid, VAR_11->snd_seq, &VAR_7,
   VAR_1, VAR_6);
 if (FUNC_0(VAR_14))
  return -1;

 if (FUNC_5(VAR_12, VAR_3, VAR_13))
  goto nla_put_failure;
 if (FUNC_5(VAR_12, VAR_5, VAR_10->type))
  goto nla_put_failure;
 if (FUNC_4(VAR_12, VAR_4, VAR_10->name))
  goto nla_put_failure;
 if (VAR_10->description)
  if (FUNC_4(VAR_12, VAR_2,
   VAR_10->description))
   goto nla_put_failure;

 FUNC_2(VAR_12, VAR_14);
 return VAR_12->len;
nla_put_failure:
 FUNC_1(VAR_12, VAR_14);
 return -VAR_0;
}
