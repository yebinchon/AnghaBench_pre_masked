
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int (* _deselect ) () ;int (* _select ) () ;} ;
struct TYPE_4__ {TYPE_1__ CS; } ;


 int FUNC_0 (int ,int*,int) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 () ;

void FUNC_5(uint32_t VAR_4, uint8_t VAR_5 )
{
   uint8_t VAR_6[4];

   FUNC_1();
   VAR_1.CS._select();

   VAR_4 |= (VAR_3 | VAR_2);





   VAR_6[0] = (VAR_4 & 0x00FF0000) >> 16;
   VAR_6[1] = (VAR_4 & 0x0000FF00) >> 8;
   VAR_6[2] = (VAR_4 & 0x000000FF) >> 0;
   VAR_6[3] = VAR_5;
   FUNC_0(VAR_0, VAR_6, 4);

   VAR_1.CS._deselect();
   FUNC_2();
}
