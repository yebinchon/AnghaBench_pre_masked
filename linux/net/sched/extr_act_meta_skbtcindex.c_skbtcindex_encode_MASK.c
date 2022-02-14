
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcf_meta_info {int dummy; } ;
struct sk_buff {int tc_index; } ;


 int FUNC_0 (int ,void*,struct tcf_meta_info*) ;

__attribute__((used)) static int FUNC_1(struct sk_buff *VAR_0, void *VAR_1,
        struct tcf_meta_info *VAR_2)
{
 u32 VAR_3 = VAR_0->tc_index;

 return FUNC_0(VAR_3, VAR_1, VAR_2);
}
