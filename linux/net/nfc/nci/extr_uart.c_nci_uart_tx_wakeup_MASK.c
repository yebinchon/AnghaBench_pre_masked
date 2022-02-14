
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nci_uart {int write_work; int tx_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct nci_uart *VAR_2)
{
 if (FUNC_2(VAR_0, &VAR_2->tx_state)) {
  FUNC_1(VAR_1, &VAR_2->tx_state);
  return 0;
 }

 FUNC_0(&VAR_2->write_work);

 return 0;
}
