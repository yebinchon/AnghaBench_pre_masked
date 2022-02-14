
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_7__ {scalar_t__ x; scalar_t__ y; } ;
struct TYPE_6__ {scalar_t__ x; scalar_t__ y; } ;
struct TYPE_8__ {TYPE_2__ high; TYPE_1__ low; } ;
typedef TYPE_3__ BOX ;



__attribute__((used)) static uint8
FUNC_0(BOX *VAR_0, BOX *VAR_1)
{
 uint8 VAR_2 = 0;

 if (VAR_1->low.x > VAR_0->low.x)
  VAR_2 |= 0x8;

 if (VAR_1->high.x > VAR_0->high.x)
  VAR_2 |= 0x4;

 if (VAR_1->low.y > VAR_0->low.y)
  VAR_2 |= 0x2;

 if (VAR_1->high.y > VAR_0->high.y)
  VAR_2 |= 0x1;

 return VAR_2;
}
