
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfs_file {int dummy; } ;
typedef int int32_t ;
typedef int FSIZE_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct vfs_file const*) ;
 int VAR_1 ;



 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int32_t FUNC_4( const struct vfs_file *VAR_4, int32_t VAR_5, int VAR_6 )
{
  FUNC_0(VAR_4);
  FSIZE_t VAR_7;

  switch (VAR_6) {
  default:
  case 128:
    VAR_7 = VAR_5 > 0 ? VAR_5 : 0;
    break;
  case 130:
    VAR_7 = FUNC_3( VAR_2 );
    VAR_7 += VAR_5;
    break;
  case 129:
    VAR_7 = FUNC_2( VAR_2 );
    VAR_7 += VAR_5 < 0 ? VAR_5 : 0;
    break;
  };

  VAR_3 = FUNC_1( VAR_2, VAR_7 );
  VAR_7 = FUNC_3( VAR_2 );

  return VAR_3 == VAR_0 ? VAR_7 : VAR_1;
}
