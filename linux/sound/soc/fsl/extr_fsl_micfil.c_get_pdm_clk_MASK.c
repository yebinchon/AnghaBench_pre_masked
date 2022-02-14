
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct fsl_micfil {TYPE_1__* pdev; int regmap; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,int ,int*) ;

__attribute__((used)) static inline int FUNC_2(struct fsl_micfil *VAR_4,
         unsigned int VAR_5)
{
 u32 VAR_6;
 int VAR_7, VAR_8;
 int VAR_9;

 FUNC_1(VAR_4->regmap, VAR_3, &VAR_6);
 VAR_8 = 16 - ((VAR_6 & VAR_0)
      >> VAR_1);

 FUNC_1(VAR_4->regmap, VAR_3, &VAR_6);
 VAR_7 = VAR_6 & VAR_2;

 switch (VAR_7) {
 case 133:
  VAR_9 = VAR_5 * 8 * VAR_8 / 2;
  break;
 case 131:
 case 130:
  VAR_9 = VAR_5 * 4 * VAR_8 * 1;
  break;
 case 132:
 case 129:
  VAR_9 = VAR_5 * 2 * VAR_8 * 2;
  break;
 case 128:
  VAR_9 = VAR_5 * VAR_8 * 4;
  break;
 default:
  FUNC_0(&VAR_4->pdev->dev,
   "Please make sure you select a valid quality.\n");
  VAR_9 = -1;
  break;
 }

 return VAR_9;
}
