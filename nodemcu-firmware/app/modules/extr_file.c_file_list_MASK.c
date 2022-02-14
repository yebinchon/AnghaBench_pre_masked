
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vfs_dir ;
struct vfs_stat {int name; int size; } ;
typedef int lua_State ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int,char*) ;
 char* FUNC_1 (int *,int,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int,int,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int,int ) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (char*) ;
 scalar_t__ FUNC_13 (int *,struct vfs_stat*) ;

__attribute__((used)) static int FUNC_14( lua_State* VAR_1 )
{
  vfs_dir *VAR_2;
  const char *VAR_3;
  struct vfs_stat VAR_4;
  int VAR_5;

  FUNC_10(VAR_1, 1);
  VAR_3 = FUNC_1(VAR_1, 1, ((void*)0));

  VAR_2 = FUNC_12("");
  if (VAR_2 == ((void*)0)) {
    return 0;
  }

  FUNC_4( VAR_1 );

  if (VAR_3) {




    FUNC_0( VAR_1, 1, "match" );
  }

  while (FUNC_13(VAR_2, &VAR_4) == VAR_0) {
    if (VAR_3) {
      FUNC_10( VAR_1, 3 );


      FUNC_8( VAR_1, 3 );
      FUNC_7( VAR_1, VAR_4.name );
      FUNC_8( VAR_1, 1 );
      VAR_5 = FUNC_5( VAR_1, 2, 1, 0 );
      if (VAR_5 != 0) {
        FUNC_11(VAR_2);
        FUNC_2( VAR_1 );
      }
      if (FUNC_3( VAR_1, -1 )) {
        continue;
      }
    }
    FUNC_6( VAR_1, VAR_4.size );
    FUNC_9( VAR_1, 2, VAR_4.name );
  }


  FUNC_10( VAR_1, 2 );
  FUNC_11(VAR_2);
  return 1;
}
