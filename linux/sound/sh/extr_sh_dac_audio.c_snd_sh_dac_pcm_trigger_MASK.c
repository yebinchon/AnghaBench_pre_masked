
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sh_dac {int empty; int processed; int data_buffer; int buffer_end; int buffer_begin; } ;
struct snd_pcm_substream {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (struct snd_sh_dac*) ;
 int FUNC_1 (struct snd_sh_dac*) ;
 struct snd_sh_dac* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_1, int VAR_2)
{
 struct snd_sh_dac *VAR_3 = FUNC_2(VAR_1);

 switch (VAR_2) {
 case 129:
  FUNC_0(VAR_3);
  break;
 case 128:
  VAR_3->buffer_begin = VAR_3->buffer_end = VAR_3->data_buffer;
  VAR_3->processed = 0;
  VAR_3->empty = 1;
  FUNC_1(VAR_3);
  break;
 default:
   return -VAR_0;
 }

 return 0;
}
