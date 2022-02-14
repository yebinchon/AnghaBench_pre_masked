
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int s2k_mode; } ;
typedef TYPE_1__ PGP_Context ;





 int VAR_0 ;
 int VAR_1 ;

int
FUNC_0(PGP_Context *VAR_2, int VAR_3)
{
 int VAR_4 = VAR_1;

 switch (VAR_3)
 {
  case 128:
  case 129:
  case 130:
   VAR_2->s2k_mode = VAR_3;
   break;
  default:
   VAR_4 = VAR_0;
   break;
 }
 return VAR_4;
}
