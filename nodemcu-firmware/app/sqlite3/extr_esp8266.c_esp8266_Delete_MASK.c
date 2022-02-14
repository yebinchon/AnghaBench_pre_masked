
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_vfs ;
typedef scalar_t__ sint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,char const*) ;
 scalar_t__ FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2( sqlite3_vfs * VAR_3, const char * VAR_4, int VAR_5 )
{
 sint32_t VAR_6 = FUNC_1( VAR_4 );
 if (VAR_6 == VAR_2)
  return VAR_0;

 FUNC_0("esp8266_Delete: %s OK\n", VAR_4);
 return VAR_1;
}
