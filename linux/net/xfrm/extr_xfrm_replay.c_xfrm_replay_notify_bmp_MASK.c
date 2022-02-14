
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_state {int xflags; scalar_t__ replay_maxage; int rtimer; struct xfrm_replay_state_esn* replay_esn; struct xfrm_replay_state_esn* preplay_esn; scalar_t__ replay_maxdiff; } ;
struct xfrm_replay_state_esn {scalar_t__ oseq; scalar_t__ seq; } ;
struct TYPE_2__ {int aevent; } ;
struct km_event {TYPE_1__ data; int event; } ;


 int VAR_0 ;


 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct xfrm_state*,struct km_event*) ;
 int FUNC_1 (struct xfrm_replay_state_esn*,struct xfrm_replay_state_esn*,int ) ;
 int FUNC_2 (struct xfrm_replay_state_esn*,struct xfrm_replay_state_esn*,int ) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (struct xfrm_replay_state_esn*) ;

__attribute__((used)) static void FUNC_5(struct xfrm_state *VAR_3, int VAR_4)
{
 struct km_event VAR_5;
 struct xfrm_replay_state_esn *VAR_6 = VAR_3->replay_esn;
 struct xfrm_replay_state_esn *VAR_7 = VAR_3->preplay_esn;
 switch (VAR_4) {
 case 128:
  if (!VAR_3->replay_maxdiff ||
      ((VAR_6->seq - VAR_7->seq < VAR_3->replay_maxdiff) &&
      (VAR_6->oseq - VAR_7->oseq
       < VAR_3->replay_maxdiff))) {
   if (VAR_3->xflags & VAR_1)
    VAR_4 = 129;
   else
    return;
  }

  break;

 case 129:
  if (FUNC_1(VAR_3->replay_esn, VAR_3->preplay_esn,
      FUNC_4(VAR_6)) == 0) {
   VAR_3->xflags |= VAR_1;
   return;
  }

  break;
 }

 FUNC_2(VAR_3->preplay_esn, VAR_3->replay_esn,
        FUNC_4(VAR_6));
 VAR_5.event = VAR_0;
 VAR_5.data.aevent = VAR_4;
 FUNC_0(VAR_3, &VAR_5);

 if (VAR_3->replay_maxage &&
     !FUNC_3(&VAR_3->rtimer, VAR_2 + VAR_3->replay_maxage))
  VAR_3->xflags &= ~VAR_1;
}
