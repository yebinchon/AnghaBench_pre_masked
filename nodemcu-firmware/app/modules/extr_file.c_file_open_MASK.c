
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_2__ {scalar_t__ fd; } ;
typedef TYPE_1__ file_fd_ud ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int,int,char*) ;
 char* FUNC_1 (int *,int,size_t*) ;
 int FUNC_2 (int *,char*) ;
 char* FUNC_3 (int *,int,char*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,int ) ;
 scalar_t__ FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;
 size_t FUNC_10 (char const*) ;
 char* FUNC_11 (char const*) ;
 scalar_t__ FUNC_12 (char const*,char const*) ;

__attribute__((used)) static int FUNC_13( lua_State* VAR_5 )
{
  size_t VAR_6;


  FUNC_5( VAR_5, VAR_2, VAR_4 );
  VAR_4 = VAR_1;

  const char *VAR_7 = FUNC_1( VAR_5, 1, &VAR_6 );
  const char *VAR_8 = FUNC_11( VAR_7 );
  FUNC_0(VAR_5, FUNC_10(VAR_8) <= VAR_0 && FUNC_10(VAR_7) == VAR_6, 1, "filename invalid");

  const char *VAR_9 = FUNC_3(VAR_5, 2, "r");

  VAR_3 = FUNC_12(VAR_7, VAR_9);

  if(!VAR_3){
    FUNC_7(VAR_5);
  } else {
    file_fd_ud *VAR_10 = (file_fd_ud *) FUNC_6( VAR_5, sizeof( file_fd_ud ) );
    VAR_10->fd = VAR_3;
    FUNC_2( VAR_5, "file.obj" );
    FUNC_9( VAR_5, -2 );


    FUNC_8( VAR_5, -1 );
    VAR_4 = FUNC_4( VAR_5, VAR_2 );
  }
  return 1;
}
