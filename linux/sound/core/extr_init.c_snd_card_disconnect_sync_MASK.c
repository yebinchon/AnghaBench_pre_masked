
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_card {int files_lock; int files_list; int remove_sleep; int dev; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_card*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int ) ;

void FUNC_6(struct snd_card *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1 < 0) {
  FUNC_0(VAR_0->dev,
   "snd_card_disconnect error (%d), skipping sync\n",
   VAR_1);
  return;
 }

 FUNC_3(&VAR_0->files_lock);
 FUNC_5(VAR_0->remove_sleep,
       FUNC_1(&VAR_0->files_list),
       VAR_0->files_lock);
 FUNC_4(&VAR_0->files_lock);
}
