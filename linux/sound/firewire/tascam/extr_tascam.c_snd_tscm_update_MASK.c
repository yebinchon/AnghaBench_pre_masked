
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_tscm {int mutex; scalar_t__ registered; int dwork; } ;
struct fw_unit {int device; } ;


 struct snd_tscm* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct fw_unit*,int *) ;
 int FUNC_4 (struct snd_tscm*) ;
 int FUNC_5 (struct snd_tscm*) ;

__attribute__((used)) static void FUNC_6(struct fw_unit *VAR_0)
{
 struct snd_tscm *VAR_1 = FUNC_0(&VAR_0->device);


 if (!VAR_1->registered)
  FUNC_3(VAR_0, &VAR_1->dwork);

 FUNC_5(VAR_1);





 if (VAR_1->registered) {
  FUNC_1(&VAR_1->mutex);
  FUNC_4(VAR_1);
  FUNC_2(&VAR_1->mutex);
 }
}
