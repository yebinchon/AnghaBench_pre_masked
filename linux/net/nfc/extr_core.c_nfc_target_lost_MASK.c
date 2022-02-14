
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct nfc_target {scalar_t__ idx; } ;
struct nfc_dev {int n_targets; int dev; struct nfc_target* targets; int * active_target; int targets_generation; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nfc_target*) ;
 int FUNC_4 (struct nfc_target*,struct nfc_target*,int) ;
 int FUNC_5 (struct nfc_dev*,scalar_t__) ;
 int FUNC_6 (char*,int ,scalar_t__) ;

int FUNC_7(struct nfc_dev *VAR_1, u32 VAR_2)
{
 struct nfc_target *VAR_3;
 int VAR_4;

 FUNC_6("dev_name %s n_target %d\n", FUNC_0(&VAR_1->dev), VAR_2);

 FUNC_1(&VAR_1->dev);

 for (VAR_4 = 0; VAR_4 < VAR_1->n_targets; VAR_4++) {
  VAR_3 = &VAR_1->targets[VAR_4];
  if (VAR_3->idx == VAR_2)
   break;
 }

 if (VAR_4 == VAR_1->n_targets) {
  FUNC_2(&VAR_1->dev);
  return -VAR_0;
 }

 VAR_1->targets_generation++;
 VAR_1->n_targets--;
 VAR_1->active_target = ((void*)0);

 if (VAR_1->n_targets) {
  FUNC_4(&VAR_1->targets[VAR_4], &VAR_1->targets[VAR_4 + 1],
         (VAR_1->n_targets - VAR_4) * sizeof(struct nfc_target));
 } else {
  FUNC_3(VAR_1->targets);
  VAR_1->targets = ((void*)0);
 }

 FUNC_2(&VAR_1->dev);

 FUNC_5(VAR_1, VAR_2);

 return 0;
}
