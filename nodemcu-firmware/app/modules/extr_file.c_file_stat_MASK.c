
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sec; int min; int hour; int day; int mon; int year; } ;
struct vfs_stat {TYPE_1__ tm; scalar_t__ tm_valid; int is_arch; int is_sys; int is_hidden; int is_rdonly; int is_dir; int name; int size; } ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int *,int,int,char*) ;
 char* FUNC_1 (int *,int,size_t*) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int,char*) ;
 size_t FUNC_8 (char const*) ;
 scalar_t__ FUNC_9 (char*,struct vfs_stat*) ;

__attribute__((used)) static int FUNC_10( lua_State* VAR_8 )
{
  size_t VAR_9;
  const char *VAR_10 = FUNC_1( VAR_8, 1, &VAR_9 );
  FUNC_0( VAR_8, FUNC_8(VAR_10) <= VAR_6 && FUNC_8(VAR_10) == VAR_9, 1, "filename invalid" );

  struct vfs_stat VAR_11;
  if (FUNC_9( (char *)VAR_10, &VAR_11 ) != VAR_7) {
    FUNC_5( VAR_8 );
    return 1;
  }

  FUNC_2( VAR_8, 0, 7 );

  FUNC_4( VAR_8, VAR_11.size );
  FUNC_7( VAR_8, -2, "size" );

  FUNC_6( VAR_8, VAR_11.name );
  FUNC_7( VAR_8, -2, "name" );

  FUNC_3( VAR_8, VAR_11.is_dir );
  FUNC_7( VAR_8, -2, "is_dir" );

  FUNC_3( VAR_8, VAR_11.is_rdonly );
  FUNC_7( VAR_8, -2, "is_rdonly" );

  FUNC_3( VAR_8, VAR_11.is_hidden );
  FUNC_7( VAR_8, -2, "is_hidden" );

  FUNC_3( VAR_8, VAR_11.is_sys );
  FUNC_7( VAR_8, -2, "is_sys" );

  FUNC_3( VAR_8, VAR_11.is_arch );
  FUNC_7( VAR_8, -2, "is_arch" );


  FUNC_2( VAR_8, 0, 6 );

  FUNC_4( VAR_8, VAR_11.tm_valid ? VAR_11.tm.year : VAR_5 );
  FUNC_7( VAR_8, -2, "year" );

  FUNC_4( VAR_8, VAR_11.tm_valid ? VAR_11.tm.mon : VAR_3 );
  FUNC_7( VAR_8, -2, "mon" );

  FUNC_4( VAR_8, VAR_11.tm_valid ? VAR_11.tm.day : VAR_0 );
  FUNC_7( VAR_8, -2, "day" );

  FUNC_4( VAR_8, VAR_11.tm_valid ? VAR_11.tm.hour : VAR_1 );
  FUNC_7( VAR_8, -2, "hour" );

  FUNC_4( VAR_8, VAR_11.tm_valid ? VAR_11.tm.min : VAR_2 );
  FUNC_7( VAR_8, -2, "min" );

  FUNC_4( VAR_8, VAR_11.tm_valid ? VAR_11.tm.sec : VAR_4 );
  FUNC_7( VAR_8, -2, "sec" );

  FUNC_7( VAR_8, -2, "time" );

  return 1;
}
