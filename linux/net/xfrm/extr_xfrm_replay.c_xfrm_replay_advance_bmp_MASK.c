
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct xfrm_state {TYPE_1__* repl; struct xfrm_replay_state_esn* replay_esn; } ;
struct xfrm_replay_state_esn {int replay_window; int seq; unsigned int* bmp; } ;
typedef int __be32 ;
struct TYPE_2__ {int (* notify ) (struct xfrm_state*,int ) ;} ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (struct xfrm_state*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct xfrm_state*) ;

__attribute__((used)) static void FUNC_4(struct xfrm_state *VAR_1, __be32 VAR_2)
{
 unsigned int VAR_3, VAR_4, VAR_5;
 u32 VAR_6;
 struct xfrm_replay_state_esn *VAR_7 = VAR_1->replay_esn;
 u32 VAR_8 = FUNC_0(VAR_2);
 u32 VAR_9;

 if (!VAR_7->replay_window)
  return;

 VAR_9 = (VAR_7->seq - 1) % VAR_7->replay_window;

 if (VAR_8 > VAR_7->seq) {
  VAR_6 = VAR_8 - VAR_7->seq;

  if (VAR_6 < VAR_7->replay_window) {
   for (VAR_5 = 1; VAR_5 < VAR_6; VAR_5++) {
    VAR_3 = (VAR_9 + VAR_5) % VAR_7->replay_window;
    VAR_4 = VAR_3 >> 5;
    VAR_3 = VAR_3 & 0x1F;
    VAR_7->bmp[VAR_4] &= ~(1U << VAR_3);
   }
  } else {
   VAR_4 = (VAR_7->replay_window - 1) >> 5;
   for (VAR_5 = 0; VAR_5 <= VAR_4; VAR_5++)
    VAR_7->bmp[VAR_5] = 0;
  }

  VAR_3 = (VAR_9 + VAR_6) % VAR_7->replay_window;
  VAR_7->seq = VAR_8;
 } else {
  VAR_6 = VAR_7->seq - VAR_8;

  if (VAR_9 >= VAR_6)
   VAR_3 = (VAR_9 - VAR_6) % VAR_7->replay_window;
  else
   VAR_3 = VAR_7->replay_window - (VAR_6 - VAR_9);
 }

 VAR_4 = VAR_3 >> 5;
 VAR_3 = VAR_3 & 0x1F;
 VAR_7->bmp[VAR_4] |= (1U << VAR_3);

 if (FUNC_2(FUNC_3(VAR_1)))
  VAR_1->repl->notify(VAR_1, VAR_0);
}
