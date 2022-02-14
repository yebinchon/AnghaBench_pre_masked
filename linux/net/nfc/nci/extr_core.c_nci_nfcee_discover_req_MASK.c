
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nci_nfcee_discover_cmd {unsigned long discovery_action; } ;
struct nci_dev {int dummy; } ;
typedef unsigned long __u8 ;


 int VAR_0 ;
 int FUNC_0 (struct nci_dev*,int ,int,struct nci_nfcee_discover_cmd*) ;

__attribute__((used)) static void FUNC_1(struct nci_dev *VAR_1, unsigned long VAR_2)
{
 struct nci_nfcee_discover_cmd VAR_3;
 __u8 VAR_4 = VAR_2;

 VAR_3.discovery_action = VAR_4;

 FUNC_0(VAR_1, VAR_0, 1, &VAR_3);
}
