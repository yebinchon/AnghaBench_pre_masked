
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_2__ {scalar_t__ fd; } ;
typedef TYPE_1__ file_fd_ud ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int *,int,char*) ;
 int FUNC_1 (int *,int ,scalar_t__) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static int FUNC_6( lua_State* VAR_5 )
{
  int VAR_6 = VAR_0;
  file_fd_ud *VAR_7;

  if (FUNC_4( VAR_5, 1 ) != VAR_3) {

    if (VAR_4 != VAR_1) {
      FUNC_3( VAR_5, VAR_2, VAR_4 );

      VAR_7 = (file_fd_ud *)FUNC_0(VAR_5, -1, "file.obj");
      FUNC_2( VAR_5, 1 );
    } else {

      return 0;
    }
  } else {
    VAR_7 = (file_fd_ud *)FUNC_0(VAR_5, 1, "file.obj");
  }

  if(VAR_7->fd){
      FUNC_5(VAR_7->fd);

      VAR_7->fd = 0;
  }


  FUNC_1( VAR_5, VAR_2, VAR_4 );
  VAR_4 = VAR_1;

  return 0;
}
