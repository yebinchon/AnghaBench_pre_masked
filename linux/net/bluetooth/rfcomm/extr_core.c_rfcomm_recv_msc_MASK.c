
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {scalar_t__ data; } ;
struct rfcomm_session {int dummy; } ;
struct rfcomm_msc {int v24_sig; int dlci; } ;
struct rfcomm_dlc {int remote_v24_sig; int mscex; int (* modem_status ) (struct rfcomm_dlc*,int) ;int flags; int cfc; } ;


 int FUNC_0 (char*,int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 struct rfcomm_dlc* FUNC_3 (struct rfcomm_session*,int ) ;
 int FUNC_4 (struct rfcomm_dlc*) ;
 int FUNC_5 (struct rfcomm_dlc*) ;
 int FUNC_6 (struct rfcomm_session*,int ,int ,int) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (struct rfcomm_dlc*,int) ;

__attribute__((used)) static int FUNC_9(struct rfcomm_session *VAR_4, int VAR_5, struct sk_buff *VAR_6)
{
 struct rfcomm_msc *VAR_7 = (void *) VAR_6->data;
 struct rfcomm_dlc *VAR_8;
 u8 VAR_9 = FUNC_1(VAR_7->dlci);

 FUNC_0("dlci %d cr %d v24 0x%x", VAR_9, VAR_5, VAR_7->v24_sig);

 VAR_8 = FUNC_3(VAR_4, VAR_9);
 if (!VAR_8)
  return 0;

 if (VAR_5) {
  if (VAR_7->v24_sig & VAR_3 && !VAR_8->cfc)
   FUNC_7(VAR_2, &VAR_8->flags);
  else
   FUNC_2(VAR_2, &VAR_8->flags);

  FUNC_4(VAR_8);

  VAR_8->remote_v24_sig = VAR_7->v24_sig;

  if (VAR_8->modem_status)
   VAR_8->modem_status(VAR_8, VAR_7->v24_sig);

  FUNC_5(VAR_8);

  FUNC_6(VAR_4, 0, VAR_9, VAR_7->v24_sig);

  VAR_8->mscex |= VAR_0;
 } else
  VAR_8->mscex |= VAR_1;

 return 0;
}
