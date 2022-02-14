
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hidp_session {int user; int conn; int report_queue; TYPE_2__* intr_sock; int state_queue; int state; TYPE_1__* ctrl_sock; } ;
struct TYPE_4__ {int sk; } ;
struct TYPE_3__ {int sk; } ;


 int FUNC_0 (char*,struct hidp_session*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (struct hidp_session*) ;
 int FUNC_6 (struct hidp_session*) ;
 int FUNC_7 (struct hidp_session*) ;
 int FUNC_8 (struct hidp_session*) ;
 int VAR_3 ;
 int FUNC_9 (struct hidp_session*) ;
 int VAR_4 ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int ,int) ;
 int FUNC_14 (int ) ;
 int FUNC_15 () ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static int FUNC_18(void *VAR_5)
{
 struct hidp_session *VAR_6 = VAR_5;
 FUNC_1(VAR_1, VAR_3);
 FUNC_1(VAR_4, VAR_3);

 FUNC_0("session %p", VAR_6);


 FUNC_6(VAR_6);
 FUNC_2(VAR_0);
 FUNC_13(VAR_2, -15);
 FUNC_9(VAR_6);

 FUNC_3(FUNC_14(VAR_6->ctrl_sock->sk), &VAR_1);
 FUNC_3(FUNC_14(VAR_6->intr_sock->sk), &VAR_4);


 FUNC_15();


 FUNC_4(&VAR_6->state);
 FUNC_16(&VAR_6->state_queue);


 FUNC_8(VAR_6);


 FUNC_12(FUNC_14(VAR_6->intr_sock->sk), &VAR_4);
 FUNC_12(FUNC_14(VAR_6->intr_sock->sk), &VAR_1);
 FUNC_17(&VAR_6->report_queue);
 FUNC_5(VAR_6);
 FUNC_10(VAR_6->conn, &VAR_6->user);
 FUNC_7(VAR_6);

 FUNC_11(0);
 return 0;
}
