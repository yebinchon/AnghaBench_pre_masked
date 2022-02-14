
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
struct php_sqlite3_bound_param {int parameter; scalar_t__ name; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct php_sqlite3_bound_param*) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(zval *VAR_0)
{
 struct php_sqlite3_bound_param *VAR_1 = (struct php_sqlite3_bound_param*)FUNC_2(VAR_0);

 if (VAR_1->name) {
  FUNC_4(VAR_1->name, 0);
 }

 if (!FUNC_1(VAR_1->parameter)) {
  FUNC_5(&(VAR_1->parameter));
  FUNC_0(&VAR_1->parameter);
 }
 FUNC_3(VAR_1);
}
