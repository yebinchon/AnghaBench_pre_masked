
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sb {int open_lock; int mode; int open; int * capture_substream; int * playback_substream; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct snd_sb* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_4)
{
 unsigned long VAR_5;
 struct snd_sb *VAR_6 = FUNC_0(VAR_4);

 VAR_6->playback_substream = ((void*)0);
 VAR_6->capture_substream = ((void*)0);
 FUNC_1(&VAR_6->open_lock, VAR_5);
 VAR_6->open &= ~VAR_2;
 if (VAR_4->stream == VAR_3)
  VAR_6->mode &= ~VAR_1;
 else
  VAR_6->mode &= ~VAR_0;
 FUNC_2(&VAR_6->open_lock, VAR_5);
 return 0;
}
