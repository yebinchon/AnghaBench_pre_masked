
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ area; } ;
struct snd_ca0106 {scalar_t__ irq; int pci; int * res_port; TYPE_1__ buffer; } ;


 int FUNC_0 (struct snd_ca0106*) ;
 int FUNC_1 (scalar_t__,struct snd_ca0106*) ;
 int FUNC_2 (struct snd_ca0106*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(struct snd_ca0106 *VAR_0)
{
 if (VAR_0->res_port != ((void*)0)) {

  FUNC_0(VAR_0);
 }
 if (VAR_0->irq >= 0)
  FUNC_1(VAR_0->irq, VAR_0);


 if (VAR_0->buffer.area)
  FUNC_5(&VAR_0->buffer);



 FUNC_4(VAR_0->res_port);

 FUNC_3(VAR_0->pci);
 FUNC_2(VAR_0);
 return 0;
}
