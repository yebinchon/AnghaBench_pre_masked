
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* state; scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_1__ fz_arc4 ;



void
FUNC_0(fz_arc4 *VAR_0, const unsigned char *VAR_1, size_t VAR_2)
{
 unsigned int VAR_3, VAR_4;
 size_t VAR_5;
 unsigned int VAR_6;
 unsigned char *VAR_7;
 unsigned int VAR_8;

 VAR_7 = VAR_0->state;

 VAR_0->x = 0;
 VAR_0->y = 0;

 for (VAR_8 = 0; VAR_8 < 256; VAR_8++)
 {
  VAR_7[VAR_8] = VAR_8;
 }

 VAR_5 = 0;
 VAR_6 = 0;

 for (VAR_8 = 0; VAR_8 < 256; VAR_8++)
 {
  VAR_3 = VAR_7[VAR_8];
  VAR_6 = (VAR_6 + VAR_1[VAR_5] + VAR_3) & 0xff;
  VAR_4 = VAR_7[VAR_6];

  VAR_7[VAR_6] = VAR_3;
  VAR_7[VAR_8] = VAR_4;

  if (++VAR_5 >= VAR_2)
  {
   VAR_5 = 0;
  }
 }
}
