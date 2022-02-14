
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct garp_msg_hdr {void* attrtype; } ;
struct garp_applicant {int pdu; } ;
struct TYPE_2__ {void* cur_type; } ;


 struct garp_msg_hdr* FUNC_0 (int ,int) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct garp_applicant *VAR_0, u8 VAR_1)
{
 struct garp_msg_hdr *VAR_2;

 if (FUNC_2(VAR_0->pdu) < sizeof(*VAR_2))
  return -1;
 VAR_2 = FUNC_0(VAR_0->pdu, sizeof(*VAR_2));
 VAR_2->attrtype = VAR_1;
 FUNC_1(VAR_0->pdu)->cur_type = VAR_1;
 return 0;
}
