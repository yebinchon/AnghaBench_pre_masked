
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int euc; int sjis; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (int ,char const*,int) ;
 int FUNC_2 (int ,char const*,int) ;

__attribute__((used)) static void
FUNC_3(const unsigned char *VAR_5, unsigned char *VAR_6, int VAR_7)
{
 int VAR_8,
    VAR_9,
    VAR_10;
 int VAR_11;

 while (VAR_7 > 0)
 {
  VAR_8 = *VAR_5;
  if (!FUNC_0(VAR_8))
  {

   if (VAR_8 == 0)
    FUNC_2(VAR_1,
          (const char *) VAR_5, VAR_7);
   *VAR_6++ = VAR_8;
   VAR_5++;
   VAR_7--;
   continue;
  }
  VAR_11 = FUNC_1(VAR_1, (const char *) VAR_5, VAR_7);
  if (VAR_11 < 0)
   FUNC_2(VAR_1,
         (const char *) VAR_5, VAR_7);
  if (VAR_8 == VAR_2)
  {

   *VAR_6++ = VAR_5[1];
  }
  else if (VAR_8 == VAR_3)
  {

   VAR_8 = VAR_5[1];
   VAR_9 = VAR_5[2];
   VAR_10 = VAR_8 << 8 | VAR_9;
   if (VAR_10 >= 0xf5a1)
   {

    VAR_8 -= 0x54;
    *VAR_6++ = ((VAR_8 - 0xa1) >> 1) + ((VAR_8 < 0xdf) ? 0x81 : 0xc1) + 0x74;
    *VAR_6++ = VAR_9 - ((VAR_8 & 1) ? ((VAR_9 < 0xe0) ? 0x61 : 0x60) : 2);
   }
   else
   {
    int VAR_12,
       VAR_13;


    for (VAR_12 = 0;; VAR_12++)
    {
     VAR_13 = VAR_4[VAR_12].euc & 0xffff;
     if (VAR_13 == 0xffff)
     {
      *VAR_6++ = VAR_0 >> 8;
      *VAR_6++ = VAR_0 & 0xff;
      break;
     }
     if (VAR_13 == VAR_10)
     {
      VAR_10 = VAR_4[VAR_12].sjis;
      *VAR_6++ = VAR_10 >> 8;
      *VAR_6++ = VAR_10 & 0xff;
      break;
     }
    }
   }
  }
  else
  {

   VAR_9 = VAR_5[1];
   VAR_10 = (VAR_8 << 8) | (VAR_9 & 0xff);
   if (VAR_10 >= 0xf5a1)
   {

    VAR_8 -= 0x54;
    *VAR_6++ = ((VAR_8 - 0xa1) >> 1) + ((VAR_8 < 0xdf) ? 0x81 : 0xc1) + 0x6f;
   }
   else
    *VAR_6++ = ((VAR_8 - 0xa1) >> 1) + ((VAR_8 < 0xdf) ? 0x81 : 0xc1);
   *VAR_6++ = VAR_9 - ((VAR_8 & 1) ? ((VAR_9 < 0xe0) ? 0x61 : 0x60) : 2);
  }
  VAR_5 += VAR_11;
  VAR_7 -= VAR_11;
 }
 *VAR_6 = '\0';
}
