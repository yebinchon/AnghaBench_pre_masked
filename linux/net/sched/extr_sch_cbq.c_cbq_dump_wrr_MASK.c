
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_cbq_wrropt {int weight; scalar_t__ cpriority; scalar_t__ priority; int allot; scalar_t__ flags; } ;
struct sk_buff {int len; } ;
struct cbq_class {int weight; scalar_t__ cpriority; scalar_t__ priority; int allot; } ;
typedef int opt ;


 int VAR_0 ;
 int FUNC_0 (struct tc_cbq_wrropt*,int ,int) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int,struct tc_cbq_wrropt*) ;
 int FUNC_2 (struct sk_buff*,unsigned char*) ;
 unsigned char* FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_1, struct cbq_class *VAR_2)
{
 unsigned char *VAR_3 = FUNC_3(VAR_1);
 struct tc_cbq_wrropt VAR_4;

 FUNC_0(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.flags = 0;
 VAR_4.allot = VAR_2->allot;
 VAR_4.priority = VAR_2->priority + 1;
 VAR_4.cpriority = VAR_2->cpriority + 1;
 VAR_4.weight = VAR_2->weight;
 if (FUNC_1(VAR_1, VAR_0, sizeof(VAR_4), &VAR_4))
  goto nla_put_failure;
 return VAR_1->len;

nla_put_failure:
 FUNC_2(VAR_1, VAR_3);
 return -1;
}
