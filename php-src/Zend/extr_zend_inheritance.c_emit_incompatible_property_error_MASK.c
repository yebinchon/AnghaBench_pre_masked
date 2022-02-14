
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zend_string ;
struct TYPE_5__ {TYPE_2__* ce; int * name; int type; } ;
typedef TYPE_1__ zend_property_info ;
struct TYPE_6__ {int * name; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int ,int ,int ,int ) ;
 int * FUNC_2 (int ,TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(
  const zend_property_info *VAR_1, const zend_property_info *VAR_2) {
 zend_string *VAR_3 = FUNC_2(VAR_2->type, VAR_2->ce);
 FUNC_1(VAR_0,
  "Type of %s::$%s must be %s (as in class %s)",
  FUNC_0(VAR_1->ce->name),
  FUNC_0(VAR_1->name),
  FUNC_0(VAR_3),
  FUNC_0(VAR_2->ce->name));
}
