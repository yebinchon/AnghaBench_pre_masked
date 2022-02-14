
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_usb_caiaqdev {int spinlock; int ** sub_capture; int ** sub_playback; } ;
struct snd_pcm_substream {scalar_t__ stream; size_t number; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_2(struct snd_usb_caiaqdev *VAR_1,
       struct snd_pcm_substream *VAR_2)
{
 unsigned long VAR_3;
 FUNC_0(&VAR_1->spinlock, VAR_3);

 if (VAR_2->stream == VAR_0)
  VAR_1->sub_playback[VAR_2->number] = ((void*)0);
 else
  VAR_1->sub_capture[VAR_2->number] = ((void*)0);

 FUNC_1(&VAR_1->spinlock, VAR_3);
}
