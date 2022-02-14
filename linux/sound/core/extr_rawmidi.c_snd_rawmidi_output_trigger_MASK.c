
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_substream {TYPE_1__* ops; int opened; } ;
struct TYPE_2__ {int (* trigger ) (struct snd_rawmidi_substream*,int) ;} ;


 int FUNC_0 (struct snd_rawmidi_substream*,int) ;

__attribute__((used)) static inline void FUNC_1(struct snd_rawmidi_substream *VAR_0, int VAR_1)
{
 if (!VAR_0->opened)
  return;
 VAR_0->ops->trigger(VAR_0, VAR_1);
}
