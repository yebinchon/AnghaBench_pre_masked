
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ep93xx_i2s_info {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ep93xx_i2s_info*,int ) ;
 int FUNC_1 (struct ep93xx_i2s_info*,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_6, void *VAR_7)
{
 struct ep93xx_i2s_info *VAR_8 = VAR_7;


 FUNC_1(VAR_8, VAR_4, 0);






 while (!(FUNC_0(VAR_8, VAR_0) &
   VAR_1)) {
  FUNC_1(VAR_8, VAR_2, 0);
  FUNC_1(VAR_8, VAR_3, 0);
 }

 FUNC_1(VAR_8, VAR_4, 1);

 return VAR_5;
}
