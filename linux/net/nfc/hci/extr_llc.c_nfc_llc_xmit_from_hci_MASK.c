
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nfc_llc {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* xmit_from_hci ) (struct nfc_llc*,struct sk_buff*) ;} ;


 int FUNC_0 (struct nfc_llc*,struct sk_buff*) ;

int FUNC_1(struct nfc_llc *VAR_0, struct sk_buff *VAR_1)
{
 return VAR_0->ops->xmit_from_hci(VAR_0, VAR_1);
}
