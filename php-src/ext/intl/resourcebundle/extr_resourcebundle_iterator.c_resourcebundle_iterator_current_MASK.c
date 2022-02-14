
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
typedef int zend_object_iterator ;
struct TYPE_3__ {int current; } ;
typedef TYPE_1__ ResourceBundle_iterator ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static zval *FUNC_2( zend_object_iterator *VAR_0 )
{
 ResourceBundle_iterator *VAR_1 = (ResourceBundle_iterator *) VAR_0;
 if (FUNC_0(VAR_1->current)) {
  FUNC_1( VAR_1);
 }
 return &VAR_1->current;
}
