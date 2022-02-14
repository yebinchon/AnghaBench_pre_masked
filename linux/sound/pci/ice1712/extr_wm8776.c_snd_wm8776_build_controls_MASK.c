
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_wm8776 {TYPE_1__* ctl; } ;
struct TYPE_2__ {scalar_t__ name; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_wm8776*,int) ;

int FUNC_1(struct snd_wm8776 *VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (VAR_1->ctl[VAR_3].name) {
   VAR_2 = FUNC_0(VAR_1, VAR_3);
   if (VAR_2 < 0)
    return VAR_2;
  }

 return 0;
}
