
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned short code; int peer; } ;
typedef TYPE_1__ codes_t ;



__attribute__((used)) static unsigned short FUNC_0
   (const codes_t *VAR_0, int VAR_1, unsigned short VAR_2)
{
 int VAR_3,
    VAR_4,
    VAR_5,
    VAR_6;

 VAR_3 = 0;
 VAR_4 = VAR_1 >> 1;

 for (; VAR_3 <= VAR_1; VAR_4 = (VAR_3 + VAR_1) >> 1)
 {
  if ((VAR_0[VAR_4].code <= VAR_2) && (VAR_0[VAR_4 + 1].code > VAR_2))
  {
   if (0 == VAR_0[VAR_4].peer)
    return 0;
   if (VAR_2 >= 0xa140U)
   {

    VAR_6 = ((VAR_2 & 0xff00) - (VAR_0[VAR_4].code & 0xff00)) >> 8;
    VAR_1 = VAR_2 & 0x00ff;
    VAR_3 = VAR_0[VAR_4].code & 0x00ff;
    VAR_5 = VAR_6 * 0x9d + VAR_1 - VAR_3 +
     (VAR_1 >= 0xa1 ? (VAR_3 >= 0xa1 ? 0 : -0x22)
      : (VAR_3 >= 0xa1 ? +0x22 : 0));
    VAR_6 = (VAR_0[VAR_4].peer & 0x00ff) + VAR_5 - 0x21;
    VAR_6 = (VAR_0[VAR_4].peer & 0xff00) + ((VAR_6 / 0x5e) << 8)
     + 0x21 + VAR_6 % 0x5e;
    return VAR_6;
   }
   else
   {

    VAR_6 = ((VAR_2 & 0xff00) - (VAR_0[VAR_4].code & 0xff00)) >> 8;





    VAR_5 = VAR_6 * 0x5e
     + ((int) (VAR_2 & 0x00ff) - (int) (VAR_0[VAR_4].code & 0x00ff));





    VAR_3 = VAR_0[VAR_4].peer & 0x00ff;
    VAR_6 = VAR_3 + VAR_5 - (VAR_3 >= 0xa1 ? 0x62 : 0x40);
    VAR_3 = VAR_6 % 0x9d;
    VAR_6 = (VAR_0[VAR_4].peer & 0xff00) + ((VAR_6 / 0x9d) << 8)
     + (VAR_3 > 0x3e ? 0x62 : 0x40) + VAR_3;
    return VAR_6;
   }
  }
  else if (VAR_0[VAR_4].code > VAR_2)
   VAR_1 = VAR_4 - 1;
  else
   VAR_3 = VAR_4 + 1;
 }

 return 0;
}
