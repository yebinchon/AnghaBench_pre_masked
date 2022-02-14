
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfs_stat {char const* name; } ;
typedef int sqlite3_vfs ;
typedef scalar_t__ sint32_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char const*,int) ;
 scalar_t__ FUNC_2 (char const*,struct vfs_stat*) ;

__attribute__((used)) static int FUNC_3( sqlite3_vfs * VAR_2, const char * VAR_3, int VAR_4, char * VAR_5 )
{
 struct vfs_stat VAR_6;
 sint32_t VAR_7 = FUNC_2( VAR_3, &VAR_6 );
 if ( VAR_7 == VAR_1 ){
  FUNC_1( VAR_5, VAR_6.name, VAR_4 );
 } else {
  FUNC_1( VAR_5, VAR_3, VAR_4 );
 }

 VAR_5[ VAR_4 - 1 ] = '\0';

 FUNC_0("esp8266_FullPathname: %s\n", VAR_5);
 return VAR_0;
}
