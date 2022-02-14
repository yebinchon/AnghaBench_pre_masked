
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int flags; } ;
struct xfrm_state {TYPE_1__ props; struct xfrm_replay_state_esn* replay_esn; } ;
struct xfrm_replay_state_esn {scalar_t__ seq_hi; scalar_t__ seq; int replay_window; } ;
typedef int __be32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;

u32 FUNC_3(struct xfrm_state *VAR_1, __be32 VAR_2)
{
 u32 VAR_3, VAR_4, VAR_5;
 struct xfrm_replay_state_esn *VAR_6 = VAR_1->replay_esn;

 if (!(VAR_1->props.flags & VAR_0))
  return 0;

 VAR_3 = FUNC_1(VAR_2);
 VAR_4 = VAR_6->seq_hi;
 VAR_5 = VAR_6->seq - VAR_6->replay_window + 1;

 if (FUNC_0(VAR_6->seq >= VAR_6->replay_window - 1)) {

  if (FUNC_2(VAR_3 < VAR_5))
   VAR_4++;
 } else {

  if (FUNC_2(VAR_3 >= VAR_5))
   VAR_4--;
 }

 return VAR_4;
}
