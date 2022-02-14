
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct idma_ctrl* private_data; } ;
struct idma_ctrl {int dummy; } ;


 int FUNC_0 (int ,struct idma_ctrl*) ;
 int VAR_0 ;
 int FUNC_1 (struct idma_ctrl*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_1)
{
 struct snd_pcm_runtime *VAR_2 = VAR_1->runtime;
 struct idma_ctrl *VAR_3 = VAR_2->private_data;

 FUNC_0(VAR_0, VAR_3);

 if (!VAR_3)
  FUNC_2("idma_close called with prtd == NULL\n");

 FUNC_1(VAR_3);

 return 0;
}
