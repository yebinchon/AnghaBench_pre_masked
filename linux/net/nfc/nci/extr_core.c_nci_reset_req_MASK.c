
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nci_dev {int dummy; } ;
struct nci_core_reset_cmd {int reset_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nci_dev*,int ,int,struct nci_core_reset_cmd*) ;

__attribute__((used)) static void FUNC_1(struct nci_dev *VAR_2, unsigned long VAR_3)
{
 struct nci_core_reset_cmd VAR_4;

 VAR_4.reset_type = VAR_1;
 FUNC_0(VAR_2, VAR_0, 1, &VAR_4);
}
