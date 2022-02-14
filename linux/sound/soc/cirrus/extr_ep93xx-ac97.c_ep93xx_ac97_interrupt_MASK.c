
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ep93xx_ac97_info {int done; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 unsigned int FUNC_1 (struct ep93xx_ac97_info*,int ) ;
 int FUNC_2 (struct ep93xx_ac97_info*,int ,unsigned int) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_3, void *VAR_4)
{
 struct ep93xx_ac97_info *VAR_5 = VAR_4;
 unsigned VAR_6, VAR_7;






 VAR_6 = FUNC_1(VAR_5, VAR_0);
 VAR_7 = FUNC_1(VAR_5, VAR_1);
 VAR_7 &= ~VAR_6;
 FUNC_2(VAR_5, VAR_1, VAR_7);

 FUNC_0(&VAR_5->done);
 return VAR_2;
}
