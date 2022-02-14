
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct mrp_msg_hdr {void* attrlen; void* attrtype; } ;
struct mrp_applicant {int pdu; } ;
struct TYPE_2__ {struct mrp_msg_hdr* mh; int * vah; } ;


 struct mrp_msg_hdr* FUNC_0 (int ,int) ;
 TYPE_1__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct mrp_applicant*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct mrp_applicant *VAR_0,
      u8 VAR_1, u8 VAR_2)
{
 struct mrp_msg_hdr *VAR_3;

 if (FUNC_1(VAR_0->pdu)->mh) {
  if (FUNC_2(VAR_0) < 0)
   return -1;
  FUNC_1(VAR_0->pdu)->mh = ((void*)0);
  FUNC_1(VAR_0->pdu)->vah = ((void*)0);
 }

 if (FUNC_3(VAR_0->pdu) < sizeof(*VAR_3))
  return -1;
 VAR_3 = FUNC_0(VAR_0->pdu, sizeof(*VAR_3));
 VAR_3->attrtype = VAR_1;
 VAR_3->attrlen = VAR_2;
 FUNC_1(VAR_0->pdu)->mh = VAR_3;
 return 0;
}
