
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rfcomm_session {scalar_t__ state; int initiator; } ;
struct rfcomm_dlc {scalar_t__ state; int addr; scalar_t__ dlci; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,struct rfcomm_session*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct rfcomm_dlc*) ;
 scalar_t__ FUNC_4 (struct rfcomm_session*,scalar_t__,struct rfcomm_dlc**) ;
 struct rfcomm_dlc* FUNC_5 (struct rfcomm_session*,scalar_t__) ;
 int FUNC_6 (struct rfcomm_session*,struct rfcomm_dlc*) ;
 int FUNC_7 (struct rfcomm_session*) ;
 int FUNC_8 (struct rfcomm_session*,scalar_t__) ;
 int FUNC_9 (struct rfcomm_session*,int ) ;

__attribute__((used)) static int FUNC_10(struct rfcomm_session *VAR_2, u8 VAR_3)
{
 struct rfcomm_dlc *VAR_4;
 u8 VAR_5;

 FUNC_0("session %p state %ld dlci %d", VAR_2, VAR_2->state, VAR_3);

 if (!VAR_3) {
  FUNC_9(VAR_2, 0);

  if (VAR_2->state == VAR_1) {
   VAR_2->state = VAR_0;
   FUNC_7(VAR_2);
  }
  return 0;
 }


 VAR_4 = FUNC_5(VAR_2, VAR_3);
 if (VAR_4) {
  if (VAR_4->state == VAR_1) {

   FUNC_3(VAR_4);
  }
  return 0;
 }


 VAR_5 = FUNC_2(VAR_3);
 if (FUNC_4(VAR_2, VAR_5, &VAR_4)) {
  VAR_4->dlci = VAR_3;
  VAR_4->addr = FUNC_1(VAR_2->initiator, VAR_3);
  FUNC_6(VAR_2, VAR_4);

  FUNC_3(VAR_4);
 } else {
  FUNC_8(VAR_2, VAR_3);
 }

 return 0;
}
