
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct nci_dev {int nci_ver; } ;
struct nci_core_reset_rsp {scalar_t__ status; int config_status; int nci_ver; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct nci_dev*,scalar_t__) ;
 int FUNC_1 (char*,scalar_t__,...) ;

__attribute__((used)) static void FUNC_2(struct nci_dev *VAR_1, struct sk_buff *VAR_2)
{
 struct nci_core_reset_rsp *VAR_3 = (void *) VAR_2->data;

 FUNC_1("status 0x%x\n", VAR_3->status);

 if (VAR_3->status == VAR_0) {
  VAR_1->nci_ver = VAR_3->nci_ver;
  FUNC_1("nci_ver 0x%x, config_status 0x%x\n",
    VAR_3->nci_ver, VAR_3->config_status);
 }

 FUNC_0(VAR_1, VAR_3->status);
}
