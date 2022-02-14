
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int time; int tick; } ;
struct snd_seq_event {int flags; TYPE_1__ time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int *) ;
 int FUNC_1 (void*,int *) ;

__attribute__((used)) static int FUNC_2(struct snd_seq_event *VAR_2, void *VAR_3)
{
 if ((VAR_2->flags & VAR_0) == VAR_1)
  return FUNC_1(VAR_3, &VAR_2->time.tick);
 else
  return FUNC_0(VAR_3, &VAR_2->time.time);
}
