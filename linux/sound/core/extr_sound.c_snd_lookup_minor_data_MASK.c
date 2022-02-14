
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_minor {int type; TYPE_1__* card_ptr; void* private_data; } ;
struct TYPE_2__ {int card_dev; } ;


 unsigned int FUNC_0 (struct snd_minor**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct snd_minor** VAR_0 ;
 int VAR_1 ;

void *FUNC_4(unsigned int VAR_2, int VAR_3)
{
 struct snd_minor *VAR_4;
 void *VAR_5;

 if (VAR_2 >= FUNC_0(VAR_0))
  return ((void*)0);
 FUNC_2(&VAR_1);
 VAR_4 = VAR_0[VAR_2];
 if (VAR_4 && VAR_4->type == VAR_3) {
  VAR_5 = VAR_4->private_data;
  if (VAR_5 && VAR_4->card_ptr)
   FUNC_1(&VAR_4->card_ptr->card_dev);
 } else
  VAR_5 = ((void*)0);
 FUNC_3(&VAR_1);
 return VAR_5;
}
