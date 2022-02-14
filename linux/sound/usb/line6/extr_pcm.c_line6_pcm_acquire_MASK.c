
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_line6_pcm {int state_mutex; } ;
struct line6_pcm_stream {int running; } ;


 struct line6_pcm_stream* FUNC_0 (struct snd_line6_pcm*,int) ;
 int FUNC_1 (struct snd_line6_pcm*,struct line6_pcm_stream*,int,int) ;
 int FUNC_2 (struct snd_line6_pcm*,int) ;
 int FUNC_3 (struct snd_line6_pcm*,int,int) ;
 int FUNC_4 (struct snd_line6_pcm*,struct line6_pcm_stream*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct snd_line6_pcm *VAR_0, int VAR_1, bool VAR_2)
{
 struct line6_pcm_stream *VAR_3;
 int VAR_4 = 0, VAR_5;


 FUNC_5(&VAR_0->state_mutex);
 for (VAR_5 = 0; VAR_5 < 2; VAR_5++) {
  VAR_3 = FUNC_0(VAR_0, VAR_5);
  VAR_4 = FUNC_1(VAR_0, VAR_3, VAR_5, VAR_1);
  if (VAR_4 < 0)
   goto error;
  if (!VAR_3->running)
   FUNC_4(VAR_0, VAR_3);
 }
 if (VAR_2) {
  for (VAR_5 = 0; VAR_5 < 2; VAR_5++) {
   VAR_4 = FUNC_3(VAR_0, VAR_5, VAR_1);
   if (VAR_4 < 0)
    goto error;
  }
 }
 error:
 FUNC_6(&VAR_0->state_mutex);
 if (VAR_4 < 0)
  FUNC_2(VAR_0, VAR_1);
 return VAR_4;
}
