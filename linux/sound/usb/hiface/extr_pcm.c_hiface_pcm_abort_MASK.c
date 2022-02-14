
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcm_runtime {int panic; int stream_mutex; } ;
struct hiface_chip {struct pcm_runtime* pcm; } ;


 int FUNC_0 (struct pcm_runtime*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct hiface_chip *VAR_0)
{
 struct pcm_runtime *VAR_1 = VAR_0->pcm;

 if (VAR_1) {
  VAR_1->panic = 1;

  FUNC_1(&VAR_1->stream_mutex);
  FUNC_0(VAR_1);
  FUNC_2(&VAR_1->stream_mutex);
 }
}
