
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int top_lse; } ;
struct sw_flow_key {TYPE_1__ mpls; } ;
struct sk_buff {int dummy; } ;
struct mpls_shim_hdr {int label_stack_entry; } ;
typedef int __be32 ;


 int FUNC_0 (int ,int const,int const) ;
 struct mpls_shim_hdr* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_0, struct sw_flow_key *VAR_1,
      const __be32 *VAR_2, const __be32 *VAR_3)
{
 struct mpls_shim_hdr *VAR_4;
 __be32 VAR_5;
 int VAR_6;

 VAR_4 = FUNC_1(VAR_0);
 VAR_5 = FUNC_0(VAR_4->label_stack_entry, *VAR_2, *VAR_3);
 VAR_6 = FUNC_2(VAR_0, VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_1->mpls.top_lse = VAR_5;
 return 0;
}
