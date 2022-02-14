
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nci_dev {int dummy; } ;
struct core_conn_create_data {int cmd; int length; } ;


 int VAR_0 ;
 int FUNC_0 (struct nci_dev*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct nci_dev *VAR_1, unsigned long VAR_2)
{
 struct core_conn_create_data *VAR_3 =
     (struct core_conn_create_data *)VAR_2;

 FUNC_0(VAR_1, VAR_0, VAR_3->length, VAR_3->cmd);
}
