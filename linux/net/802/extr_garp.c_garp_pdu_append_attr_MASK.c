
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct garp_attr_hdr {unsigned int len; int event; int data; } ;
struct garp_attr {int dlen; int data; scalar_t__ type; } ;
struct garp_applicant {int pdu; } ;
typedef enum garp_attr_event { ____Placeholder_garp_attr_event } garp_attr_event ;
struct TYPE_2__ {scalar_t__ cur_type; } ;


 struct garp_attr_hdr* FUNC_0 (int ,unsigned int) ;
 TYPE_1__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct garp_applicant*) ;
 scalar_t__ FUNC_3 (struct garp_applicant*,scalar_t__) ;
 int FUNC_4 (struct garp_applicant*) ;
 int FUNC_5 (struct garp_applicant*) ;
 int FUNC_6 (int ,int ,int) ;
 unsigned int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct garp_applicant *VAR_0,
    const struct garp_attr *VAR_1,
    enum garp_attr_event VAR_2)
{
 struct garp_attr_hdr *VAR_3;
 unsigned int VAR_4;
 int VAR_5;
again:
 if (!VAR_0->pdu) {
  VAR_5 = FUNC_4(VAR_0);
  if (VAR_5 < 0)
   return VAR_5;
 }

 if (FUNC_1(VAR_0->pdu)->cur_type != VAR_1->type) {
  if (FUNC_1(VAR_0->pdu)->cur_type &&
      FUNC_2(VAR_0) < 0)
   goto queue;
  if (FUNC_3(VAR_0, VAR_1->type) < 0)
   goto queue;
 }

 VAR_4 = sizeof(*VAR_3) + VAR_1->dlen;
 if (FUNC_7(VAR_0->pdu) < VAR_4)
  goto queue;
 VAR_3 = FUNC_0(VAR_0->pdu, VAR_4);
 VAR_3->len = VAR_4;
 VAR_3->event = VAR_2;
 FUNC_6(VAR_3->data, VAR_1->data, VAR_1->dlen);
 return 0;

queue:
 FUNC_5(VAR_0);
 goto again;
}
