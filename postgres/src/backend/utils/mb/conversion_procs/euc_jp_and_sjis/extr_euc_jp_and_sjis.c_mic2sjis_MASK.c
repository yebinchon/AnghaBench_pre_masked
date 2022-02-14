
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
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_1 (int ,char const*,int) ;
 int FUNC_2 (int ,char const*,int) ;
 int FUNC_3 (int ,int ,char const*,int) ;

__attribute__((used)) static void
FUNC_4(const unsigned char *VAR_7, unsigned char *VAR_8, int VAR_9)
{
 int VAR_10,
    VAR_11,
    VAR_12,
    VAR_13;

 while (VAR_9 > 0)
 {
  VAR_10 = *VAR_7;
  if (!FUNC_0(VAR_10))
  {

   if (VAR_10 == 0)
    FUNC_2(VAR_4,
          (const char *) VAR_7, VAR_9);
   *VAR_8++ = VAR_10;
   VAR_7++;
   VAR_9--;
   continue;
  }
  VAR_13 = FUNC_1(VAR_4, (const char *) VAR_7, VAR_9);
  if (VAR_13 < 0)
   FUNC_2(VAR_4,
         (const char *) VAR_7, VAR_9);
  if (VAR_10 == VAR_0)
   *VAR_8++ = VAR_7[1];
  else if (VAR_10 == VAR_1)
  {
   VAR_10 = VAR_7[1];
   VAR_11 = VAR_7[2];
   VAR_12 = (VAR_10 << 8) | (VAR_11 & 0xff);
   if (VAR_12 >= 0xf5a1)
   {

    VAR_10 -= 0x54;
    *VAR_8++ = ((VAR_10 - 0xa1) >> 1) + ((VAR_10 < 0xdf) ? 0x81 : 0xc1) + 0x6f;
   }
   else
    *VAR_8++ = ((VAR_10 - 0xa1) >> 1) + ((VAR_10 < 0xdf) ? 0x81 : 0xc1);
   *VAR_8++ = VAR_11 - ((VAR_10 & 1) ? ((VAR_11 < 0xe0) ? 0x61 : 0x60) : 2);
  }
  else if (VAR_10 == VAR_2)
  {
   int VAR_14,
      VAR_15;

   VAR_10 = VAR_7[1];
   VAR_11 = VAR_7[2];
   VAR_12 = VAR_10 << 8 | VAR_11;
   if (VAR_12 >= 0xf5a1)
   {

    VAR_10 -= 0x54;
    *VAR_8++ = ((VAR_10 - 0xa1) >> 1) + ((VAR_10 < 0xdf) ? 0x81 : 0xc1) + 0x74;
    *VAR_8++ = VAR_11 - ((VAR_10 & 1) ? ((VAR_11 < 0xe0) ? 0x61 : 0x60) : 2);
   }
   else
   {

    for (VAR_14 = 0;; VAR_14++)
    {
     VAR_15 = VAR_6[VAR_14].euc & 0xffff;
     if (VAR_15 == 0xffff)
     {
      *VAR_8++ = VAR_3 >> 8;
      *VAR_8++ = VAR_3 & 0xff;
      break;
     }
     if (VAR_15 == VAR_12)
     {
      VAR_12 = VAR_6[VAR_14].sjis;
      *VAR_8++ = VAR_12 >> 8;
      *VAR_8++ = VAR_12 & 0xff;
      break;
     }
    }
   }
  }
  else
   FUNC_3(VAR_4, VAR_5,
            (const char *) VAR_7, VAR_9);
  VAR_7 += VAR_13;
  VAR_9 -= VAR_13;
 }
 *VAR_8 = '\0';
}
