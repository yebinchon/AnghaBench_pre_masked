
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_object_iterator ;
struct php_pdo_iterator {int fetch_ahead; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(zend_object_iterator *VAR_2)
{
 struct php_pdo_iterator *VAR_3 = (struct php_pdo_iterator*)VAR_2;

 return FUNC_0(VAR_3->fetch_ahead) ? VAR_0 : VAR_1;
}
