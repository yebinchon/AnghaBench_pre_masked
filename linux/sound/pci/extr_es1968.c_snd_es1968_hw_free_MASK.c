
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct esschan* private_data; } ;
struct esschan {int * memory; } ;
struct es1968 {int dummy; } ;


 int FUNC_0 (struct es1968*,int *) ;
 struct es1968* FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_0)
{
 struct es1968 *VAR_1 = FUNC_1(VAR_0);
 struct snd_pcm_runtime *VAR_2 = VAR_0->runtime;
 struct esschan *VAR_3;

 if (VAR_2->private_data == ((void*)0))
  return 0;
 VAR_3 = VAR_2->private_data;
 if (VAR_3->memory) {
  FUNC_0(VAR_1, VAR_3->memory);
  VAR_3->memory = ((void*)0);
 }
 return 0;
}
