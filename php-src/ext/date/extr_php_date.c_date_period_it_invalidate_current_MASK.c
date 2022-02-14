
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zend_object_iterator ;
struct TYPE_2__ {int current; } ;
typedef TYPE_1__ date_period_it ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(zend_object_iterator *VAR_1)
{
 date_period_it *VAR_2 = (date_period_it *)VAR_1;

 if (FUNC_1(VAR_2->current) != VAR_0) {
  FUNC_2(&VAR_2->current);
  FUNC_0(&VAR_2->current);
 }
}
