
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_2__ {int fd; } ;
typedef TYPE_1__ file_fd_ud ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int,char*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static int FUNC_7( lua_State* VAR_2 )
{



  int VAR_3 = 0;
  FUNC_6(VAR_2 ,1);

  FUNC_2(VAR_2);

  if (!FUNC_4(VAR_2, -1)) {
    FUNC_5(VAR_2, 1);
    file_fd_ud *VAR_4 = (file_fd_ud *)FUNC_3(VAR_2, 1, "file.obj");
    VAR_3 = FUNC_1(VAR_2, VAR_1, VAR_0, VAR_4->fd);

    FUNC_0(VAR_2);
    FUNC_5(VAR_2, 1);
  }
  return VAR_3;
}
