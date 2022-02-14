
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfs_stat {int dummy; } ;
typedef int int32_t ;
typedef int FILINFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,int *) ;
 int VAR_3 ;
 int FUNC_1 (int *,struct vfs_stat*) ;

__attribute__((used)) static int32_t FUNC_2( const char *VAR_4, struct vfs_stat *VAR_5 )
{
  FILINFO VAR_6;

  if (VAR_0 == (VAR_3 = FUNC_0( VAR_4, &VAR_6 ))) {
    FUNC_1( &VAR_6, VAR_5 );

    return VAR_2;
  } else {
    return VAR_1;
  }
}
