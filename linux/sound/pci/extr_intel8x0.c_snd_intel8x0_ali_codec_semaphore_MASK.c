
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel8x0 {TYPE_1__* card; int in_ac97_init; scalar_t__ buggy_semaphore; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct intel8x0*,int ) ;
 int FUNC_3 (struct intel8x0*,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct intel8x0 *VAR_3)
{
 int VAR_4 = 100;
 if (VAR_3->buggy_semaphore)
  return 0;
 while (--VAR_4 && (FUNC_2(VAR_3, FUNC_0(VAR_0)) & VAR_1))
  FUNC_4(1);
 if (! VAR_4 && ! VAR_3->in_ac97_init)
  FUNC_1(VAR_3->card->dev, "ali_codec_semaphore timeout\n");
 return FUNC_3(VAR_3, VAR_2);
}
