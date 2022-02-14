
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel8x0m {unsigned int int_sta_mask; unsigned int bdbars_count; int reg_lock; int int_sta_reg; struct ichdev* ichd; } ;
struct ichdev {unsigned int int_sta_mask; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct intel8x0m*,int ) ;
 int FUNC_1 (struct intel8x0m*,int ,unsigned int) ;
 int FUNC_2 (struct intel8x0m*,struct ichdev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_2, void *VAR_3)
{
 struct intel8x0m *VAR_4 = VAR_3;
 struct ichdev *VAR_5;
 unsigned int VAR_6;
 unsigned int VAR_7;

 FUNC_3(&VAR_4->reg_lock);
 VAR_6 = FUNC_0(VAR_4, VAR_4->int_sta_reg);
 if (VAR_6 == 0xffffffff) {
  FUNC_4(&VAR_4->reg_lock);
  return VAR_1;
 }
 if ((VAR_6 & VAR_4->int_sta_mask) == 0) {
  if (VAR_6)
   FUNC_1(VAR_4, VAR_4->int_sta_reg, VAR_6);
  FUNC_4(&VAR_4->reg_lock);
  return VAR_1;
 }

 for (VAR_7 = 0; VAR_7 < VAR_4->bdbars_count; VAR_7++) {
  VAR_5 = &VAR_4->ichd[VAR_7];
  if (VAR_6 & VAR_5->int_sta_mask)
   FUNC_2(VAR_4, VAR_5);
 }


 FUNC_1(VAR_4, VAR_4->int_sta_reg, VAR_6 & VAR_4->int_sta_mask);
 FUNC_4(&VAR_4->reg_lock);

 return VAR_0;
}
