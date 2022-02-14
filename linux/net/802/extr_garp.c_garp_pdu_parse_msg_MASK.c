
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ len; scalar_t__ data; } ;
struct garp_msg_hdr {scalar_t__ attrtype; } ;
struct garp_applicant {int dummy; } ;


 scalar_t__ FUNC_0 (struct garp_applicant*,struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_4(struct garp_applicant *VAR_0, struct sk_buff *VAR_1)
{
 const struct garp_msg_hdr *VAR_2;

 if (!FUNC_2(VAR_1, sizeof(*VAR_2)))
  return -1;
 VAR_2 = (struct garp_msg_hdr *)VAR_1->data;
 if (VAR_2->attrtype == 0)
  return -1;
 FUNC_3(VAR_1, sizeof(*VAR_2));

 while (VAR_1->len > 0) {
  if (FUNC_0(VAR_0, VAR_1, VAR_2->attrtype) < 0)
   return -1;
  if (FUNC_1(VAR_1) < 0)
   break;
 }
 return 0;
}
