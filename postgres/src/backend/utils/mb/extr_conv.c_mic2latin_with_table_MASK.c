
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char const VAR_0 ;
 int FUNC_0 (unsigned char const) ;
 int VAR_1 ;
 int FUNC_1 (unsigned char const*) ;
 int FUNC_2 (int ,char const*,int) ;
 int FUNC_3 (int ,int,char const*,int) ;

void
FUNC_4(const unsigned char *VAR_2,
      unsigned char *VAR_3,
      int VAR_4,
      int VAR_5,
      int VAR_6,
      const unsigned char *VAR_7)
{
 unsigned char VAR_8,
    VAR_9;

 while (VAR_4 > 0)
 {
  VAR_8 = *VAR_2;
  if (VAR_8 == 0)
   FUNC_2(VAR_1, (const char *) VAR_2, VAR_4);
  if (!FUNC_0(VAR_8))
  {

   *VAR_3++ = VAR_8;
   VAR_2++;
   VAR_4--;
  }
  else
  {
   int VAR_10 = FUNC_1(VAR_2);

   if (VAR_4 < VAR_10)
    FUNC_2(VAR_1, (const char *) VAR_2,
          VAR_4);
   if (VAR_10 != 2 || VAR_8 != VAR_5 || !FUNC_0(VAR_2[1]) ||
    (VAR_9 = VAR_7[VAR_2[1] - VAR_0]) == 0)
   {
    FUNC_3(VAR_1, VAR_6,
             (const char *) VAR_2, VAR_4);
    break;
   }
   *VAR_3++ = VAR_9;
   VAR_2 += 2;
   VAR_4 -= 2;
  }
 }
 *VAR_3 = '\0';
}
