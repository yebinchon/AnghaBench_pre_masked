
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_dice {int unit; int mutex; int card; scalar_t__ registered; int dwork; } ;
struct fw_unit {int device; } ;


 int FUNC_0 (int *) ;
 struct snd_dice* FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct fw_unit *VAR_0)
{
 struct snd_dice *VAR_1 = FUNC_1(&VAR_0->device);






 FUNC_0(&VAR_1->dwork);

 if (VAR_1->registered) {

  FUNC_4(VAR_1->card);
 }

 FUNC_3(&VAR_1->mutex);
 FUNC_2(VAR_1->unit);
}
