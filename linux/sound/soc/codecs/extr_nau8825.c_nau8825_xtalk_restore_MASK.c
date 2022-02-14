
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nau8825 {int xtalk_baktab_initialized; int regmap; } ;
struct TYPE_3__ {scalar_t__ reg; int def; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct nau8825*,int ,int,int) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (int ,scalar_t__,int) ;

__attribute__((used)) static void FUNC_3(struct nau8825 *VAR_3, bool VAR_4)
{
 int VAR_5, VAR_6;

 if (!VAR_3->xtalk_baktab_initialized)
  return;






 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); VAR_5++) {
  if (!VAR_4 && VAR_2[VAR_5].reg ==
   VAR_1) {

   VAR_6 = VAR_2[VAR_5].def &
    VAR_0;
   FUNC_1(VAR_3, 0, VAR_6, 3);
   continue;
  }
  FUNC_2(VAR_3->regmap, VAR_2[VAR_5].reg,
    VAR_2[VAR_5].def);
 }

 VAR_3->xtalk_baktab_initialized = 0;
}
