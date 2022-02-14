
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_micfil {int regmap; int mclk; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,int ,...) ;
 struct fsl_micfil* FUNC_2 (struct device*) ;
 int FUNC_3 (struct fsl_micfil*,unsigned int) ;
 int FUNC_4 (struct fsl_micfil*,unsigned int) ;
 int FUNC_5 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_5, unsigned int VAR_6)
{
 struct fsl_micfil *VAR_7 = FUNC_2(VAR_5);
 int VAR_8;
 int VAR_9 = 0;

 VAR_9 = FUNC_3(VAR_7, VAR_6);
 if (VAR_9 < 0)
  FUNC_1(VAR_5, "failed to set mclk[%lu] to rate %u\n",
   FUNC_0(VAR_7->mclk), VAR_6);


 VAR_9 |= FUNC_5(VAR_7->regmap, VAR_4,
     VAR_1,
     VAR_3);
 if (VAR_9)
  FUNC_1(VAR_5, "failed to set CICOSR in reg 0x%X\n",
   VAR_4);


 VAR_8 = FUNC_4(VAR_7, VAR_6);
 if (VAR_8 < 0)
  VAR_9 = -VAR_0;

 VAR_9 |= FUNC_5(VAR_7->regmap, VAR_4,
     VAR_2, VAR_8);
 if (VAR_9)
  FUNC_1(VAR_5, "failed to set CLKDIV in reg 0x%X\n",
   VAR_4);

 return VAR_9;
}
