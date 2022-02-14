
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ tv_sec; scalar_t__ tv_nsec; } ;
struct TYPE_4__ {scalar_t__ tick; TYPE_1__ time; } ;
struct snd_seq_event {int flags; TYPE_2__ time; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_0(struct snd_seq_event *VAR_2,
     struct snd_seq_event *VAR_3)
{
 if ((VAR_2->flags & VAR_0) == VAR_1) {

  if (VAR_2->time.tick > VAR_3->time.tick)
   return 1;
  else if (VAR_2->time.tick == VAR_3->time.tick)
   return 0;
  else
   return -1;
 } else {

  if (VAR_2->time.time.tv_sec > VAR_3->time.time.tv_sec)
   return 1;
  else if (VAR_2->time.time.tv_sec == VAR_3->time.time.tv_sec) {
   if (VAR_2->time.time.tv_nsec > VAR_3->time.time.tv_nsec)
    return 1;
   else if (VAR_2->time.time.tv_nsec == VAR_3->time.time.tv_nsec)
    return 0;
   else
    return -1;
  } else
   return -1;
 }
}
