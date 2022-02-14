
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdspm {int control_register; scalar_t__ irq; int pci; scalar_t__ port; int iobase; int mixer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__,void*) ;
 int FUNC_1 (struct hdspm*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct hdspm * VAR_7)
{

 if (VAR_7->port) {


  VAR_7->control_register &=
      ~(VAR_5 | VAR_0 |
        VAR_1 | VAR_2 |
        VAR_3 | VAR_4);
  FUNC_1(VAR_7, VAR_6,
       VAR_7->control_register);
 }

 if (VAR_7->irq >= 0)
  FUNC_0(VAR_7->irq, (void *) VAR_7);

 FUNC_3(VAR_7->mixer);
 FUNC_2(VAR_7->iobase);

 if (VAR_7->port)
  FUNC_5(VAR_7->pci);

 FUNC_4(VAR_7->pci);
 return 0;
}
