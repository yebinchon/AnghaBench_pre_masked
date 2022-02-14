
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_efw {int mutex; scalar_t__ registered; int unit; int dwork; } ;
struct fw_unit {int device; } ;


 struct snd_efw* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct snd_efw*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct fw_unit*,int *) ;

__attribute__((used)) static void FUNC_6(struct fw_unit *VAR_0)
{
 struct snd_efw *VAR_1 = FUNC_0(&VAR_0->device);


 if (!VAR_1->registered)
  FUNC_5(VAR_0, &VAR_1->dwork);

 FUNC_4(VAR_1->unit);





 if (VAR_1->registered) {
  FUNC_1(&VAR_1->mutex);
  FUNC_3(VAR_1);
  FUNC_2(&VAR_1->mutex);
 }
}
