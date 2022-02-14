
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sb {scalar_t__ irq; scalar_t__ dma8; scalar_t__ dma16; int res_port; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,void*) ;
 int FUNC_3 (struct snd_sb*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct snd_sb *VAR_0)
{
 FUNC_4(VAR_0->res_port);
 if (VAR_0->irq >= 0)
  FUNC_2(VAR_0->irq, (void *) VAR_0);
 FUNC_3(VAR_0);
 return 0;
}
