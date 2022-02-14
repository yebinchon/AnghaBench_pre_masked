
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ ptr; } ;
typedef TYPE_1__ zend_resource ;
struct TYPE_6__ {int res; int * ber; } ;
typedef TYPE_2__ ldap_resultentry ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(zend_resource *VAR_0)
{
 ldap_resultentry *VAR_1 = (ldap_resultentry *)VAR_0->ptr;

 if (VAR_1->ber != ((void*)0)) {
  FUNC_0(VAR_1->ber, 0);
  VAR_1->ber = ((void*)0);
 }
 FUNC_2(&VAR_1->res);
 FUNC_1(VAR_1);
}
