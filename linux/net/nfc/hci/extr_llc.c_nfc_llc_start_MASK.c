
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfc_llc {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* start ) (struct nfc_llc*) ;} ;


 int FUNC_0 (struct nfc_llc*) ;

int FUNC_1(struct nfc_llc *VAR_0)
{
 return VAR_0->ops->start(VAR_0);
}
