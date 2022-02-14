
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct snd_pcm_substream {int dummy; } ;
struct snd_m3 {int dummy; } ;
struct TYPE_2__ {scalar_t__ data; } ;
struct m3_dma {scalar_t__ buffer_addr; TYPE_1__ inst; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct snd_m3*,int ,scalar_t__) ;

__attribute__((used)) static unsigned int
FUNC_1(struct snd_m3 *VAR_3, struct m3_dma *VAR_4, struct snd_pcm_substream *VAR_5)
{
 u16 VAR_6 = 0, VAR_7 = 0;
 int VAR_8 = 10;
 u32 VAR_9;




 while (VAR_8--) {
  VAR_6 = FUNC_0(VAR_3, VAR_2,
           VAR_4->inst.data + VAR_0);

  VAR_7 = FUNC_0(VAR_3, VAR_2,
          VAR_4->inst.data + VAR_1);

  if (VAR_6 == FUNC_0(VAR_3, VAR_2,
        VAR_4->inst.data + VAR_0))
   break;
 }
 VAR_9 = VAR_7 | ((u32)VAR_6<<16);
 return (unsigned int)(VAR_9 - VAR_4->buffer_addr);
}
