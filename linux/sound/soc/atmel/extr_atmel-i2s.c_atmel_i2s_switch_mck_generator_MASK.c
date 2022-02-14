
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct atmel_i2s_dev {int regmap; TYPE_1__* gck_param; int gclk; } ;
struct TYPE_2__ {int mck; int imckdiv; int imckfs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (int) ;
 unsigned int VAR_4 ;
 unsigned int FUNC_1 (int ) ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ,int ,unsigned int,unsigned int) ;
 int FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct atmel_i2s_dev *VAR_9,
       bool VAR_10)
{
 unsigned int VAR_11, VAR_12;
 unsigned long VAR_13;
 int VAR_14;

 VAR_11 = 0;
 VAR_12 = (VAR_4 |
     VAR_5 |
     VAR_7);

 if (!VAR_10) {

  VAR_14 = FUNC_6(VAR_9->regmap, VAR_0,
       VAR_1);
  if (VAR_14)
   return VAR_14;


  VAR_14 = FUNC_5(VAR_9->regmap, VAR_3,
      VAR_12, VAR_11);
  if (VAR_14)
   return VAR_14;


  FUNC_2(VAR_9->gclk);

  return 0;
 }

 if (!VAR_9->gck_param)
  return -VAR_8;

 VAR_13 = VAR_9->gck_param->mck * (VAR_9->gck_param->imckdiv + 1);

 VAR_14 = FUNC_4(VAR_9->gclk, VAR_13);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_3(VAR_9->gclk);
 if (VAR_14)
  return VAR_14;


 VAR_11 |= FUNC_0(VAR_9->gck_param->imckdiv);
 VAR_11 |= FUNC_1(VAR_9->gck_param->imckfs);
 VAR_11 |= VAR_6;
 VAR_14 = FUNC_5(VAR_9->regmap, VAR_3, VAR_12, VAR_11);
 if (VAR_14)
  return VAR_14;


 return FUNC_6(VAR_9->regmap, VAR_0,
       VAR_2);
}
