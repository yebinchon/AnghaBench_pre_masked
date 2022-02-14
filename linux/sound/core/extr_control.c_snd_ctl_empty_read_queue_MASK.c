
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_kctl_event {int list; } ;
struct TYPE_2__ {int next; } ;
struct snd_ctl_file {int read_lock; TYPE_1__ events; } ;


 int FUNC_0 (struct snd_kctl_event*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 struct snd_kctl_event* FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct snd_ctl_file * VAR_0)
{
 unsigned long VAR_1;
 struct snd_kctl_event *VAR_2;

 FUNC_4(&VAR_0->read_lock, VAR_1);
 while (!FUNC_2(&VAR_0->events)) {
  VAR_2 = FUNC_3(VAR_0->events.next);
  FUNC_1(&VAR_2->list);
  FUNC_0(VAR_2);
 }
 FUNC_5(&VAR_0->read_lock, VAR_1);
}
