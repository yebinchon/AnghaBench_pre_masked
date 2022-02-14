
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_line6_pcm {scalar_t__ prev_fsize; int * prev_fbuf; } ;
struct line6_pcm_stream {int lock; int running; } ;


 int VAR_0 ;
 int FUNC_0 (int,int *) ;
 struct line6_pcm_stream* FUNC_1 (struct snd_line6_pcm*,int) ;
 int FUNC_2 (struct snd_line6_pcm*,struct line6_pcm_stream*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct snd_line6_pcm *VAR_1, int VAR_2,
     int VAR_3)
{
 unsigned long VAR_4;
 struct line6_pcm_stream *VAR_5 = FUNC_1(VAR_1, VAR_2);

 FUNC_3(&VAR_5->lock, VAR_4);
 FUNC_0(VAR_3, &VAR_5->running);
 if (!VAR_5->running) {
  FUNC_4(&VAR_5->lock, VAR_4);
  FUNC_2(VAR_1, VAR_5);
  FUNC_3(&VAR_5->lock, VAR_4);
  if (VAR_2 == VAR_0) {
   VAR_1->prev_fbuf = ((void*)0);
   VAR_1->prev_fsize = 0;
  }
 }
 FUNC_4(&VAR_5->lock, VAR_4);
}
