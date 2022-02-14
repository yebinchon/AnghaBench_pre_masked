
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int work; } ;
struct snd_ff {int unit; int mutex; int card; scalar_t__ registered; TYPE_1__ dwork; } ;
struct fw_unit {int device; } ;


 int FUNC_0 (int *) ;
 struct snd_ff* FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct fw_unit *VAR_0)
{
 struct snd_ff *VAR_1 = FUNC_1(&VAR_0->device);






 FUNC_0(&VAR_1->dwork.work);

 if (VAR_1->registered) {

  FUNC_4(VAR_1->card);
 }

 FUNC_3(&VAR_1->mutex);
 FUNC_2(VAR_1->unit);
}
