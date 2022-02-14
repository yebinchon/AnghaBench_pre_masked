
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct batadv_algo_ops {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 void* FUNC_2 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_5, u32 VAR_6, u32 VAR_7,
      struct batadv_algo_ops *VAR_8)
{
 void *VAR_9;

 VAR_9 = FUNC_2(VAR_5, VAR_6, VAR_7, &VAR_4,
     VAR_3, VAR_1);
 if (!VAR_9)
  return -VAR_2;

 if (FUNC_3(VAR_5, VAR_0, VAR_8->name))
  goto nla_put_failure;

 FUNC_1(VAR_5, VAR_9);
 return 0;

 nla_put_failure:
 FUNC_0(VAR_5, VAR_9);
 return -VAR_2;
}
