
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw {scalar_t__ irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct hw*,int ) ;
 int FUNC_1 (struct hw*,int ,unsigned int) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct hw *VAR_2)
{
 unsigned int VAR_3;


 FUNC_1(VAR_2, VAR_1, 0x00);


 VAR_3 = FUNC_0(VAR_2, VAR_0);
 FUNC_1(VAR_2, VAR_0, (VAR_3 & (~(0x0F<<12))));


 if (VAR_2->irq >= 0)
  FUNC_2(VAR_2->irq);
 return 0;
}
