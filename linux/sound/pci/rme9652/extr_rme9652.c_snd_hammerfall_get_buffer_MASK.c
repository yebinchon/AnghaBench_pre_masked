
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; int type; } ;
struct snd_dma_buffer {TYPE_1__ dev; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,size_t,struct snd_dma_buffer*) ;
 int FUNC_1 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_2(struct pci_dev *VAR_2, struct snd_dma_buffer *VAR_3, size_t VAR_4)
{
 VAR_3->dev.type = VAR_1;
 VAR_3->dev.dev = FUNC_1(VAR_2);
 if (FUNC_0(VAR_1, FUNC_1(VAR_2),
    VAR_4, VAR_3) < 0)
  return -VAR_0;
 return 0;
}
