
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
typedef int zend_uchar ;
struct TYPE_3__ {scalar_t__ decimals; } ;
typedef TYPE_1__ MYSQLND_FIELD ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,float) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,double) ;
 int FUNC_3 (float,int const*) ;
 double FUNC_4 (float,int) ;

__attribute__((used)) static void
FUNC_5(zval * VAR_2, const MYSQLND_FIELD * const VAR_3, const unsigned int VAR_4, const zend_uchar ** VAR_5)
{
 float VAR_6;
 double VAR_7;
 FUNC_0("ps_fetch_float");
 FUNC_3(VAR_6, *VAR_5);
 (*VAR_5)+= 4;
 FUNC_1("value=%f", VAR_6);





 VAR_7 = FUNC_4(VAR_6, (VAR_3->decimals >= 31) ? -1 : (int)VAR_3->decimals);

 FUNC_2(VAR_2, VAR_7);
 VAR_0;
}
