
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct fsl_audmix_state {int tdms; int clk; int msg; } ;
struct fsl_audmix {int tdms; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int) ;
 unsigned int VAR_1 ;
 int FUNC_1 (int ,char*,int ) ;
 struct fsl_audmix* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_2,
      unsigned int *VAR_3, unsigned int *VAR_4,
      const struct fsl_audmix_state VAR_5)
{
 struct fsl_audmix *VAR_6 = FUNC_2(VAR_2);

 if ((VAR_6->tdms & VAR_5.tdms) != VAR_5.tdms) {
  FUNC_1(VAR_2->dev, "%s", VAR_5.msg);
  return -VAR_0;
 }

 switch (VAR_5.clk) {
 case 1:
 case 2:

  (*VAR_3) |= VAR_1;
  (*VAR_4) |= FUNC_0(VAR_5.clk - 1);
  break;
 default:
  break;
 }

 return 0;
}
