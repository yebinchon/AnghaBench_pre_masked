
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_line6_pcm {int dummy; } ;
struct line6_pcm_stream {int lock; int running; scalar_t__ count; scalar_t__ unlink_urbs; scalar_t__ active_urbs; } ;


 int VAR_0 ;
 int FUNC_0 (int,int *) ;
 struct line6_pcm_stream* FUNC_1 (struct snd_line6_pcm*,int) ;
 int FUNC_2 (struct snd_line6_pcm*) ;
 int FUNC_3 (struct snd_line6_pcm*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int,int *) ;

__attribute__((used)) static int FUNC_7(struct snd_line6_pcm *VAR_1, int VAR_2,
         int VAR_3)
{
 unsigned long VAR_4;
 struct line6_pcm_stream *VAR_5 = FUNC_1(VAR_1, VAR_2);
 int VAR_6 = 0;

 FUNC_4(&VAR_5->lock, VAR_4);
 if (!FUNC_6(VAR_3, &VAR_5->running) &&
     !(VAR_5->active_urbs || VAR_5->unlink_urbs)) {
  VAR_5->count = 0;

  if (VAR_2 == VAR_0)
   VAR_6 = FUNC_3(VAR_1);
  else
   VAR_6 = FUNC_2(VAR_1);
 }

 if (VAR_6 < 0)
  FUNC_0(VAR_3, &VAR_5->running);
 FUNC_5(&VAR_5->lock, VAR_4);
 return VAR_6;
}
