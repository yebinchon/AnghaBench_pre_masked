
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct canfd_frame {int flags; } ;
struct bcm_op {scalar_t__ kt_lastmsg; int kt_ival2; int thrtimer; int cfsiz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bcm_op*,struct canfd_frame*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (scalar_t__,int ) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (struct canfd_frame*,struct canfd_frame const*,int ) ;

__attribute__((used)) static void FUNC_8(struct bcm_op *VAR_3,
       struct canfd_frame *VAR_4,
       const struct canfd_frame *VAR_5)
{
 FUNC_7(VAR_4, VAR_5, VAR_3->cfsiz);


 VAR_4->flags |= (VAR_1|VAR_2);


 if (!VAR_3->kt_ival2) {

  FUNC_0(VAR_3, VAR_4);
  return;
 }


 if (FUNC_1(&VAR_3->thrtimer))
  return;


 if (!VAR_3->kt_lastmsg)
  goto rx_changed_settime;


 if (FUNC_6(FUNC_4(), VAR_3->kt_lastmsg) <
     FUNC_5(VAR_3->kt_ival2)) {

  FUNC_2(&VAR_3->thrtimer,
         FUNC_3(VAR_3->kt_lastmsg, VAR_3->kt_ival2),
         VAR_0);
  return;
 }


rx_changed_settime:
 FUNC_0(VAR_3, VAR_4);
 VAR_3->kt_lastmsg = FUNC_4();
}
