
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ep93xx_i2s_info {int mclk; int sclk; int lrclk; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ep93xx_i2s_info*,unsigned int) ;
 int FUNC_3 (struct ep93xx_i2s_info*,unsigned int,int ) ;

__attribute__((used)) static void FUNC_4(struct ep93xx_i2s_info *VAR_6, int VAR_7)
{
 unsigned VAR_8;


 if (FUNC_0(VAR_0) &&
     VAR_7 == VAR_5)
  FUNC_3(VAR_6, VAR_4, 0);


 if (VAR_7 == VAR_5)
  VAR_8 = VAR_3;
 else
  VAR_8 = VAR_2;
 FUNC_3(VAR_6, VAR_8, 0);

 if ((FUNC_2(VAR_6, VAR_3) & 0x1) == 0 &&
     (FUNC_2(VAR_6, VAR_2) & 0x1) == 0) {

  FUNC_3(VAR_6, VAR_1, 0);


  FUNC_1(VAR_6->lrclk);
  FUNC_1(VAR_6->sclk);
  FUNC_1(VAR_6->mclk);
 }
}
