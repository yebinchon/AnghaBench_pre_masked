
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct nci_dev {int cmd_work; int cmd_wq; int cmd_cnt; } ;


 int FUNC_0 (int *,int) ;
 int VAR_0 ;
 struct nci_dev* FUNC_1 (int ,struct timer_list*,int ) ;
 struct nci_dev* VAR_1 ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_2)
{
 struct nci_dev *VAR_3 = FUNC_1(VAR_3, VAR_2, VAR_0);

 FUNC_0(&VAR_3->cmd_cnt, 1);
 FUNC_2(VAR_3->cmd_wq, &VAR_3->cmd_work);
}
