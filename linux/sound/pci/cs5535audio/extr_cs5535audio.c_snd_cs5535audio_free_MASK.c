
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cs5535audio {scalar_t__ irq; int pci; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,struct cs5535audio*) ;
 int FUNC_1 (struct cs5535audio*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct cs5535audio *VAR_1)
{
 FUNC_5(VAR_1->irq);
 FUNC_4(VAR_1->pci, VAR_0);

 if (VAR_1->irq >= 0)
  FUNC_0(VAR_1->irq, VAR_1);

 FUNC_3(VAR_1->pci);
 FUNC_2(VAR_1->pci);
 FUNC_1(VAR_1);
 return 0;
}
