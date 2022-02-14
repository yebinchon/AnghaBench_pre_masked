
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int bfd_boolean ;
struct TYPE_3__ {int flags; int value; } ;
typedef TYPE_1__ aarch64_sys_reg ;
typedef int aarch64_feature_set ;


 int FUNC_0 (int const,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

bfd_boolean
FUNC_1 (const aarch64_feature_set VAR_6,
     const aarch64_sys_reg *VAR_7)
{
  if (!(VAR_7->flags & VAR_4))
    return VAR_5;


  if (VAR_7->value == 0x04
      && !FUNC_0 (VAR_6, VAR_0))
    return VAR_3;


  if (VAR_7->value == 0x03
      && !FUNC_0 (VAR_6, VAR_1))
    return VAR_3;


  if (VAR_7->value == 0x1a
      && !FUNC_0 (VAR_6, VAR_2))
    return VAR_3;

  return VAR_5;
}
