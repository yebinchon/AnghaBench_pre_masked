
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zend_ulong ;
typedef int zend_uchar ;
struct st_mysqlnd_authentication_plugin {int dummy; } ;
struct TYPE_3__ {int error_info; } ;
typedef int MYSQLND_SESSION_OPTIONS ;
typedef int MYSQLND_PFC_DATA ;
typedef TYPE_1__ MYSQLND_CONN_DATA ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,size_t const,size_t const) ;
 int FUNC_2 (int *) ;
 size_t const VAR_1 ;
 int FUNC_3 (int ,int ,int ,char*) ;
 int VAR_2 ;
 int * FUNC_4 (size_t const) ;
 int FUNC_5 (int *,int *,int *,size_t const) ;

__attribute__((used)) static zend_uchar *
FUNC_6(struct st_mysqlnd_authentication_plugin * VAR_3,
          size_t * VAR_4,
          MYSQLND_CONN_DATA * VAR_5, const char * const VAR_6, const char * const VAR_7,
          const size_t VAR_8, zend_uchar * VAR_9, const size_t VAR_10,
          const MYSQLND_SESSION_OPTIONS * const VAR_11,
          const MYSQLND_PFC_DATA * const VAR_12,
          const zend_ulong VAR_13
         )
{
 zend_uchar * VAR_14 = ((void*)0);
 FUNC_0("mysqlnd_native_auth_get_auth_data");
 *VAR_4 = 0;


 if (VAR_10 < VAR_1) {

  FUNC_3(VAR_5->error_info, VAR_0, VAR_2, "The server sent wrong length for scramble");
  FUNC_1("The server sent wrong length for scramble %u. Expected %u", VAR_10, VAR_1);
  FUNC_2(((void*)0));
 }


 if (VAR_7 && VAR_8) {
  VAR_14 = FUNC_4(VAR_1);
  *VAR_4 = VAR_1;

  FUNC_5((zend_uchar*)VAR_14, VAR_9, (zend_uchar*)VAR_7, VAR_8);
 }
 FUNC_2(VAR_14);
}
