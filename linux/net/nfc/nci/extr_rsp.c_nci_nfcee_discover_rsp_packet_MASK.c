
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; scalar_t__ data; } ;
struct nci_nfcee_discover_rsp {scalar_t__ status; scalar_t__ num_nfcee; } ;
struct nci_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct nci_dev*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct nci_dev *VAR_2,
       struct sk_buff *VAR_3)
{
 struct nci_nfcee_discover_rsp *VAR_4;

 if (VAR_3->len != 2) {
  FUNC_0(VAR_2, VAR_0);
  return;
 }

 VAR_4 = (struct nci_nfcee_discover_rsp *)VAR_3->data;

 if (VAR_4->status != VAR_1 ||
     VAR_4->num_nfcee == 0)
  FUNC_0(VAR_2, VAR_4->status);
}
