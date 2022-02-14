
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zend_object ;
struct TYPE_3__ {int error; scalar_t__ dest; scalar_t__ src; } ;
typedef TYPE_1__ php_converter_object ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(zend_object *VAR_0) {
 php_converter_object *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->src) {
  FUNC_2(VAR_1->src);
 }

 if (VAR_1->dest) {
  FUNC_2(VAR_1->dest);
 }

 FUNC_0(&(VAR_1->error));
}
