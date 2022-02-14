
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fsl_micfil {int mclk; int regmap; } ;


 int VAR_0 ;
 long FUNC_0 (int ) ;
 int FUNC_1 (struct fsl_micfil*,unsigned int) ;
 int FUNC_2 (int ,int ,int *) ;

__attribute__((used)) static inline int FUNC_3(struct fsl_micfil *VAR_1,
         unsigned int VAR_2)
{
 u32 VAR_3;
 long VAR_4;
 int VAR_5;

 FUNC_2(VAR_1->regmap, VAR_0, &VAR_3);

 VAR_4 = FUNC_0(VAR_1->mclk);

 VAR_5 = VAR_4 / (FUNC_1(VAR_1, VAR_2) * 2);

 return VAR_5;
}
