
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct xfrm_state {TYPE_1__* repl; struct xfrm_replay_state_esn* replay_esn; } ;
struct xfrm_replay_state_esn {int replay_window; int seq; int seq_hi; unsigned int* bmp; } ;
typedef int __be32 ;
struct TYPE_2__ {int (* notify ) (struct xfrm_state*,int ) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct xfrm_state*,int ) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct xfrm_state*) ;
 int FUNC_6 (struct xfrm_state*,int ) ;
 int FUNC_7 (struct xfrm_state*) ;

__attribute__((used)) static void FUNC_8(struct xfrm_state *VAR_1, __be32 VAR_2)
{
 unsigned int VAR_3, VAR_4, VAR_5;
 int VAR_6;
 u32 VAR_7, VAR_8, VAR_9, VAR_10;
 struct xfrm_replay_state_esn *VAR_11 = VAR_1->replay_esn;

 if (!VAR_11->replay_window)
  return;

 VAR_9 = FUNC_1(VAR_2);
 VAR_8 = (VAR_11->seq - 1) % VAR_11->replay_window;
 VAR_10 = FUNC_6(VAR_1, VAR_2);
 VAR_6 = VAR_10 - VAR_11->seq_hi;

 if ((!VAR_6 && VAR_9 > VAR_11->seq) || VAR_6 > 0) {
  if (FUNC_0(!VAR_6))
   VAR_7 = VAR_9 - VAR_11->seq;
  else
   VAR_7 = ~VAR_11->seq + VAR_9 + 1;

  if (VAR_7 < VAR_11->replay_window) {
   for (VAR_5 = 1; VAR_5 < VAR_7; VAR_5++) {
    VAR_3 = (VAR_8 + VAR_5) % VAR_11->replay_window;
    VAR_4 = VAR_3 >> 5;
    VAR_3 = VAR_3 & 0x1F;
    VAR_11->bmp[VAR_4] &= ~(1U << VAR_3);
   }
  } else {
   VAR_4 = (VAR_11->replay_window - 1) >> 5;
   for (VAR_5 = 0; VAR_5 <= VAR_4; VAR_5++)
    VAR_11->bmp[VAR_5] = 0;
  }

  VAR_3 = (VAR_8 + VAR_7) % VAR_11->replay_window;
  VAR_11->seq = VAR_9;

  if (FUNC_3(VAR_6 > 0))
   VAR_11->seq_hi++;
 } else {
  VAR_7 = VAR_11->seq - VAR_9;

  if (VAR_8 >= VAR_7)
   VAR_3 = (VAR_8 - VAR_7) % VAR_11->replay_window;
  else
   VAR_3 = VAR_11->replay_window - (VAR_7 - VAR_8);
 }

 FUNC_5(VAR_1);

 VAR_4 = VAR_3 >> 5;
 VAR_3 = VAR_3 & 0x1F;
 VAR_11->bmp[VAR_4] |= (1U << VAR_3);

 if (FUNC_4(FUNC_7(VAR_1)))
  VAR_1->repl->notify(VAR_1, VAR_0);
}
