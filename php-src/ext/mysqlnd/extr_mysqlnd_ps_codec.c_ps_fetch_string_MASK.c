
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int zend_ulong ;
typedef int zend_uchar ;
typedef int MYSQLND_FIELD ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int const) ;
 int VAR_0 ;
 int FUNC_3 (int *,char*,int const) ;
 int FUNC_4 (int const**) ;

__attribute__((used)) static void
FUNC_5(zval * VAR_1, const MYSQLND_FIELD * const VAR_2, const unsigned int VAR_3, const zend_uchar ** VAR_4)
{




 const zend_ulong VAR_5 = FUNC_4(VAR_4);
 FUNC_0("ps_fetch_string");
 FUNC_2("len = %lu", VAR_5);
 FUNC_1("copying from the row buffer");
 FUNC_3(VAR_1, (char *)*VAR_4, VAR_5);

 (*VAR_4) += VAR_5;
 VAR_0;
}
