
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ sb_status ;
struct TYPE_3__ {int base; } ;
typedef TYPE_1__ SB16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;

sb_status FUNC_1(SB16* VAR_3)
{
 for(VAR_2=0x200;VAR_2<0x280;VAR_2+=0x10)
  if(FUNC_0(VAR_2)==VAR_1)
  {
   VAR_3->base=VAR_2;
    return VAR_1;
  }
 return VAR_0;
}
