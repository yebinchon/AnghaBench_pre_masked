
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct madera_fll {int id; int base; void* sync_src; void* ref_src; struct madera* madera; } ;
struct madera {int regmap; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (int ,scalar_t__,int ,int ) ;

int FUNC_1(struct madera *VAR_3, int VAR_4, int VAR_5,
      struct madera_fll *VAR_6)
{
 VAR_6->id = VAR_4;
 VAR_6->base = VAR_5;
 VAR_6->madera = VAR_3;
 VAR_6->ref_src = VAR_2;
 VAR_6->sync_src = VAR_2;

 FUNC_0(VAR_3->regmap,
      VAR_6->base + VAR_1,
      VAR_0, 0);

 return 0;
}
