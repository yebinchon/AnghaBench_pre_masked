
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfc_llc {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* deinit ) (struct nfc_llc*) ;} ;


 int FUNC_0 (struct nfc_llc*) ;
 int FUNC_1 (struct nfc_llc*) ;

void FUNC_2(struct nfc_llc *VAR_0)
{
 VAR_0->ops->deinit(VAR_0);
 FUNC_0(VAR_0);
}
