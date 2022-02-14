
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nci_hci_gate {int pipe; int gate; int dest_host; } ;
struct nci_dev {int dummy; } ;


 int FUNC_0 (struct nci_dev*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct nci_dev *VAR_0,
         u8 VAR_1,
         struct nci_hci_gate *VAR_2)
{
 int VAR_3;

 while (VAR_1--) {
  VAR_3 = FUNC_0(VAR_0, VAR_2->dest_host,
      VAR_2->gate, VAR_2->pipe);
  if (VAR_3 < 0)
   return VAR_3;
  VAR_2++;
 }

 return 0;
}
