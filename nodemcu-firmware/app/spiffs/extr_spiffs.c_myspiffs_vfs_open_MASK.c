
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vfs_file ;
struct TYPE_2__ {int * fns; int fs_type; } ;
struct myvfs_file {TYPE_1__ vfs_file; int fh; } ;


 int FUNC_0 (int *,char const*,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct myvfs_file*) ;
 int VAR_1 ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_2 ;

__attribute__((used)) static vfs_file *FUNC_4( const char *VAR_3, const char *VAR_4 ) {
  struct myvfs_file *VAR_5;
  int VAR_6 = FUNC_2( VAR_4 );

  if ((VAR_5 = (struct myvfs_file *)FUNC_3( sizeof( struct myvfs_file ) ))) {
    if (0 < (VAR_5->fh = FUNC_0( &VAR_1, VAR_3, VAR_6, 0 ))) {
      VAR_5->vfs_file.fs_type = VAR_0;
      VAR_5->vfs_file.fns = &VAR_2;
      return (vfs_file *)VAR_5;
    } else {
      FUNC_1( VAR_5 );
    }
  }

  return ((void*)0);
}
