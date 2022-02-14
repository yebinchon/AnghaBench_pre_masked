
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cs4281 {scalar_t__ irq; int pci; int ba1; int ba0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,struct cs4281*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct cs4281*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct cs4281*) ;
 int FUNC_7 (struct cs4281*,int ,int) ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct cs4281 *VAR_4)
{
 FUNC_6(VAR_4);

 if (VAR_4->irq >= 0)
  FUNC_8(VAR_4->irq);


 FUNC_7(VAR_4, VAR_1, 0x7fffffff);

 FUNC_7(VAR_4, VAR_0, 0);

 FUNC_7(VAR_4, VAR_2, 0);

 FUNC_5(VAR_4->pci, VAR_3);

 if (VAR_4->irq >= 0)
  FUNC_0(VAR_4->irq, VAR_4);
 FUNC_1(VAR_4->ba0);
 FUNC_1(VAR_4->ba1);
 FUNC_4(VAR_4->pci);
 FUNC_3(VAR_4->pci);

 FUNC_2(VAR_4);
 return 0;
}
