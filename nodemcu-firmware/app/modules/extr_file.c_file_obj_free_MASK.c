
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_2__ {scalar_t__ fd; } ;
typedef TYPE_1__ file_fd_ud ;


 scalar_t__ FUNC_0 (int *,int,char*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2( lua_State *VAR_0 )
{
  file_fd_ud *VAR_1 = (file_fd_ud *)FUNC_0(VAR_0, 1, "file.obj");
  if (VAR_1->fd) {

    FUNC_1(VAR_1->fd);
    VAR_1->fd = 0;
  }

  return 0;
}
