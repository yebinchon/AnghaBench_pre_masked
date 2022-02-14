
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct mrp_attr {scalar_t__ type; scalar_t__ len; int value; } ;
struct mrp_applicant {int pdu; } ;
typedef enum mrp_vecattr_event { ____Placeholder_mrp_vecattr_event } mrp_vecattr_event ;
struct TYPE_6__ {int attrvalue; TYPE_2__* vah; TYPE_1__* mh; } ;
struct TYPE_5__ {int lenflags; } ;
struct TYPE_4__ {scalar_t__ attrtype; scalar_t__ attrlen; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int* FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int ,scalar_t__) ;
 int FUNC_6 (int ,scalar_t__) ;
 TYPE_3__* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct mrp_applicant*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (struct mrp_applicant*,int ,scalar_t__) ;
 int FUNC_10 (struct mrp_applicant*) ;
 int FUNC_11 (struct mrp_applicant*) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static int FUNC_15(struct mrp_applicant *VAR_1,
     const struct mrp_attr *VAR_2,
     enum mrp_vecattr_event VAR_3)
{
 u16 VAR_4, VAR_5;
 u8 *VAR_6;
 int VAR_7;
again:
 if (!VAR_1->pdu) {
  VAR_7 = FUNC_10(VAR_1);
  if (VAR_7 < 0)
   return VAR_7;
 }





 if (!FUNC_7(VAR_1->pdu)->mh ||
     FUNC_7(VAR_1->pdu)->mh->attrtype != VAR_2->type ||
     FUNC_7(VAR_1->pdu)->mh->attrlen != VAR_2->len) {
  if (FUNC_8(VAR_1, VAR_2->type, VAR_2->len) < 0)
   goto queue;
 }





 if (!FUNC_7(VAR_1->pdu)->vah ||
     FUNC_5(FUNC_7(VAR_1->pdu)->attrvalue, VAR_2->value, VAR_2->len)) {
  if (FUNC_9(VAR_1, VAR_2->value, VAR_2->len) < 0)
   goto queue;
 }

 VAR_4 = FUNC_2(FUNC_4(&FUNC_7(VAR_1->pdu)->vah->lenflags));
 VAR_5 = VAR_4 % 3;




 if (!VAR_5) {
  if (FUNC_14(VAR_1->pdu) < sizeof(u8))
   goto queue;
  VAR_6 = FUNC_1(VAR_1->pdu, sizeof(u8));
 } else {
  VAR_6 = (u8 *)(FUNC_13(VAR_1->pdu) - sizeof(u8));
 }

 switch (VAR_5) {
 case 0:
  *VAR_6 = VAR_3 * (VAR_0 *
           VAR_0);
  break;
 case 1:
  *VAR_6 += VAR_3 * VAR_0;
  break;
 case 2:
  *VAR_6 += VAR_3;
  break;
 default:
  FUNC_0(1);
 }




 FUNC_12(FUNC_3(++VAR_4), &FUNC_7(VAR_1->pdu)->vah->lenflags);
 FUNC_6(FUNC_7(VAR_1->pdu)->attrvalue, VAR_2->len);

 return 0;

queue:
 FUNC_11(VAR_1);
 goto again;
}
