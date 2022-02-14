
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_rawmidi_substream {TYPE_2__* runtime; TYPE_1__* ops; int opened; } ;
struct TYPE_4__ {int event_work; } ;
struct TYPE_3__ {int (* trigger ) (struct snd_rawmidi_substream*,int) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct snd_rawmidi_substream*,int) ;

__attribute__((used)) static void FUNC_2(struct snd_rawmidi_substream *VAR_0, int VAR_1)
{
 if (!VAR_0->opened)
  return;
 VAR_0->ops->trigger(VAR_0, VAR_1);
 if (!VAR_1)
  FUNC_0(&VAR_0->runtime->event_work);
}
