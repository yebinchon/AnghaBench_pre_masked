
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zend_object ;
struct TYPE_7__ {int ce; } ;
struct TYPE_6__ {scalar_t__ unk; scalar_t__ ipsi; scalar_t__ ips; scalar_t__ ipf; TYPE_2__ std; } ;
typedef TYPE_1__ php_com_persist_helper ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 TYPE_1__* FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_6 (TYPE_2__*,int ) ;

__attribute__((used)) static zend_object* FUNC_7(zend_object *VAR_0)
{
 php_com_persist_helper *VAR_1, *VAR_2 = (php_com_persist_helper*) VAR_0;

 VAR_1 = FUNC_4(sizeof(*VAR_2));
 FUNC_5(VAR_1, VAR_2, sizeof(*VAR_2));

 FUNC_6(&VAR_1->std, VAR_2->std.ce);

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
 return (zend_object*)VAR_1;
}
