
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zend_object ;
struct TYPE_2__ {int std; scalar_t__ unk; scalar_t__ ipsi; scalar_t__ ips; scalar_t__ ipf; } ;
typedef TYPE_1__ php_com_persist_helper ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(zend_object *VAR_0)
{
 php_com_persist_helper *VAR_1 = (php_com_persist_helper*)VAR_0;

 if (VAR_1->ipf) {
  FUNC_0(VAR_1->ipf);
 }
 if (VAR_1->ips) {
  FUNC_2(VAR_1->ips);
 }
 if (VAR_1->ipsi) {
  FUNC_1(VAR_1->ipsi);
 }
 if (VAR_1->unk) {
  FUNC_3(VAR_1->unk);
 }
 FUNC_4(&VAR_1->std);
}
