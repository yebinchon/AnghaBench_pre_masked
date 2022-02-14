
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sk_buff {scalar_t__ data; } ;
struct rfcomm_session {int initiator; int state; } ;
struct rfcomm_pn {scalar_t__ dlci; } ;
struct rfcomm_dlc {int state; int addr; scalar_t__ dlci; } ;



 int VAR_0 ;
 int FUNC_0 (char*,struct rfcomm_session*,int ,scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct rfcomm_dlc*,int,struct rfcomm_pn*) ;
 scalar_t__ FUNC_4 (struct rfcomm_session*,scalar_t__,struct rfcomm_dlc**) ;
 struct rfcomm_dlc* FUNC_5 (struct rfcomm_session*,scalar_t__) ;
 int FUNC_6 (struct rfcomm_session*,struct rfcomm_dlc*) ;
 int FUNC_7 (struct rfcomm_session*,scalar_t__) ;
 int FUNC_8 (struct rfcomm_session*,int ,struct rfcomm_dlc*) ;
 int FUNC_9 (struct rfcomm_session*,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct rfcomm_session *VAR_2, int VAR_3, struct sk_buff *VAR_4)
{
 struct rfcomm_pn *VAR_5 = (void *) VAR_4->data;
 struct rfcomm_dlc *VAR_6;
 u8 VAR_7 = VAR_5->dlci;

 FUNC_0("session %p state %ld dlci %d", VAR_2, VAR_2->state, VAR_7);

 if (!VAR_7)
  return 0;

 VAR_6 = FUNC_5(VAR_2, VAR_7);
 if (VAR_6) {
  if (VAR_3) {

   FUNC_3(VAR_6, VAR_3, VAR_5);
   FUNC_8(VAR_2, 0, VAR_6);
  } else {

   switch (VAR_6->state) {
   case 128:
    FUNC_3(VAR_6, VAR_3, VAR_5);

    VAR_6->state = VAR_0;
    FUNC_9(VAR_2, VAR_6->dlci);
    break;
   }
  }
 } else {
  u8 VAR_8 = FUNC_2(VAR_7);

  if (!VAR_3)
   return 0;



  if (FUNC_4(VAR_2, VAR_8, &VAR_6)) {
   VAR_6->dlci = VAR_7;
   VAR_6->addr = FUNC_1(VAR_2->initiator, VAR_7);
   FUNC_6(VAR_2, VAR_6);

   FUNC_3(VAR_6, VAR_3, VAR_5);

   VAR_6->state = VAR_1;
   FUNC_8(VAR_2, 0, VAR_6);
  } else {
   FUNC_7(VAR_2, VAR_7);
  }
 }
 return 0;
}
