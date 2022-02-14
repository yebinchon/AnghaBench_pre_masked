
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct nci_dev {int rx_work; int rx_wq; int rx_q; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,struct sk_buff*) ;
 int FUNC_4 (int ,int *) ;

int FUNC_5(struct nci_dev *VAR_3, struct sk_buff *VAR_4)
{
 FUNC_1("len %d\n", VAR_4->len);

 if (!VAR_3 || (!FUNC_4(VAR_2, &VAR_3->flags) &&
     !FUNC_4(VAR_1, &VAR_3->flags))) {
  FUNC_0(VAR_4);
  return -VAR_0;
 }


 FUNC_3(&VAR_3->rx_q, VAR_4);
 FUNC_2(VAR_3->rx_wq, &VAR_3->rx_work);

 return 0;
}
