
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned short FUNC_0 (unsigned short,unsigned short) ;
 int FUNC_1 (unsigned short) ;
 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,char const*,int) ;
 int FUNC_3 (int ,char const*,int) ;
 int FUNC_4 (int ,int ,char const*,int) ;

__attribute__((used)) static void
FUNC_5(const unsigned char *VAR_5, unsigned char *VAR_6, int VAR_7)
{
 unsigned short VAR_8;
 unsigned short VAR_9,
    VAR_10;
 int VAR_11;

 while (VAR_7 > 0)
 {
  VAR_8 = *VAR_5;
  if (!FUNC_1(VAR_8))
  {

   if (VAR_8 == 0)
    FUNC_3(VAR_4,
          (const char *) VAR_5, VAR_7);
   *VAR_6++ = VAR_8;
   VAR_5++;
   VAR_7--;
   continue;
  }
  VAR_11 = FUNC_2(VAR_4, (const char *) VAR_5, VAR_7);
  if (VAR_11 < 0)
   FUNC_3(VAR_4,
         (const char *) VAR_5, VAR_7);
  if (VAR_8 == VAR_1 || VAR_8 == VAR_2 || VAR_8 == VAR_0)
  {
   if (VAR_8 == VAR_0)
   {
    VAR_8 = VAR_5[1];
    VAR_10 = (VAR_5[2] << 8) | VAR_5[3];
   }
   else
   {
    VAR_10 = (VAR_5[1] << 8) | VAR_5[2];
   }
   VAR_9 = FUNC_0(VAR_10, VAR_8);
   if (VAR_9 == 0)
    FUNC_4(VAR_4, VAR_3,
             (const char *) VAR_5, VAR_7);
   *VAR_6++ = (VAR_9 >> 8) & 0x00ff;
   *VAR_6++ = VAR_9 & 0x00ff;
  }
  else
   FUNC_4(VAR_4, VAR_3,
            (const char *) VAR_5, VAR_7);
  VAR_5 += VAR_11;
  VAR_7 -= VAR_11;
 }
 *VAR_6 = '\0';
}
