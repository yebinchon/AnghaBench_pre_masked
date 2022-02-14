
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_bebob {int unit; int dwork; int registered; } ;
struct fw_unit {int device; } ;


 struct snd_bebob* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct fw_unit*,int *) ;

__attribute__((used)) static void
FUNC_3(struct fw_unit *VAR_0)
{
 struct snd_bebob *VAR_1 = FUNC_0(&VAR_0->device);

 if (VAR_1 == ((void*)0))
  return;


 if (!VAR_1->registered)
  FUNC_2(VAR_0, &VAR_1->dwork);
 else
  FUNC_1(VAR_1->unit);
}
