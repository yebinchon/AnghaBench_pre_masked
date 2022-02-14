
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nci_dev {int dummy; } ;
struct nci_cmd_param {int payload; int len; int opcode; } ;


 int FUNC_0 (struct nci_dev*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct nci_dev *VAR_0, unsigned long VAR_1)
{
 struct nci_cmd_param *VAR_2 =
  (struct nci_cmd_param *)VAR_1;

 FUNC_0(VAR_0, VAR_2->opcode, VAR_2->len, VAR_2->payload);
}
