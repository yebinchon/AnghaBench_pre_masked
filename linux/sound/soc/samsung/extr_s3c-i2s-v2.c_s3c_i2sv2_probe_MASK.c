
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct device* dev; } ;
struct s3c_i2sv2_info {scalar_t__ regs; int iis_pclk; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*) ;
 unsigned int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct s3c_i2sv2_info*,int ) ;
 int FUNC_6 (struct s3c_i2sv2_info*,int ) ;
 int FUNC_7 (struct snd_soc_dai*,struct s3c_i2sv2_info*) ;
 int FUNC_8 (unsigned int,scalar_t__) ;

int FUNC_9(struct snd_soc_dai *VAR_3,
      struct s3c_i2sv2_info *VAR_4,
      unsigned long VAR_5)
{
 struct device *VAR_6 = VAR_3->dev;
 unsigned int VAR_7;

 VAR_4->dev = VAR_6;


 FUNC_7(VAR_3, VAR_4);

 VAR_4->iis_pclk = FUNC_1(VAR_6, "iis");
 if (FUNC_0(VAR_4->iis_pclk)) {
  FUNC_3(VAR_6, "failed to get iis_clock\n");
  return -VAR_0;
 }

 FUNC_2(VAR_4->iis_pclk);



 VAR_7 = FUNC_4(VAR_4->regs + VAR_1);
 VAR_7 |= VAR_2;
 FUNC_8(VAR_7, VAR_4->regs + VAR_1);
 FUNC_6(VAR_4, 0);
 FUNC_5(VAR_4, 0);

 return 0;
}
