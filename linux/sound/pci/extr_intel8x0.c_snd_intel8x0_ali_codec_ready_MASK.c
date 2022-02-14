
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel8x0 {TYPE_1__* card; int in_ac97_init; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct intel8x0*,int ) ;

__attribute__((used)) static int FUNC_3(struct intel8x0 *VAR_2, int VAR_3)
{
 int VAR_4 = 0;
 for (VAR_4 = 0; VAR_4 < 0x7f; VAR_4++) {
  int VAR_5 = FUNC_2(VAR_2, FUNC_0(VAR_0));
  if (VAR_5 & VAR_3)
   return 0;
 }
 if (! VAR_2->in_ac97_init)
  FUNC_1(VAR_2->card->dev, "AC97 codec ready timeout.\n");
 return -VAR_1;
}
