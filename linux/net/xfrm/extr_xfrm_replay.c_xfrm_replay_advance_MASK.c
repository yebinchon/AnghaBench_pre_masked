
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_5__ {scalar_t__ seq; scalar_t__ bitmap; } ;
struct TYPE_4__ {scalar_t__ replay_window; } ;
struct xfrm_state {TYPE_3__* repl; TYPE_2__ replay; TYPE_1__ props; } ;
typedef int __be32 ;
struct TYPE_6__ {int (* notify ) (struct xfrm_state*,int ) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct xfrm_state*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct xfrm_state*) ;

__attribute__((used)) static void FUNC_4(struct xfrm_state *VAR_1, __be32 VAR_2)
{
 u32 VAR_3;
 u32 VAR_4 = FUNC_0(VAR_2);

 if (!VAR_1->props.replay_window)
  return;

 if (VAR_4 > VAR_1->replay.seq) {
  VAR_3 = VAR_4 - VAR_1->replay.seq;
  if (VAR_3 < VAR_1->props.replay_window)
   VAR_1->replay.bitmap = ((VAR_1->replay.bitmap) << VAR_3) | 1;
  else
   VAR_1->replay.bitmap = 1;
  VAR_1->replay.seq = VAR_4;
 } else {
  VAR_3 = VAR_1->replay.seq - VAR_4;
  VAR_1->replay.bitmap |= (1U << VAR_3);
 }

 if (FUNC_2(FUNC_3(VAR_1)))
  VAR_1->repl->notify(VAR_1, VAR_0);
}
