
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct nci_dev {int rx_work; int rx_wq; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nci_dev* FUNC_0 (int ,struct timer_list*,int ) ;
 struct nci_dev* VAR_2 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_3)
{
 struct nci_dev *VAR_4 = FUNC_0(VAR_4, VAR_3, VAR_1);

 FUNC_2(VAR_0, &VAR_4->flags);
 FUNC_1(VAR_4->rx_wq, &VAR_4->rx_work);
}
