
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
struct snd_dma_buffer {TYPE_1__ dev; int bytes; int area; } ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct snd_dma_buffer*) ;
 int FUNC_3 (struct snd_dma_buffer*) ;
 int FUNC_4 (struct snd_dma_buffer*) ;

void FUNC_5(struct snd_dma_buffer *VAR_0)
{
 switch (VAR_0->dev.type) {
 case 133:
  FUNC_0(VAR_0->area, VAR_0->bytes);
  break;
 default:
  FUNC_1("snd-malloc: invalid device type %d\n", VAR_0->dev.type);
 }
}
