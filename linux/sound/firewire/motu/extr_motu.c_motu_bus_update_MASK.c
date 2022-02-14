
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_motu {int dwork; int registered; } ;
struct fw_unit {int device; } ;


 struct snd_motu* FUNC_0 (int *) ;
 int FUNC_1 (struct fw_unit*,int *) ;
 int FUNC_2 (struct snd_motu*) ;

__attribute__((used)) static void FUNC_3(struct fw_unit *VAR_0)
{
 struct snd_motu *VAR_1 = FUNC_0(&VAR_0->device);


 if (!VAR_1->registered)
  FUNC_1(VAR_0, &VAR_1->dwork);


 FUNC_2(VAR_1);
}
