
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vfs_dir ;
struct TYPE_2__ {int * fns; int fs_type; } ;
struct myvfs_dir {TYPE_1__ vfs_dir; int dp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char const*) ;
 int FUNC_1 (struct myvfs_dir*) ;
 int VAR_2 ;
 struct myvfs_dir* FUNC_2 (int) ;
 int VAR_3 ;

__attribute__((used)) static vfs_dir *FUNC_3( const char *VAR_4 )
{
  struct myvfs_dir *VAR_5;

  if ((VAR_5 = FUNC_2( sizeof( struct myvfs_dir ) ))) {
    if (VAR_0 == (VAR_2 = FUNC_0( &(VAR_5->dp), VAR_4 ))) {
      VAR_5->vfs_dir.fs_type = VAR_1;
      VAR_5->vfs_dir.fns = &VAR_3;
      return (vfs_dir *)VAR_5;
    } else {
      FUNC_1( VAR_5 );
    }
  }

  return ((void*)0);
}
