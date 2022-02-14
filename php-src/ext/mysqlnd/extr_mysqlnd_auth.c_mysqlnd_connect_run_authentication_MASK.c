
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_ulong ;
typedef scalar_t__ enum_func_status ;
typedef int MYSQLND_STRING ;
typedef int MYSQLND_SESSION_OPTIONS ;
typedef int MYSQLND_CONN_DATA ;


 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int * const,char const* const,char const* const,size_t const,char const* const,size_t const,int const,char const* const,unsigned int const,int const* const,int const,int ,int ) ;
 scalar_t__ FUNC_3 (int * const,unsigned int const,size_t const,int const* const,int const) ;

enum_func_status
FUNC_4(
   MYSQLND_CONN_DATA * const VAR_3,
   const char * const VAR_4,
   const char * const VAR_5,
   const char * const VAR_6,
   const size_t VAR_7,
   const size_t VAR_8,
   const MYSQLND_STRING VAR_9,
   const char * const VAR_10,
   const unsigned int VAR_11,
   const size_t VAR_12,
   const MYSQLND_SESSION_OPTIONS * const VAR_13,
   const zend_ulong VAR_14
   )
{
 enum_func_status VAR_15 = VAR_0;
 FUNC_0("mysqlnd_connect_run_authentication");

 VAR_15 = FUNC_3(VAR_3, VAR_11, VAR_12, VAR_13, VAR_14);
 if (VAR_2 == VAR_15) {
  VAR_15 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_8, VAR_6, VAR_7,
           VAR_9, VAR_10,
           VAR_11, VAR_13, VAR_14, VAR_1 , VAR_1 );
 }
 FUNC_1(VAR_15);
}
