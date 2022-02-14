
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nci_loopback_data {int data; int conn_id; } ;
struct nci_dev {int dummy; } ;


 int FUNC_0 (struct nci_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct nci_dev *VAR_0, unsigned long VAR_1)
{
 struct nci_loopback_data *VAR_2 = (struct nci_loopback_data *)VAR_1;

 FUNC_0(VAR_0, VAR_2->conn_id, VAR_2->data);
}
