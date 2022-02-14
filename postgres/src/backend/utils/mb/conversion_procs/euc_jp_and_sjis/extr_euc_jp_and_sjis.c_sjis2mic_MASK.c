
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nec; int sjis; int euc; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char const) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_3 (int ,char const*,int) ;

__attribute__((used)) static void
FUNC_4(const unsigned char *VAR_6, unsigned char *VAR_7, int VAR_8)
{
 int VAR_9,
    VAR_10,
    VAR_11,
    VAR_12,
    VAR_13;

 while (VAR_8 > 0)
 {
  VAR_9 = *VAR_6;
  if (VAR_9 >= 0xa1 && VAR_9 <= 0xdf)
  {

   *VAR_7++ = VAR_0;
   *VAR_7++ = VAR_9;
   VAR_6++;
   VAR_8--;
  }
  else if (FUNC_2(VAR_9))
  {



   if (VAR_8 < 2 || !FUNC_0(VAR_9) || !FUNC_1(VAR_6[1]))
    FUNC_3(VAR_4, (const char *) VAR_6, VAR_8);
   VAR_10 = VAR_6[1];
   VAR_12 = (VAR_9 << 8) + VAR_10;
   if (VAR_12 >= 0xed40 && VAR_12 < 0xf040)
   {

    for (VAR_11 = 0;; VAR_11++)
    {
     VAR_13 = VAR_5[VAR_11].nec;
     if (VAR_13 == 0xffff)
      break;
     if (VAR_13 == VAR_12)
     {
      VAR_12 = VAR_5[VAR_11].sjis;
      VAR_9 = (VAR_12 >> 8) & 0xff;
      VAR_10 = VAR_12 & 0xff;
     }
    }
   }

   if (VAR_12 < 0xeb3f)
   {

    *VAR_7++ = VAR_1;
    *VAR_7++ = ((VAR_9 & 0x3f) << 1) + 0x9f + (VAR_10 > 0x9e);
    *VAR_7++ = VAR_10 + ((VAR_10 > 0x9e) ? 2 : 0x60) + (VAR_10 < 0x80);
   }
   else if ((VAR_12 >= 0xeb40 && VAR_12 < 0xf040) || (VAR_12 >= 0xfc4c && VAR_12 <= 0xfcfc))
   {

    *VAR_7++ = VAR_1;
    *VAR_7++ = VAR_3 >> 8;
    *VAR_7++ = VAR_3 & 0xff;
   }
   else if (VAR_12 >= 0xf040 && VAR_12 < 0xf540)
   {




    *VAR_7++ = VAR_1;
    VAR_9 -= 0x6f;
    *VAR_7++ = ((VAR_9 & 0x3f) << 1) + 0xf3 + (VAR_10 > 0x9e);
    *VAR_7++ = VAR_10 + ((VAR_10 > 0x9e) ? 2 : 0x60) + (VAR_10 < 0x80);
   }
   else if (VAR_12 >= 0xf540 && VAR_12 < 0xfa40)
   {




    *VAR_7++ = VAR_2;
    VAR_9 -= 0x74;
    *VAR_7++ = ((VAR_9 & 0x3f) << 1) + 0xf3 + (VAR_10 > 0x9e);
    *VAR_7++ = VAR_10 + ((VAR_10 > 0x9e) ? 2 : 0x60) + (VAR_10 < 0x80);
   }
   else if (VAR_12 >= 0xfa40)
   {



    for (VAR_11 = 0;; VAR_11++)
    {
     VAR_13 = VAR_5[VAR_11].sjis;
     if (VAR_13 == 0xffff)
      break;
     if (VAR_13 == VAR_12)
     {
      VAR_12 = VAR_5[VAR_11].euc;
      if (VAR_12 >= 0x8f0000)
      {
       *VAR_7++ = VAR_2;
       *VAR_7++ = 0x80 | ((VAR_12 & 0xff00) >> 8);
       *VAR_7++ = 0x80 | (VAR_12 & 0xff);
      }
      else
      {
       *VAR_7++ = VAR_1;
       *VAR_7++ = 0x80 | (VAR_12 >> 8);
       *VAR_7++ = 0x80 | (VAR_12 & 0xff);
      }
     }
    }
   }
   VAR_6 += 2;
   VAR_8 -= 2;
  }
  else
  {
   if (VAR_9 == 0)
    FUNC_3(VAR_4, (const char *) VAR_6, VAR_8);
   *VAR_7++ = VAR_9;
   VAR_6++;
   VAR_8--;
  }
 }
 *VAR_7 = '\0';
}
