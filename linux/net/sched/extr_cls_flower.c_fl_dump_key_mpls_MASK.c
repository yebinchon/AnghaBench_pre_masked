
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct flow_dissector_key_mpls {scalar_t__ mpls_bos; scalar_t__ mpls_label; scalar_t__ mpls_tc; scalar_t__ mpls_ttl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct flow_dissector_key_mpls*,int ,int) ;
 int FUNC_1 (struct sk_buff*,int ,scalar_t__) ;
 int FUNC_2 (struct sk_buff*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_4,
       struct flow_dissector_key_mpls *VAR_5,
       struct flow_dissector_key_mpls *VAR_6)
{
 int VAR_7;

 if (!FUNC_0(VAR_6, 0, sizeof(*VAR_6)))
  return 0;
 if (VAR_6->mpls_ttl) {
  VAR_7 = FUNC_2(VAR_4, VAR_3,
     VAR_5->mpls_ttl);
  if (VAR_7)
   return VAR_7;
 }
 if (VAR_6->mpls_tc) {
  VAR_7 = FUNC_2(VAR_4, VAR_2,
     VAR_5->mpls_tc);
  if (VAR_7)
   return VAR_7;
 }
 if (VAR_6->mpls_label) {
  VAR_7 = FUNC_1(VAR_4, VAR_1,
      VAR_5->mpls_label);
  if (VAR_7)
   return VAR_7;
 }
 if (VAR_6->mpls_bos) {
  VAR_7 = FUNC_2(VAR_4, VAR_0,
     VAR_5->mpls_bos);
  if (VAR_7)
   return VAR_7;
 }
 return 0;
}
