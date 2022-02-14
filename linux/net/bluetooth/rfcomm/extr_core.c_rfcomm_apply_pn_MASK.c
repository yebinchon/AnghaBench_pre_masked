
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rfcomm_session {scalar_t__ cfc; scalar_t__ mtu; } ;
struct rfcomm_pn {int flow_ctrl; int mtu; int priority; int credits; } ;
struct rfcomm_dlc {scalar_t__ cfc; scalar_t__ mtu; int priority; int flags; int tx_credits; int dlci; int state; struct rfcomm_session* session; } ;


 int FUNC_0 (char*,struct rfcomm_dlc*,int ,int ,int ,int,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct rfcomm_dlc *VAR_4, int VAR_5, struct rfcomm_pn *VAR_6)
{
 struct rfcomm_session *VAR_7 = VAR_4->session;

 FUNC_0("dlc %p state %ld dlci %d mtu %d fc 0x%x credits %d",
   VAR_4, VAR_4->state, VAR_4->dlci, VAR_6->mtu, VAR_6->flow_ctrl, VAR_6->credits);

 if ((VAR_6->flow_ctrl == 0xf0 && VAR_7->cfc != VAR_0) ||
      VAR_6->flow_ctrl == 0xe0) {
  VAR_4->cfc = VAR_1;
  VAR_4->tx_credits = VAR_6->credits;
 } else {
  VAR_4->cfc = VAR_0;
  FUNC_2(VAR_3, &VAR_4->flags);
 }

 if (VAR_7->cfc == VAR_2)
  VAR_7->cfc = VAR_4->cfc;

 VAR_4->priority = VAR_6->priority;

 VAR_4->mtu = FUNC_1(VAR_6->mtu);

 if (VAR_5 && VAR_4->mtu > VAR_7->mtu)
  VAR_4->mtu = VAR_7->mtu;

 return 0;
}
