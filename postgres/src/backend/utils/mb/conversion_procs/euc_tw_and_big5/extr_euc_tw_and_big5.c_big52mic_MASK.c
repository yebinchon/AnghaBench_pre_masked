
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned short FUNC_0 (unsigned short,unsigned char*) ;
 int FUNC_1 (unsigned short) ;
 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
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
 unsigned char VAR_11;
 int VAR_12;

 while (VAR_7 > 0)
 {
  VAR_8 = *VAR_5;
  if (!FUNC_1(VAR_8))
  {

   if (VAR_8 == 0)
    FUNC_3(VAR_3,
          (const char *) VAR_5, VAR_7);
   *VAR_6++ = VAR_8;
   VAR_5++;
   VAR_7--;
   continue;
  }
  VAR_12 = FUNC_2(VAR_3, (const char *) VAR_5, VAR_7);
  if (VAR_12 < 0)
   FUNC_3(VAR_3,
         (const char *) VAR_5, VAR_7);
  VAR_9 = (VAR_8 << 8) | VAR_5[1];
  VAR_10 = FUNC_0(VAR_9, &VAR_11);
  if (VAR_11 != 0)
  {

   if (VAR_11 == VAR_1 || VAR_11 == VAR_2)
    *VAR_6++ = VAR_0;
   *VAR_6++ = VAR_11;
   *VAR_6++ = (VAR_10 >> 8) & 0x00ff;
   *VAR_6++ = VAR_10 & 0x00ff;
  }
  else
   FUNC_4(VAR_3, VAR_4,
            (const char *) VAR_5, VAR_7);
  VAR_5 += VAR_12;
  VAR_7 -= VAR_12;
 }
 *VAR_6 = '\0';
}
