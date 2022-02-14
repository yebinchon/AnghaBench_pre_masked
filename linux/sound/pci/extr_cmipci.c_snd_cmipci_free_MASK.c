
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmipci {scalar_t__ irq; int pci; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (scalar_t__,struct cmipci*) ;
 int FUNC_1 (struct cmipci*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct cmipci*,int ) ;
 int FUNC_5 (struct cmipci*,int ,int ) ;
 int FUNC_6 (struct cmipci*) ;
 int FUNC_7 (struct cmipci*,int ,int ) ;
 int FUNC_8 (struct cmipci*,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct cmipci *VAR_9)
{
 if (VAR_9->irq >= 0) {
  FUNC_5(VAR_9, VAR_8, VAR_3);
  FUNC_5(VAR_9, VAR_7, VAR_2);
  FUNC_8(VAR_9, VAR_6, 0);
  FUNC_4(VAR_9, VAR_1);
  FUNC_4(VAR_9, VAR_0);
  FUNC_8(VAR_9, VAR_4, 0);
  FUNC_8(VAR_9, VAR_5, 0);


  FUNC_7(VAR_9, 0, 0);

  FUNC_0(VAR_9->irq, VAR_9);
 }

 FUNC_6(VAR_9);
 FUNC_3(VAR_9->pci);
 FUNC_2(VAR_9->pci);
 FUNC_1(VAR_9);
 return 0;
}
