
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcf_mpls_params {int tcfm_label; int tcfm_ttl; int tcfm_tc; int tcfm_bos; } ;
struct mpls_shim_hdr {int label_stack_entry; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static __be32 FUNC_2(struct mpls_shim_hdr *VAR_11,
          struct tcf_mpls_params *VAR_12, bool VAR_13)
{
 u32 VAR_14 = 0;

 if (VAR_11)
  VAR_14 = FUNC_0(VAR_11->label_stack_entry);

 if (VAR_12->tcfm_label != VAR_1) {
  VAR_14 &= ~VAR_3;
  VAR_14 |= VAR_12->tcfm_label << VAR_4;
 }
 if (VAR_12->tcfm_ttl) {
  VAR_14 &= ~VAR_9;
  VAR_14 |= VAR_12->tcfm_ttl << VAR_10;
 }
 if (VAR_12->tcfm_tc != VAR_2) {
  VAR_14 &= ~VAR_7;
  VAR_14 |= VAR_12->tcfm_tc << VAR_8;
 }
 if (VAR_12->tcfm_bos != VAR_0) {
  VAR_14 &= ~VAR_5;
  VAR_14 |= VAR_12->tcfm_bos << VAR_6;
 } else if (VAR_13) {
  VAR_14 |= 1 << VAR_6;
 }

 return FUNC_1(VAR_14);
}
