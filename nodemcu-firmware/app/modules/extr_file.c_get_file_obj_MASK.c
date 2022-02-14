
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_2__ {int fd; } ;
typedef TYPE_1__ file_fd_ud ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int,char*) ;
 scalar_t__ FUNC_1 (int *,int) ;

__attribute__((used)) static int FUNC_2( lua_State *VAR_2, int *VAR_3 )
{
  if (FUNC_1( VAR_2, 1 ) == VAR_0) {
    file_fd_ud *VAR_4 = (file_fd_ud *)FUNC_0(VAR_2, 1, "file.obj");
    *VAR_3 = 2;
    return VAR_4->fd;
  } else {
    *VAR_3 = 1;
    return VAR_1;
  }
}
