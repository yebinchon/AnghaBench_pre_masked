
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ep93xx_i2s_info {int lrclk; int sclk; int mclk; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ep93xx_i2s_info*,unsigned int) ;
 int FUNC_3 (struct ep93xx_i2s_info*,unsigned int,int) ;

__attribute__((used)) static void FUNC_4(struct ep93xx_i2s_info *VAR_8, int VAR_9)
{
 unsigned VAR_10;

 if ((FUNC_2(VAR_8, VAR_3) & 0x1) == 0 &&
     (FUNC_2(VAR_8, VAR_2) & 0x1) == 0) {

  FUNC_1(VAR_8->mclk);
  FUNC_1(VAR_8->sclk);
  FUNC_1(VAR_8->lrclk);


  FUNC_3(VAR_8, VAR_1, 1);
 }


 if (VAR_9 == VAR_7)
  VAR_10 = VAR_3;
 else
  VAR_10 = VAR_2;
 FUNC_3(VAR_8, VAR_10, 1);


 if (FUNC_0(VAR_0) &&
     VAR_9 == VAR_7)
  FUNC_3(VAR_8, VAR_4,
         VAR_5 |
         VAR_6);
}
