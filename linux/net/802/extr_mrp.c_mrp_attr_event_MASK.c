
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrp_attr {size_t state; } ;
struct mrp_applicant {int dummy; } ;
typedef enum mrp_event { ____Placeholder_mrp_event } mrp_event ;
typedef enum mrp_applicant_state { ____Placeholder_mrp_applicant_state } mrp_applicant_state ;


 int VAR_0 ;
 int VAR_1 ;






 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int** VAR_5 ;
 int FUNC_1 (struct mrp_applicant*,struct mrp_attr*) ;
 int FUNC_2 (struct mrp_applicant*,struct mrp_attr*,int ) ;
 int* VAR_6 ;

__attribute__((used)) static void FUNC_3(struct mrp_applicant *VAR_7,
      struct mrp_attr *VAR_8, enum mrp_event VAR_9)
{
 enum mrp_applicant_state VAR_10;

 VAR_10 = VAR_5[VAR_8->state][VAR_9];
 if (VAR_10 == VAR_0) {
  FUNC_0(1);
  return;
 }

 if (VAR_9 == VAR_1) {




  switch (VAR_6[VAR_8->state]) {
  case 133:
  case 130:
  case 132:
   break;
  case 128:
   if (FUNC_2(
        VAR_7, VAR_8, VAR_4) < 0)
    return;
   break;
  case 131:
   if (FUNC_2(
        VAR_7, VAR_8, VAR_2) < 0)
    return;
   break;
  case 129:
   if (FUNC_2(
        VAR_7, VAR_8, VAR_3) < 0)
    return;




   FUNC_1(VAR_7, VAR_8);
   return;
  default:
   FUNC_0(1);
  }
 }

 VAR_8->state = VAR_10;
}
