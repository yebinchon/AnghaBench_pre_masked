
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ff {scalar_t__ registered; int dwork; } ;
struct fw_unit {int device; } ;


 struct snd_ff* FUNC_0 (int *) ;
 int FUNC_1 (struct snd_ff*) ;
 int FUNC_2 (struct snd_ff*) ;
 int FUNC_3 (struct fw_unit*,int *) ;

__attribute__((used)) static void FUNC_4(struct fw_unit *VAR_0)
{
 struct snd_ff *VAR_1 = FUNC_0(&VAR_0->device);


 if (!VAR_1->registered)
  FUNC_3(VAR_0, &VAR_1->dwork);

 FUNC_2(VAR_1);

 if (VAR_1->registered)
  FUNC_1(VAR_1);
}
