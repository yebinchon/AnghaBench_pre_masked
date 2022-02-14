
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_ctinfo_params {int cpmarkmask; } ;
struct tcf_ctinfo {int stats_cpmark_set; } ;
struct sk_buff {int mark; } ;
struct nf_conn {int mark; } ;



__attribute__((used)) static void FUNC_0(struct nf_conn *VAR_0, struct tcf_ctinfo *VAR_1,
      struct tcf_ctinfo_params *VAR_2,
      struct sk_buff *VAR_3)
{
 VAR_1->stats_cpmark_set++;
 VAR_3->mark = VAR_0->mark & VAR_2->cpmarkmask;
}
