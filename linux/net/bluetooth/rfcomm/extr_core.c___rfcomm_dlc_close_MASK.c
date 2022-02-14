
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rfcomm_session {int state; } ;
struct rfcomm_dlc {int state; int tx_queue; int (* state_change ) (struct rfcomm_dlc*,int) ;int flags; int dlci; struct rfcomm_session* session; } ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (char*,struct rfcomm_dlc*,int,int ,int,struct rfcomm_session*) ;

 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct rfcomm_dlc*) ;
 int FUNC_2 (struct rfcomm_dlc*) ;
 int FUNC_3 (struct rfcomm_dlc*) ;
 int FUNC_4 (struct rfcomm_dlc*) ;
 int FUNC_5 (struct rfcomm_dlc*) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct rfcomm_dlc*,int) ;
 int FUNC_10 (int ,int *) ;

__attribute__((used)) static int FUNC_11(struct rfcomm_dlc *VAR_4, int VAR_5)
{
 struct rfcomm_session *VAR_6 = VAR_4->session;
 if (!VAR_6)
  return 0;

 FUNC_0("dlc %p state %ld dlci %d err %d session %p",
   VAR_4, VAR_4->state, VAR_4->dlci, VAR_5, VAR_6);

 switch (VAR_4->state) {
 case 131:
 case 132:
 case 128:
 case 130:
  if (FUNC_10(VAR_3, &VAR_4->flags)) {
   FUNC_7(VAR_2, &VAR_4->flags);
   FUNC_6();
   return 0;
  }
 }

 switch (VAR_4->state) {
 case 131:
 case 129:
  FUNC_1(VAR_4);
  break;

 case 132:
  if (VAR_6->state != VAR_0) {
   FUNC_1(VAR_4);
   break;
  }





 default:
  FUNC_2(VAR_4);

  FUNC_3(VAR_4);
  VAR_4->state = VAR_1;
  VAR_4->state_change(VAR_4, VAR_5);
  FUNC_5(VAR_4);

  FUNC_8(&VAR_4->tx_queue);
  FUNC_4(VAR_4);
 }

 return 0;
}
