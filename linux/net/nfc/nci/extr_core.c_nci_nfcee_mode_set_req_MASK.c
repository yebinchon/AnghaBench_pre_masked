
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nci_nfcee_mode_set_cmd {int dummy; } ;
struct nci_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nci_dev*,int ,int,struct nci_nfcee_mode_set_cmd*) ;

__attribute__((used)) static void FUNC_1(struct nci_dev *VAR_1, unsigned long VAR_2)
{
 struct nci_nfcee_mode_set_cmd *VAR_3 =
     (struct nci_nfcee_mode_set_cmd *)VAR_2;

 FUNC_0(VAR_1, VAR_0,
       sizeof(struct nci_nfcee_mode_set_cmd), VAR_3);
}
