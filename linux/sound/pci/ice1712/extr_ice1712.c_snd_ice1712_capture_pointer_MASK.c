
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct snd_ice1712 {size_t capture_con_virt_addr; } ;
typedef size_t snd_pcm_uframes_t ;
struct TYPE_2__ {size_t buffer_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_ice1712*,int ) ;
 size_t FUNC_1 (TYPE_1__*,size_t) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (struct snd_ice1712*,int ) ;
 struct snd_ice1712* FUNC_4 (struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_5(struct snd_pcm_substream *VAR_2)
{
 struct snd_ice1712 *VAR_3 = FUNC_4(VAR_2);
 size_t VAR_4;

 if (!(FUNC_3(VAR_3, VAR_1) & 1))
  return 0;
 VAR_4 = FUNC_2(FUNC_0(VAR_3, VAR_0)) - VAR_3->capture_con_virt_addr;
 VAR_4 = FUNC_1(VAR_2->runtime, VAR_4);
 if (VAR_4 == VAR_2->runtime->buffer_size)
  VAR_4 = 0;
 return VAR_4;
}
