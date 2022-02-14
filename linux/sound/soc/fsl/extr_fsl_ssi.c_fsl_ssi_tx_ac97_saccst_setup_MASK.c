
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct fsl_ssi {TYPE_1__* soc; struct regmap* regs; } ;
struct TYPE_2__ {int imx21regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct regmap*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct fsl_ssi *VAR_2)
{
 struct regmap *VAR_3 = VAR_2->regs;


 if (!VAR_2->soc->imx21regs) {

  FUNC_0(VAR_3, VAR_0, 0xff);

  FUNC_0(VAR_3, VAR_1, 0x300);
 }
}
