
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_line6_pcm {int dummy; } ;
struct line6_pcm_stream {int * buffer; int opened; } ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_line6_pcm*,struct line6_pcm_stream*) ;

__attribute__((used)) static void FUNC_3(struct snd_line6_pcm *VAR_0,
     struct line6_pcm_stream *VAR_1, int VAR_2)
{
 FUNC_0(VAR_2, &VAR_1->opened);
 if (!VAR_1->opened) {
  FUNC_2(VAR_0, VAR_1);
  FUNC_1(VAR_1->buffer);
  VAR_1->buffer = ((void*)0);
 }
}
