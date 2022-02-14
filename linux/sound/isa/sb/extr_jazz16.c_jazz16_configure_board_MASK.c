
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sb {size_t dma8; size_t dma16; size_t irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 int FUNC_0 (struct snd_sb*,unsigned char) ;

__attribute__((used)) static int FUNC_1(struct snd_sb *VAR_3, int VAR_4)
{
 static unsigned char VAR_5[] = { 0, 0, 2, 3, 0, 1, 0, 4,
       0, 2, 5, 0, 0, 0, 0, 6 };
 static unsigned char VAR_6[] = { 0, 1, 0, 2, 0, 3, 0, 4 };

 if (VAR_6[VAR_3->dma8] == 0 ||
     VAR_6[VAR_3->dma16] == 0 ||
     VAR_5[VAR_3->irq] == 0)
  return -VAR_1;

 if (!FUNC_0(VAR_3, VAR_2))
  return -VAR_0;

 if (!FUNC_0(VAR_3,
          VAR_6[VAR_3->dma8] |
          (VAR_6[VAR_3->dma16] << 4)))
  return -VAR_0;

 if (!FUNC_0(VAR_3,
          VAR_5[VAR_3->irq] |
          (VAR_5[VAR_4] << 4)))
  return -VAR_0;

 return 0;
}
