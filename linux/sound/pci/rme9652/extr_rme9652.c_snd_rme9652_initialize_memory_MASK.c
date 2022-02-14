
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned long area; unsigned long addr; } ;
struct snd_rme9652 {unsigned long capture_buffer; unsigned long playback_buffer; TYPE_2__ playback_dma_buf; TYPE_2__ capture_dma_buf; int card_name; TYPE_1__* card; int pci; } ;
struct TYPE_4__ {int dev; } ;


 unsigned long FUNC_0 (unsigned long,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct snd_rme9652*,int ,unsigned long) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (int ,TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_5(struct snd_rme9652 *VAR_4)
{
 unsigned long VAR_5, VAR_6;

 if (FUNC_4(VAR_4->pci, &VAR_4->capture_dma_buf, VAR_1) < 0 ||
     FUNC_4(VAR_4->pci, &VAR_4->playback_dma_buf, VAR_1) < 0) {
  if (VAR_4->capture_dma_buf.area)
   FUNC_3(&VAR_4->capture_dma_buf);
  FUNC_1(VAR_4->card->dev,
   "%s: no buffers available\n", VAR_4->card_name);
  return -VAR_0;
 }



 VAR_6 = FUNC_0(VAR_4->capture_dma_buf.addr, 0x10000ul);
 VAR_5 = FUNC_0(VAR_4->playback_dma_buf.addr, 0x10000ul);



 FUNC_2(VAR_4, VAR_3, VAR_6);
 FUNC_2(VAR_4, VAR_2, VAR_5);

 VAR_4->capture_buffer = VAR_4->capture_dma_buf.area + (VAR_6 - VAR_4->capture_dma_buf.addr);
 VAR_4->playback_buffer = VAR_4->playback_dma_buf.area + (VAR_5 - VAR_4->playback_dma_buf.addr);

 return 0;
}
