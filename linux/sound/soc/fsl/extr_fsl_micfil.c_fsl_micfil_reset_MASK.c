
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_micfil {int regmap; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,int) ;
 struct fsl_micfil* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_4)
{
 struct fsl_micfil *VAR_5 = FUNC_1(VAR_4);
 int VAR_6;

 VAR_6 = FUNC_2(VAR_5->regmap,
     VAR_3,
     VAR_0,
     0);
 if (VAR_6) {
  FUNC_0(VAR_4, "failed to clear MDIS bit %d\n", VAR_6);
  return VAR_6;
 }

 VAR_6 = FUNC_2(VAR_5->regmap,
     VAR_3,
     VAR_2,
     VAR_1);
 if (VAR_6) {
  FUNC_0(VAR_4, "failed to reset MICFIL: %d\n", VAR_6);
  return VAR_6;
 }

 return 0;
}
