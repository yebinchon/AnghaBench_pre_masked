
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nau8825 {int xtalk_baktab_initialized; int regmap; } ;
struct TYPE_3__ {int def; int reg; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int ,int ,int *) ;

__attribute__((used)) static void FUNC_2(struct nau8825 *VAR_1)
{
 int VAR_2;

 if (VAR_1->xtalk_baktab_initialized)
  return;


 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
  FUNC_1(VAR_1->regmap, VAR_0[VAR_2].reg,
    &VAR_0[VAR_2].def);

 VAR_1->xtalk_baktab_initialized = 1;
}
