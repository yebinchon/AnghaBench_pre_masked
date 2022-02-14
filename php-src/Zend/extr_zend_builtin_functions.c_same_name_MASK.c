
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_string ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (int *,int ) ;
 int * FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(zend_string *VAR_0, zend_string *VAR_1)
{
 zend_string *VAR_2;
 int VAR_3;

 if (VAR_0 == VAR_1) {
  return 1;
 }
 if (FUNC_0(VAR_0) != FUNC_0(VAR_1)) {
  return 0;
 }
 VAR_2 = FUNC_4(VAR_1);
 VAR_3 = FUNC_2(FUNC_1(VAR_2), FUNC_1(VAR_0), FUNC_0(VAR_0)) == 0;
 FUNC_3(VAR_2, 0);
 return VAR_3;
}
