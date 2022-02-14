
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_line6_pcm {int state_mutex; } ;
struct line6_pcm_stream {int dummy; } ;


 struct line6_pcm_stream* FUNC_0 (struct snd_line6_pcm*,int) ;
 int FUNC_1 (struct snd_line6_pcm*,struct line6_pcm_stream*,int) ;
 int FUNC_2 (struct snd_line6_pcm*,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct snd_line6_pcm *VAR_0, int VAR_1)
{
 struct line6_pcm_stream *VAR_2;
 int VAR_3;

 FUNC_3(&VAR_0->state_mutex);
 for (VAR_3 = 0; VAR_3 < 2; VAR_3++)
  FUNC_2(VAR_0, VAR_3, VAR_1);
 for (VAR_3 = 0; VAR_3 < 2; VAR_3++) {
  VAR_2 = FUNC_0(VAR_0, VAR_3);
  FUNC_1(VAR_0, VAR_2, VAR_1);
 }
 FUNC_4(&VAR_0->state_mutex);
}
