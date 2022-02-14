
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int bfd_boolean ;
struct TYPE_3__ {int flags; scalar_t__ value; } ;
typedef TYPE_1__ aarch64_sys_ins_reg ;
typedef int aarch64_feature_set ;


 int FUNC_0 (int const,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int,int ,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

extern bfd_boolean
FUNC_2 (const aarch64_feature_set VAR_7,
     const aarch64_sys_ins_reg *VAR_8)
{
  if (!(VAR_8->flags & VAR_5))
    return VAR_6;


  if (VAR_8->value == FUNC_1 (3, VAR_2, VAR_1, 1)
      && !FUNC_0 (VAR_7, VAR_0))
    return VAR_4;


  if ((VAR_8->value == FUNC_1 (0, VAR_2, VAR_3, 0)
       || VAR_8->value == FUNC_1 (0, VAR_2, VAR_3, 1))
      && !FUNC_0 (VAR_7, VAR_0))
    return VAR_4;

  return VAR_6;
}
