
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vfs_file ;
struct TYPE_2__ {int * fns; int fs_type; } ;
struct myvfs_file {TYPE_1__ vfs_file; int fp; } ;
typedef int BYTE ;


 int const VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char const*,int const) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct myvfs_file*) ;
 int VAR_3 ;
 struct myvfs_file* FUNC_4 (int) ;
 int VAR_4 ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static vfs_file *FUNC_6( const char *VAR_5, const char *VAR_6 )
{
  struct myvfs_file *VAR_7;
  const BYTE VAR_8 = FUNC_5( VAR_6 );

  if ((VAR_7 = FUNC_4( sizeof( struct myvfs_file ) ))) {
    if (VAR_1 == (VAR_3 = FUNC_1( &(VAR_7->fp), VAR_5, VAR_8 ))) {

      if (VAR_8 & VAR_0)
        FUNC_0( &(VAR_7->fp), FUNC_2( &(VAR_7->fp) ) );

      VAR_7->vfs_file.fs_type = VAR_2;
      VAR_7->vfs_file.fns = &VAR_4;
      return (vfs_file *)VAR_7;
    } else {
      FUNC_3( VAR_7 );
    }
  }

  return ((void*)0);
}
