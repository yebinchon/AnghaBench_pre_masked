
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int zend_uchar ;
typedef int MYSQLND_FIELD ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,double) ;
 int VAR_0 ;
 int FUNC_2 (int *,double) ;
 int FUNC_3 (double,int const*) ;

__attribute__((used)) static void
FUNC_4(zval * VAR_1, const MYSQLND_FIELD * const VAR_2, const unsigned int VAR_3, const zend_uchar ** VAR_4)
{
 double VAR_5;
 FUNC_0("ps_fetch_double");
 FUNC_3(VAR_5, *VAR_4);
 FUNC_2(VAR_1, VAR_5);
 (*VAR_4)+= 8;
 FUNC_1("value=%f", VAR_5);
 VAR_0;
}
