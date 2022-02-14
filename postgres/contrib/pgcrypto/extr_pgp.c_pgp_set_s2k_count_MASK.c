
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ s2k_mode; int s2k_count; } ;
typedef TYPE_1__ PGP_Context ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_0(PGP_Context *VAR_3, int VAR_4)
{
 if (VAR_3->s2k_mode == VAR_0 && VAR_4 >= 1024 && VAR_4 <= 65011712)
 {
  VAR_3->s2k_count = VAR_4;
  return VAR_2;
 }
 return VAR_1;
}
