
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct vfs_stat {int dummy; } ;
struct vfs_dir {int dummy; } ;
typedef int int32_t ;
struct TYPE_4__ {char* fname; } ;
typedef TYPE_1__ FILINFO ;


 int VAR_0 ;
 int FUNC_0 (struct vfs_dir const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*,struct vfs_stat*) ;

__attribute__((used)) static int32_t FUNC_3( const struct vfs_dir *VAR_5, struct vfs_stat *VAR_6 )
{
  FUNC_0(VAR_5);
  FILINFO VAR_7;

  if (VAR_0 == (VAR_4 = FUNC_1( VAR_3, &VAR_7 ))) {

    if (VAR_7.fname[0] != '\0') {
      FUNC_2( &VAR_7, VAR_6 );

      return VAR_2;
    }
  }

  return VAR_1;
}
