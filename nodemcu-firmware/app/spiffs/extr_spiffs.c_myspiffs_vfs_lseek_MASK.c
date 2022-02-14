
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfs_file {int dummy; } ;
typedef scalar_t__ sint32_t ;


 int FUNC_0 (struct vfs_file const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,int ,scalar_t__,int) ;
 scalar_t__ VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static sint32_t FUNC_2( const struct vfs_file *VAR_6, sint32_t VAR_7, int VAR_8 ) {
  FUNC_0(VAR_6);
  int VAR_9;

  switch (VAR_8) {
  default:
  case 128:
    VAR_9 = VAR_2;
    break;
  case 130:
    VAR_9 = VAR_0;
    break;
  case 129:
    VAR_9 = VAR_1;
    break;
  }

  sint32_t VAR_10 = FUNC_1( &VAR_5, VAR_4, VAR_7, VAR_9 );
  return VAR_10 >= 0 ? VAR_10 : VAR_3;
}
