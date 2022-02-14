
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nec; int sjis; int euc; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (int ,char const*,int) ;
 int FUNC_2 (int ,char const*,int) ;

__attribute__((used)) static void
FUNC_3(const unsigned char *VAR_5, unsigned char *VAR_6, int VAR_7)
{
 int VAR_8,
    VAR_9,
    VAR_10,
    VAR_11,
    VAR_12;
 int VAR_13;

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
  VAR_13 = FUNC_1(VAR_1, (const char *) VAR_5, VAR_7);
  if (VAR_13 < 0)
   FUNC_2(VAR_1,
         (const char *) VAR_5, VAR_7);
  if (VAR_8 >= 0xa1 && VAR_8 <= 0xdf)
  {

   *VAR_6++ = VAR_2;
   *VAR_6++ = VAR_8;
  }
  else
  {



   VAR_9 = VAR_5[1];
   VAR_11 = (VAR_8 << 8) + VAR_9;
   if (VAR_11 >= 0xed40 && VAR_11 < 0xf040)
   {

    for (VAR_10 = 0;; VAR_10++)
    {
     VAR_12 = VAR_4[VAR_10].nec;
     if (VAR_12 == 0xffff)
      break;
     if (VAR_12 == VAR_11)
     {
      VAR_11 = VAR_4[VAR_10].sjis;
      VAR_8 = (VAR_11 >> 8) & 0xff;
      VAR_9 = VAR_11 & 0xff;
     }
    }
   }

   if (VAR_11 < 0xeb3f)
   {

    *VAR_6++ = ((VAR_8 & 0x3f) << 1) + 0x9f + (VAR_9 > 0x9e);
    *VAR_6++ = VAR_9 + ((VAR_9 > 0x9e) ? 2 : 0x60) + (VAR_9 < 0x80);
   }
   else if ((VAR_11 >= 0xeb40 && VAR_11 < 0xf040) || (VAR_11 >= 0xfc4c && VAR_11 <= 0xfcfc))
   {

    *VAR_6++ = VAR_0 >> 8;
    *VAR_6++ = VAR_0 & 0xff;
   }
   else if (VAR_11 >= 0xf040 && VAR_11 < 0xf540)
   {




    VAR_8 -= 0x6f;
    *VAR_6++ = ((VAR_8 & 0x3f) << 1) + 0xf3 + (VAR_9 > 0x9e);
    *VAR_6++ = VAR_9 + ((VAR_9 > 0x9e) ? 2 : 0x60) + (VAR_9 < 0x80);
   }
   else if (VAR_11 >= 0xf540 && VAR_11 < 0xfa40)
   {




    *VAR_6++ = VAR_3;
    VAR_8 -= 0x74;
    *VAR_6++ = ((VAR_8 & 0x3f) << 1) + 0xf3 + (VAR_9 > 0x9e);
    *VAR_6++ = VAR_9 + ((VAR_9 > 0x9e) ? 2 : 0x60) + (VAR_9 < 0x80);
   }
   else if (VAR_11 >= 0xfa40)
   {




    for (VAR_10 = 0;; VAR_10++)
    {
     VAR_12 = VAR_4[VAR_10].sjis;
     if (VAR_12 == 0xffff)
      break;
     if (VAR_12 == VAR_11)
     {
      VAR_11 = VAR_4[VAR_10].euc;
      if (VAR_11 >= 0x8f0000)
      {
       *VAR_6++ = VAR_3;
       *VAR_6++ = 0x80 | ((VAR_11 & 0xff00) >> 8);
       *VAR_6++ = 0x80 | (VAR_11 & 0xff);
      }
      else
      {
       *VAR_6++ = 0x80 | (VAR_11 >> 8);
       *VAR_6++ = 0x80 | (VAR_11 & 0xff);
      }
     }
    }
   }
  }
  VAR_5 += VAR_13;
  VAR_7 -= VAR_13;
 }
 *VAR_6 = '\0';
}
