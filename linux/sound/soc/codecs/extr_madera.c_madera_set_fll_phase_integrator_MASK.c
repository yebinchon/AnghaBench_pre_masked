
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct madera_fll_cfg {scalar_t__ theta; } ;
struct madera_fll {scalar_t__ base; TYPE_1__* madera; } ;
struct TYPE_2__ {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,scalar_t__,int,unsigned int,int*) ;

__attribute__((used)) static bool FUNC_1(struct madera_fll *VAR_5,
         struct madera_fll_cfg *VAR_6,
         bool VAR_7)
{
 unsigned int VAR_8;
 bool VAR_9;

 if (!VAR_7 && VAR_6->theta == 0)
  VAR_8 = (1 << VAR_1) |
        (2 << VAR_3);
 else
  VAR_8 = 2 << VAR_3;

 FUNC_0(VAR_5->madera->regmap,
     VAR_5->base + VAR_4,
     VAR_0 |
     VAR_2,
     VAR_8, &VAR_9);

 return VAR_9;
}
