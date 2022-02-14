
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ addr; } ;
struct snd_harmony {scalar_t__ irq; int iobase; TYPE_1__ sdma; TYPE_1__ gdma; } ;


 int FUNC_0 (scalar_t__,struct snd_harmony*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct snd_harmony*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_4(struct snd_harmony *VAR_0)
{
        if (VAR_0->gdma.addr)
                FUNC_3(&VAR_0->gdma);
        if (VAR_0->sdma.addr)
                FUNC_3(&VAR_0->sdma);

 if (VAR_0->irq >= 0)
  FUNC_0(VAR_0->irq, VAR_0);

 FUNC_1(VAR_0->iobase);
 FUNC_2(VAR_0);
 return 0;
}
