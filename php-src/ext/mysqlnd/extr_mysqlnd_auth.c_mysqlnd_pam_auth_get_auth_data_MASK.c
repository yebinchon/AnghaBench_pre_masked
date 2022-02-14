
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_ulong ;
typedef int zend_uchar ;
struct st_mysqlnd_authentication_plugin {int dummy; } ;
typedef int MYSQLND_SESSION_OPTIONS ;
typedef int MYSQLND_PFC_DATA ;
typedef int MYSQLND_CONN_DATA ;


 scalar_t__ FUNC_0 (char const* const,size_t const) ;

__attribute__((used)) static zend_uchar *
FUNC_1(struct st_mysqlnd_authentication_plugin * VAR_0,
          size_t * VAR_1,
          MYSQLND_CONN_DATA * VAR_2, const char * const VAR_3, const char * const VAR_4,
          const size_t VAR_5, zend_uchar * VAR_6, const size_t VAR_7,
          const MYSQLND_SESSION_OPTIONS * const VAR_8,
          const MYSQLND_PFC_DATA * const VAR_9,
          const zend_ulong VAR_10
         )
{
 zend_uchar * VAR_11 = ((void*)0);


 if (VAR_4 && VAR_5) {
  VAR_11 = (zend_uchar*) FUNC_0(VAR_4, VAR_5);
 }
 *VAR_1 = VAR_5;

 return VAR_11;
}
