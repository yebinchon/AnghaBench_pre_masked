
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vfs_dir ;
struct TYPE_2__ {int * fns; int fs_type; } ;
struct myvfs_dir {TYPE_1__ vfs_dir; int d; } ;


 scalar_t__ FUNC_0 (int *,char const*,int *) ;
 int VAR_0 ;
 int FUNC_1 (struct myvfs_dir*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_2 ;

__attribute__((used)) static vfs_dir *FUNC_3( const char *VAR_3 ){
  struct myvfs_dir *VAR_4;

  if ((VAR_4 = (struct myvfs_dir *)FUNC_2( sizeof( struct myvfs_dir ) ))) {
    if (FUNC_0( &VAR_1, VAR_3, &(VAR_4->d) )) {
      VAR_4->vfs_dir.fs_type = VAR_0;
      VAR_4->vfs_dir.fns = &VAR_2;
      return (vfs_dir *)VAR_4;
    } else {
      FUNC_1( VAR_4 );
    }
  }

  return ((void*)0);
}
