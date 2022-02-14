
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char const) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char const*,int) ;

__attribute__((used)) static void
FUNC_2(const unsigned char *VAR_2, unsigned char *VAR_3, int VAR_4)
{
 int VAR_5;

 while (VAR_4 > 0)
 {
  VAR_5 = *VAR_2;
  if (FUNC_0(VAR_5))
  {
   if (VAR_4 < 2 || !FUNC_0(VAR_2[1]))
    FUNC_1(VAR_1, (const char *) VAR_2, VAR_4);
   *VAR_3++ = VAR_0;
   *VAR_3++ = VAR_5;
   *VAR_3++ = VAR_2[1];
   VAR_2 += 2;
   VAR_4 -= 2;
  }
  else
  {
   if (VAR_5 == 0)
    FUNC_1(VAR_1, (const char *) VAR_2, VAR_4);
   *VAR_3++ = VAR_5;
   VAR_2++;
   VAR_4--;
  }
 }
 *VAR_3 = '\0';
}
