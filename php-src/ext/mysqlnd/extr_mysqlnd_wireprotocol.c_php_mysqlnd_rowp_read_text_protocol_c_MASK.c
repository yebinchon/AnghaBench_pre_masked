
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int zend_bool ;
typedef int enum_func_status ;
typedef int MYSQLND_STATS ;
typedef int MYSQLND_ROW_BUFFER ;
typedef int MYSQLND_FIELD ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,unsigned int const,int const* const,int const,int * const) ;

enum_func_status
FUNC_3(MYSQLND_ROW_BUFFER * VAR_0, zval * VAR_1,
           const unsigned int VAR_2, const MYSQLND_FIELD * const VAR_3,
           const zend_bool VAR_4, MYSQLND_STATS * const VAR_5)
{
 enum_func_status VAR_6;
 FUNC_0("php_mysqlnd_rowp_read_text_protocol_c");
 VAR_6 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 FUNC_1(VAR_6);
}
