
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct xfrm_state {int * repl; TYPE_1__ props; struct xfrm_replay_state_esn* replay_esn; } ;
struct xfrm_replay_state_esn {int replay_window; int bmp_len; } ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_0(struct xfrm_state *VAR_5)
{
 struct xfrm_replay_state_esn *VAR_6 = VAR_5->replay_esn;

 if (VAR_6) {
  if (VAR_6->replay_window >
      VAR_6->bmp_len * sizeof(__u32) * 8)
   return -VAR_0;

  if (VAR_5->props.flags & VAR_1) {
   if (VAR_6->replay_window == 0)
    return -VAR_0;
   VAR_5->repl = &VAR_3;
  } else {
   VAR_5->repl = &VAR_2;
  }
 } else {
  VAR_5->repl = &VAR_4;
 }

 return 0;
}
