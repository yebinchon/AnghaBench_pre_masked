
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_sg_buf {TYPE_1__* table; } ;
struct snd_dma_buffer {struct snd_sg_buf* private_data; } ;
struct TYPE_2__ {unsigned int addr; } ;


 unsigned int VAR_0 ;

unsigned int FUNC_0(struct snd_dma_buffer *VAR_1,
          unsigned int VAR_2, unsigned int VAR_3)
{
 struct snd_sg_buf *VAR_4 = VAR_1->private_data;
 unsigned int VAR_5, VAR_6, VAR_7;

 VAR_5 = VAR_2 >> VAR_0;
 VAR_6 = (VAR_2 + VAR_3 - 1) >> VAR_0;

 VAR_7 = VAR_4->table[VAR_5].addr >> VAR_0;
 for (;;) {
  VAR_5++;
  if (VAR_5 > VAR_6)
   break;
  VAR_7++;
  if ((VAR_4->table[VAR_5].addr >> VAR_0) != VAR_7)
   return (VAR_5 << VAR_0) - VAR_2;
 }

 return VAR_3;
}
