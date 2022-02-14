
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfs_stat {int dummy; } ;
typedef int sqlite3_vfs ;
typedef scalar_t__ sint32_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (char const*,struct vfs_stat*) ;

__attribute__((used)) static int FUNC_2( sqlite3_vfs * VAR_2, const char * VAR_3, int VAR_4, int * VAR_5 )
{
 struct vfs_stat VAR_6;
 sint32_t VAR_7 = FUNC_1( VAR_3, &VAR_6 );
 *VAR_5 = ( VAR_7 != VAR_1 );

 FUNC_0("esp8266_Access: %d\n", *VAR_5);
 return VAR_0;
}
