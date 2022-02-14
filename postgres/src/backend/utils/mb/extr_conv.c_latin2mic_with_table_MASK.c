
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char VAR_0 ;
 int FUNC_0 (unsigned char) ;
 int VAR_1 ;
 int FUNC_1 (int,char const*,int) ;
 int FUNC_2 (int,int ,char const*,int) ;

void
FUNC_3(const unsigned char *VAR_2,
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
   FUNC_1(VAR_6, (const char *) VAR_2, VAR_4);
  if (!FUNC_0(VAR_8))
   *VAR_3++ = VAR_8;
  else
  {
   VAR_9 = VAR_7[VAR_8 - VAR_0];
   if (VAR_9)
   {
    *VAR_3++ = VAR_5;
    *VAR_3++ = VAR_9;
   }
   else
    FUNC_2(VAR_6, VAR_1,
             (const char *) VAR_2, VAR_4);
  }
  VAR_2++;
  VAR_4--;
 }
 *VAR_3 = '\0';
}
