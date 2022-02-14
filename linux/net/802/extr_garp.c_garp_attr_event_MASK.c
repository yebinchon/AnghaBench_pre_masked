
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct garp_attr {size_t state; } ;
struct garp_applicant {int dummy; } ;
typedef enum garp_event { ____Placeholder_garp_event } garp_event ;
typedef enum garp_applicant_state { ____Placeholder_garp_applicant_state } garp_applicant_state ;
struct TYPE_2__ {int state; int action; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 TYPE_1__** VAR_3 ;
 int FUNC_1 (struct garp_applicant*,struct garp_attr*) ;
 int FUNC_2 (struct garp_applicant*,struct garp_attr*,int ) ;

__attribute__((used)) static void FUNC_3(struct garp_applicant *VAR_4,
       struct garp_attr *VAR_5, enum garp_event VAR_6)
{
 enum garp_applicant_state VAR_7;

 VAR_7 = VAR_3[VAR_5->state][VAR_6].state;
 if (VAR_7 == VAR_0)
  return;

 switch (VAR_3[VAR_5->state][VAR_6].action) {
 case 130:
  break;
 case 129:


  if (FUNC_2(VAR_4, VAR_5, VAR_1) < 0)
   return;
  break;
 case 128:
  FUNC_2(VAR_4, VAR_5, VAR_2);


  FUNC_1(VAR_4, VAR_5);
  return;
 default:
  FUNC_0(1);
 }

 VAR_5->state = VAR_7;
}
