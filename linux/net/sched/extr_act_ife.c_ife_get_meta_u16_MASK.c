
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct tcf_meta_info {int metaid; scalar_t__ metaval; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (struct sk_buff*,int ,int ,int *) ;
 int FUNC_1 (struct sk_buff*,int ,int ) ;

int FUNC_2(struct sk_buff *VAR_0, struct tcf_meta_info *VAR_1)
{
 if (VAR_1->metaval)
  return FUNC_1(VAR_0, VAR_1->metaid, *(u16 *)VAR_1->metaval);
 else
  return FUNC_0(VAR_0, VAR_1->metaid, 0, ((void*)0));
}
