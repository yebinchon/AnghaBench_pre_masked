
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nlattr {int dummy; } ;
struct flow_dissector_key_mpls {int mpls_bos; int mpls_tc; int mpls_label; void* mpls_ttl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_0 (struct nlattr*) ;
 void* FUNC_1 (struct nlattr*) ;

__attribute__((used)) static int FUNC_2(struct nlattr **VAR_9,
      struct flow_dissector_key_mpls *VAR_10,
      struct flow_dissector_key_mpls *VAR_11)
{
 if (VAR_9[VAR_8]) {
  VAR_10->mpls_ttl = FUNC_1(VAR_9[VAR_8]);
  VAR_11->mpls_ttl = VAR_4;
 }
 if (VAR_9[VAR_5]) {
  u8 VAR_12 = FUNC_1(VAR_9[VAR_5]);

  if (VAR_12 & ~VAR_1)
   return -VAR_0;
  VAR_10->mpls_bos = VAR_12;
  VAR_11->mpls_bos = VAR_1;
 }
 if (VAR_9[VAR_7]) {
  u8 VAR_13 = FUNC_1(VAR_9[VAR_7]);

  if (VAR_13 & ~VAR_3)
   return -VAR_0;
  VAR_10->mpls_tc = VAR_13;
  VAR_11->mpls_tc = VAR_3;
 }
 if (VAR_9[VAR_6]) {
  u32 VAR_14 = FUNC_0(VAR_9[VAR_6]);

  if (VAR_14 & ~VAR_2)
   return -VAR_0;
  VAR_10->mpls_label = VAR_14;
  VAR_11->mpls_label = VAR_2;
 }
 return 0;
}
