
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ac97_controller {TYPE_1__** codecs; } ;
struct TYPE_2__ {int dev; int * ac97_ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct ac97_controller *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (VAR_2->codecs[VAR_3]) {
   VAR_2->codecs[VAR_3]->ac97_ctrl = &VAR_1;
   FUNC_0(&VAR_2->codecs[VAR_3]->dev);
  }
}
