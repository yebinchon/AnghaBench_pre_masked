
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ad1889 {scalar_t__ irq; int pci; int iobase; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct snd_ad1889*,int) ;
 int FUNC_1 (struct snd_ad1889*) ;
 int FUNC_2 (struct snd_ad1889*,int ) ;
 int FUNC_3 (struct snd_ad1889*,int ,int) ;
 int FUNC_4 (scalar_t__,struct snd_ad1889*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct snd_ad1889*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int
FUNC_11(struct snd_ad1889 *VAR_5)
{
 if (VAR_5->irq < 0)
  goto skip_hw;

 FUNC_9(&VAR_5->lock);

 FUNC_1(VAR_5);


 FUNC_0(VAR_5, VAR_1 | VAR_0);


 FUNC_3(VAR_5, VAR_2, VAR_4 | VAR_3);
 FUNC_2(VAR_5, VAR_2);

 FUNC_10(&VAR_5->lock);

 if (VAR_5->irq >= 0)
  FUNC_4(VAR_5->irq, VAR_5);

skip_hw:
 FUNC_5(VAR_5->iobase);
 FUNC_8(VAR_5->pci);
 FUNC_7(VAR_5->pci);
 FUNC_6(VAR_5);
 return 0;
}
