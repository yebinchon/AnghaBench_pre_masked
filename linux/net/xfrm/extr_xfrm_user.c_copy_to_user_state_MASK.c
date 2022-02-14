
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int integrity_failed; int replay; int replay_window; } ;
struct xfrm_usersa_info {int seq; int flags; int family; int reqid; int replay_window; int mode; int saddr; TYPE_2__ stats; int curlft; int lft; int sel; int id; } ;
struct TYPE_8__ {int seq; } ;
struct TYPE_7__ {int flags; int family; int reqid; int replay_window; int mode; int saddr; } ;
struct TYPE_5__ {int integrity_failed; int replay; int replay_window; } ;
struct xfrm_state {TYPE_4__ km; TYPE_3__ props; TYPE_1__ stats; int curlft; int lft; int sel; int id; } ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (struct xfrm_usersa_info*,int ,int) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct xfrm_state *VAR_0, struct xfrm_usersa_info *VAR_1)
{
 FUNC_1(VAR_1, 0, sizeof(*VAR_1));
 FUNC_0(&VAR_1->id, &VAR_0->id, sizeof(VAR_1->id));
 FUNC_0(&VAR_1->sel, &VAR_0->sel, sizeof(VAR_1->sel));
 FUNC_0(&VAR_1->lft, &VAR_0->lft, sizeof(VAR_1->lft));
 FUNC_0(&VAR_1->curlft, &VAR_0->curlft, sizeof(VAR_1->curlft));
 FUNC_2(VAR_0->stats.replay_window, &VAR_1->stats.replay_window);
 FUNC_2(VAR_0->stats.replay, &VAR_1->stats.replay);
 FUNC_2(VAR_0->stats.integrity_failed, &VAR_1->stats.integrity_failed);
 FUNC_0(&VAR_1->saddr, &VAR_0->props.saddr, sizeof(VAR_1->saddr));
 VAR_1->mode = VAR_0->props.mode;
 VAR_1->replay_window = VAR_0->props.replay_window;
 VAR_1->reqid = VAR_0->props.reqid;
 VAR_1->family = VAR_0->props.family;
 VAR_1->flags = VAR_0->props.flags;
 VAR_1->seq = VAR_0->km.seq;
}
