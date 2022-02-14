
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rfcomm_session {int state; int dlcs; } ;
struct rfcomm_dlc {int state; int v24_sig; int (* state_change ) (struct rfcomm_dlc*,int ) ;} ;


 int VAR_0 ;

 void* VAR_1 ;
 int FUNC_0 (char*,struct rfcomm_session*,int,scalar_t__) ;

 int VAR_2 ;
 int FUNC_1 (struct rfcomm_dlc*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct rfcomm_dlc*) ;
 struct rfcomm_dlc* FUNC_4 (struct rfcomm_session*,scalar_t__) ;
 int FUNC_5 (struct rfcomm_dlc*) ;
 int FUNC_6 (struct rfcomm_dlc*) ;
 int FUNC_7 (struct rfcomm_session*) ;
 int FUNC_8 (struct rfcomm_session*,int ) ;
 int FUNC_9 (struct rfcomm_session*,scalar_t__) ;
 int FUNC_10 (struct rfcomm_session*,int,scalar_t__,int ) ;
 int FUNC_11 (struct rfcomm_session*) ;
 struct rfcomm_session* FUNC_12 (struct rfcomm_session*,int ) ;
 int FUNC_13 (struct rfcomm_dlc*,int ) ;

__attribute__((used)) static struct rfcomm_session *FUNC_14(struct rfcomm_session *VAR_3, u8 VAR_4)
{
 FUNC_0("session %p state %ld dlci %d", VAR_3, VAR_3->state, VAR_4);

 if (VAR_4) {

  struct rfcomm_dlc *VAR_5 = FUNC_4(VAR_3, VAR_4);
  if (!VAR_5) {
   FUNC_9(VAR_3, VAR_4);
   return VAR_3;
  }

  switch (VAR_5->state) {
  case 129:
   FUNC_3(VAR_5);

   FUNC_5(VAR_5);
   VAR_5->state = VAR_1;
   VAR_5->state_change(VAR_5, 0);
   FUNC_6(VAR_5);

   FUNC_10(VAR_3, 1, VAR_4, VAR_5->v24_sig);
   break;

  case 128:
   VAR_5->state = VAR_0;
   FUNC_1(VAR_5, 0);

   if (FUNC_2(&VAR_3->dlcs)) {
    VAR_3->state = 128;
    FUNC_8(VAR_3, 0);
    FUNC_11(VAR_3);
   }

   break;
  }
 } else {

  switch (VAR_3->state) {
  case 129:
   VAR_3->state = VAR_1;
   FUNC_7(VAR_3);
   break;

  case 128:
   VAR_3 = FUNC_12(VAR_3, VAR_2);
   break;
  }
 }
 return VAR_3;
}
