
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int qlen; } ;
struct llc_shdlc {scalar_t__ state; int rnr; TYPE_1__ send_q; } ;
typedef enum sframe_type { ____Placeholder_sframe_type } sframe_type ;


 scalar_t__ VAR_0 ;



 struct sk_buff* FUNC_0 (struct llc_shdlc*,int ) ;
 int FUNC_1 (struct llc_shdlc*,int) ;
 int FUNC_2 (struct llc_shdlc*,int) ;
 int FUNC_3 (TYPE_1__*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_4(struct llc_shdlc *VAR_1,
      enum sframe_type VAR_2, int VAR_3)
{
 struct sk_buff *VAR_4;

 if (VAR_1->state != VAR_0)
  return;

 switch (VAR_2) {
 case 128:
  FUNC_1(VAR_1, VAR_3);
  if (VAR_1->rnr == 1) {
   VAR_1->rnr = 0;
   if (VAR_1->send_q.qlen == 0) {
    VAR_4 = FUNC_0(VAR_1, 0);
    if (VAR_4)
     FUNC_3(&VAR_1->send_q, VAR_4);
   }
  }
  break;
 case 130:
  FUNC_2(VAR_1, VAR_3);
  break;
 case 129:
  FUNC_1(VAR_1, VAR_3);
  VAR_1->rnr = 1;
  break;
 default:
  break;
 }
}
