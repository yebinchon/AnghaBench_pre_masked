
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_meta_info {int dummy; } ;
struct sk_buff {int tc_index; } ;


 int FUNC_0 (int ,struct tcf_meta_info*) ;

__attribute__((used)) static int FUNC_1(struct sk_buff *VAR_0, struct tcf_meta_info *VAR_1)
{
 return FUNC_0(VAR_0->tc_index, VAR_1);
}
