
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nci_dev {int dummy; } ;
struct nci_data {int data_len; int data; int cmd; int pipe; } ;


 int FUNC_0 (struct nci_dev*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct nci_dev *VAR_0, unsigned long VAR_1)
{
 struct nci_data *VAR_2 = (struct nci_data *)VAR_1;

 FUNC_0(VAR_0, VAR_2->pipe, VAR_2->cmd,
     VAR_2->data, VAR_2->data_len);
}
