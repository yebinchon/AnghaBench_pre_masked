
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfc_target {scalar_t__ idx; } ;
struct nfc_dev {int polling; int n_targets; int dev; int * targets; int targets_generation; int target_next_idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (struct nfc_target*,int,int ) ;
 int FUNC_5 (struct nfc_dev*) ;
 int FUNC_6 (char*,int ,int) ;

int FUNC_7(struct nfc_dev *VAR_2,
        struct nfc_target *VAR_3, int VAR_4)
{
 int VAR_5;

 FUNC_6("dev_name=%s n_targets=%d\n", FUNC_0(&VAR_2->dev), VAR_4);

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
  VAR_3[VAR_5].idx = VAR_2->target_next_idx++;

 FUNC_1(&VAR_2->dev);

 if (VAR_2->polling == 0) {
  FUNC_2(&VAR_2->dev);
  return 0;
 }

 VAR_2->polling = 0;

 VAR_2->targets_generation++;

 FUNC_3(VAR_2->targets);
 VAR_2->targets = ((void*)0);

 if (VAR_3) {
  VAR_2->targets = FUNC_4(VAR_3,
           VAR_4 * sizeof(struct nfc_target),
           VAR_1);

  if (!VAR_2->targets) {
   VAR_2->n_targets = 0;
   FUNC_2(&VAR_2->dev);
   return -VAR_0;
  }
 }

 VAR_2->n_targets = VAR_4;
 FUNC_2(&VAR_2->dev);

 FUNC_5(VAR_2);

 return 0;
}
