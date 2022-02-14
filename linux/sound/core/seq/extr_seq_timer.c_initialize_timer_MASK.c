
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
struct snd_timer {TYPE_1__ hw; } ;
struct snd_seq_timer {unsigned long preferred_resolution; int ticks; int initialized; TYPE_2__* timeri; } ;
struct TYPE_4__ {struct snd_timer* timer; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 unsigned long FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_1(struct snd_seq_timer *VAR_5)
{
 struct snd_timer *VAR_6;
 unsigned long VAR_7;

 VAR_6 = VAR_5->timeri->timer;
 if (!VAR_6)
  return -VAR_1;

 VAR_7 = VAR_5->preferred_resolution;
 if (!VAR_7)
  VAR_7 = VAR_0;
 else if (VAR_7 < VAR_3)
  VAR_7 = VAR_3;
 else if (VAR_7 > VAR_2)
  VAR_7 = VAR_2;

 VAR_5->ticks = 1;
 if (!(VAR_6->hw.flags & VAR_4)) {
  unsigned long VAR_8 = FUNC_0(VAR_5->timeri);
  if (VAR_8) {
   VAR_5->ticks = (unsigned int)(1000000000uL / (VAR_8 * VAR_7));
   if (! VAR_5->ticks)
    VAR_5->ticks = 1;
  }
 }
 VAR_5->initialized = 1;
 return 0;
}
