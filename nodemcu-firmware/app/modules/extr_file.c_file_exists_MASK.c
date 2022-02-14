
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfs_stat {int dummy; } ;
typedef int lua_State ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int,int,char*) ;
 char* FUNC_1 (int *,int,size_t*) ;
 int FUNC_2 (int *,int) ;
 size_t FUNC_3 (char const*) ;
 char* FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char*,struct vfs_stat*) ;

__attribute__((used)) static int FUNC_6( lua_State* VAR_2 )
{
  size_t VAR_3;
  const char *VAR_4 = FUNC_1( VAR_2, 1, &VAR_3 );
  const char *VAR_5 = FUNC_4( VAR_4 );
  FUNC_0(VAR_2, FUNC_3(VAR_5) <= VAR_0 && FUNC_3(VAR_4) == VAR_3, 1, "filename invalid");

  struct vfs_stat VAR_6;
  FUNC_2(VAR_2, FUNC_5((char *)VAR_4, &VAR_6) == VAR_1 ? 1 : 0);

  return 1;
}
