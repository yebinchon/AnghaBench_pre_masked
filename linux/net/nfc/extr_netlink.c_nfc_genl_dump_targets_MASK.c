
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct nfc_dev {int n_targets; int dev; int * targets; int targets_generation; } ;
struct netlink_callback {int* args; int seq; } ;


 scalar_t__ FUNC_0 (struct nfc_dev*) ;
 int VAR_0 ;
 int FUNC_1 (struct nfc_dev*) ;
 struct nfc_dev* FUNC_2 (struct netlink_callback*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct sk_buff*,int *,struct netlink_callback*,int ) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_1,
     struct netlink_callback *VAR_2)
{
 int VAR_3 = VAR_2->args[0];
 struct nfc_dev *VAR_4 = (struct nfc_dev *) VAR_2->args[1];
 int VAR_5;

 if (!VAR_4) {
  VAR_4 = FUNC_2(VAR_2);
  if (FUNC_0(VAR_4))
   return FUNC_1(VAR_4);

  VAR_2->args[1] = (long) VAR_4;
 }

 FUNC_3(&VAR_4->dev);

 VAR_2->seq = VAR_4->targets_generation;

 while (VAR_3 < VAR_4->n_targets) {
  VAR_5 = FUNC_5(VAR_1, &VAR_4->targets[VAR_3], VAR_2,
       VAR_0);
  if (VAR_5 < 0)
   break;

  VAR_3++;
 }

 FUNC_4(&VAR_4->dev);

 VAR_2->args[0] = VAR_3;

 return VAR_1->len;
}
