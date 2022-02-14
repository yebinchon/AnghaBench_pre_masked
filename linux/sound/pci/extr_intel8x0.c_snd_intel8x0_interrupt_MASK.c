
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel8x0 {unsigned int int_sta_mask; unsigned int bdbars_count; int int_sta_reg; struct ichdev* ichd; int buggy_irq; } ;
struct ichdev {unsigned int int_sta_mask; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (struct intel8x0*,int ) ;
 int FUNC_2 (struct intel8x0*,int ,unsigned int) ;
 int FUNC_3 (struct intel8x0*,struct ichdev*) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_2, void *VAR_3)
{
 struct intel8x0 *VAR_4 = VAR_3;
 struct ichdev *VAR_5;
 unsigned int VAR_6;
 unsigned int VAR_7;

 VAR_6 = FUNC_1(VAR_4, VAR_4->int_sta_reg);
 if (VAR_6 == 0xffffffff)
  return VAR_1;

 if ((VAR_6 & VAR_4->int_sta_mask) == 0) {
  if (VAR_6) {

   FUNC_2(VAR_4, VAR_4->int_sta_reg, VAR_6);
   if (! VAR_4->buggy_irq)
    VAR_6 = 0;
  }
  return FUNC_0(VAR_6);
 }

 for (VAR_7 = 0; VAR_7 < VAR_4->bdbars_count; VAR_7++) {
  VAR_5 = &VAR_4->ichd[VAR_7];
  if (VAR_6 & VAR_5->int_sta_mask)
   FUNC_3(VAR_4, VAR_5);
 }


 FUNC_2(VAR_4, VAR_4->int_sta_reg, VAR_6 & VAR_4->int_sta_mask);

 return VAR_0;
}
