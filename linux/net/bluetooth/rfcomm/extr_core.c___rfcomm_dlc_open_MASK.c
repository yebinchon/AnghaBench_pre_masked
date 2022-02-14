
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rfcomm_session {scalar_t__ cfc; scalar_t__ state; int mtu; int initiator; } ;
struct rfcomm_dlc {scalar_t__ state; int priority; int out; scalar_t__ cfc; int flags; int mtu; int addr; int dlci; int sec_level; } ;
typedef int bdaddr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,struct rfcomm_dlc*,scalar_t__,int *,int *,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct rfcomm_session*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct rfcomm_dlc*) ;
 int FUNC_6 (struct rfcomm_dlc*) ;
 scalar_t__ FUNC_7 (struct rfcomm_session*,int ) ;
 int FUNC_8 (struct rfcomm_session*,struct rfcomm_dlc*) ;
 int FUNC_9 (struct rfcomm_dlc*,int ) ;
 int FUNC_10 (struct rfcomm_session*,int,struct rfcomm_dlc*) ;
 struct rfcomm_session* FUNC_11 (int *,int *,int ,int*) ;
 struct rfcomm_session* FUNC_12 (int *,int *) ;
 int FUNC_13 (int ,int *) ;

__attribute__((used)) static int FUNC_14(struct rfcomm_dlc *VAR_9, bdaddr_t *VAR_10, bdaddr_t *VAR_11, u8 VAR_12)
{
 struct rfcomm_session *VAR_13;
 int VAR_14 = 0;
 u8 VAR_15;

 FUNC_0("dlc %p state %ld %pMR -> %pMR channel %d",
        VAR_9, VAR_9->state, VAR_10, VAR_11, VAR_12);

 if (FUNC_4(VAR_12))
  return -VAR_5;

 if (VAR_9->state != VAR_3 && VAR_9->state != VAR_0)
  return 0;

 VAR_13 = FUNC_12(VAR_10, VAR_11);
 if (!VAR_13) {
  VAR_13 = FUNC_11(VAR_10, VAR_11, VAR_9->sec_level, &VAR_14);
  if (!VAR_13)
   return VAR_14;
 }

 VAR_15 = FUNC_2(FUNC_3(VAR_13), VAR_12);


 if (FUNC_7(VAR_13, VAR_15))
  return -VAR_4;

 FUNC_6(VAR_9);

 VAR_9->dlci = VAR_15;
 VAR_9->addr = FUNC_1(VAR_13->initiator, VAR_15);
 VAR_9->priority = 7;

 VAR_9->state = VAR_1;
 FUNC_8(VAR_13, VAR_9);

 VAR_9->out = 1;

 VAR_9->mtu = VAR_13->mtu;
 VAR_9->cfc = (VAR_13->cfc == VAR_7) ? 0 : VAR_13->cfc;

 if (VAR_13->state == VAR_2) {
  if (FUNC_5(VAR_9))
   FUNC_10(VAR_13, 1, VAR_9);
  else
   FUNC_13(VAR_6, &VAR_9->flags);
 }

 FUNC_9(VAR_9, VAR_8);

 return 0;
}
