
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nci_rf_deactivate_cmd {unsigned long type; } ;
struct nci_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nci_dev*,int ,int,struct nci_rf_deactivate_cmd*) ;

__attribute__((used)) static void FUNC_1(struct nci_dev *VAR_1, unsigned long VAR_2)
{
 struct nci_rf_deactivate_cmd VAR_3;

 VAR_3.type = VAR_2;

 FUNC_0(VAR_1, VAR_0,
       sizeof(struct nci_rf_deactivate_cmd), &VAR_3);
}
