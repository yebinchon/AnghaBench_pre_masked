
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
typedef int zend_object_iterator ;
struct TYPE_3__ {int i; int currentkey; scalar_t__ is_table; int current; } ;
typedef TYPE_1__ ResourceBundle_iterator ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4( zend_object_iterator *VAR_0, zval *VAR_1 )
{
 ResourceBundle_iterator *VAR_2 = (ResourceBundle_iterator *) VAR_0;

 if (FUNC_2(VAR_2->current)) {
  FUNC_3( VAR_2);
 }

 if (VAR_2->is_table) {
  FUNC_1(VAR_1, VAR_2->currentkey);
 } else {
  FUNC_0(VAR_1, VAR_2->i);
 }
}
