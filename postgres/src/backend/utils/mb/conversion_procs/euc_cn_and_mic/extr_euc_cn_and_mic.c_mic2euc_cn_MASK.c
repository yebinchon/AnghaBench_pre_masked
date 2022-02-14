
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char const) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char const*,int) ;
 int FUNC_2 (int ,int ,char const*,int) ;

__attribute__((used)) static void
FUNC_3(const unsigned char *VAR_3, unsigned char *VAR_4, int VAR_5)
{
 int VAR_6;

 while (VAR_5 > 0)
 {
  VAR_6 = *VAR_3;
  if (FUNC_0(VAR_6))
  {
   if (VAR_6 != VAR_0)
    FUNC_2(VAR_2, VAR_1,
             (const char *) VAR_3, VAR_5);
   if (VAR_5 < 3 || !FUNC_0(VAR_3[1]) || !FUNC_0(VAR_3[2]))
    FUNC_1(VAR_2,
          (const char *) VAR_3, VAR_5);
   VAR_3++;
   *VAR_4++ = *VAR_3++;
   *VAR_4++ = *VAR_3++;
   VAR_5 -= 3;
  }
  else
  {
   if (VAR_6 == 0)
    FUNC_1(VAR_2,
          (const char *) VAR_3, VAR_5);
   *VAR_4++ = VAR_6;
   VAR_3++;
   VAR_5--;
  }
 }
 *VAR_4 = '\0';
}
