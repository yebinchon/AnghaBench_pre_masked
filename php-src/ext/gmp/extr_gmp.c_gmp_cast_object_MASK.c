
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zval ;
typedef int zend_object ;
typedef int mpz_ptr ;
struct TYPE_2__ {int num; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *) ;



 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;

 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(zend_object *VAR_2, zval *VAR_3, int VAR_4)
{
 mpz_ptr VAR_5;
 switch (VAR_4) {
 case 129:
  VAR_5 = FUNC_0(VAR_2)->num;
  FUNC_3(VAR_3, VAR_5, 10);
  return VAR_1;
 case 130:
  VAR_5 = FUNC_0(VAR_2)->num;
  FUNC_2(VAR_3, FUNC_6(VAR_5));
  return VAR_1;
 case 131:
  VAR_5 = FUNC_0(VAR_2)->num;
  FUNC_1(VAR_3, FUNC_5(VAR_5));
  return VAR_1;
 case 128:
  VAR_5 = FUNC_0(VAR_2)->num;
  if (FUNC_4(VAR_5)) {
   FUNC_2(VAR_3, FUNC_6(VAR_5));
  } else {
   FUNC_1(VAR_3, FUNC_5(VAR_5));
  }
  return VAR_1;
 default:
  return VAR_0;
 }
}
