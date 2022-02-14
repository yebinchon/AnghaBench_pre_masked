
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct regmap {int dummy; } ;
struct fsl_ssi {int dbg_stats; TYPE_1__* soc; struct regmap* regs; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int sisr_write_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct regmap*,int ,int*) ;
 int FUNC_2 (struct regmap*,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 struct fsl_ssi *VAR_4 = VAR_3;
 struct regmap *VAR_5 = VAR_4->regs;
 u32 VAR_6, VAR_7;

 FUNC_1(VAR_5, VAR_1, &VAR_6);

 VAR_7 = VAR_6 & VAR_4->soc->sisr_write_mask;

 if (VAR_7)
  FUNC_2(VAR_5, VAR_1, VAR_7);

 FUNC_0(&VAR_4->dbg_stats, VAR_6);

 return VAR_0;
}
