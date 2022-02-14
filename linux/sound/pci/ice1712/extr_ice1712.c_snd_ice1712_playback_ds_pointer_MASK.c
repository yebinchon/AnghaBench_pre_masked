
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct snd_pcm_substream {int number; TYPE_1__* runtime; } ;
struct snd_ice1712 {int* playback_con_virt_addr; scalar_t__* playback_con_active_buf; } ;
typedef size_t snd_pcm_uframes_t ;
struct TYPE_2__ {size_t buffer_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (TYPE_1__*,size_t) ;
 int FUNC_1 (struct snd_ice1712*,int,int ) ;
 struct snd_ice1712* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_3(struct snd_pcm_substream *VAR_3)
{
 struct snd_ice1712 *VAR_4 = FUNC_2(VAR_3);
 u8 VAR_5;
 size_t VAR_6;

 if (!(FUNC_1(VAR_4, VAR_3->number * 2, VAR_2) & 1))
  return 0;
 if (VAR_4->playback_con_active_buf[VAR_3->number])
  VAR_5 = VAR_1;
 else
  VAR_5 = VAR_0;
 VAR_6 = FUNC_1(VAR_4, VAR_3->number * 2, VAR_5) -
  VAR_4->playback_con_virt_addr[VAR_3->number];
 VAR_6 = FUNC_0(VAR_3->runtime, VAR_6);
 if (VAR_6 == VAR_3->runtime->buffer_size)
  VAR_6 = 0;
 return VAR_6;
}
