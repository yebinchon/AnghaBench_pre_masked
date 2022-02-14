
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char const) ;
 int VAR_0 ;
 int FUNC_1 (unsigned char const*) ;
 int FUNC_2 (int ,char const*,int) ;
 int FUNC_3 (int ,int,char const*,int) ;

void
FUNC_4(const unsigned char *VAR_1, unsigned char *VAR_2, int VAR_3,
    int VAR_4, int VAR_5)
{
 int VAR_6;

 while (VAR_3 > 0)
 {
  VAR_6 = *VAR_1;
  if (VAR_6 == 0)
   FUNC_2(VAR_0, (const char *) VAR_1, VAR_3);
  if (!FUNC_0(VAR_6))
  {

   *VAR_2++ = VAR_6;
   VAR_1++;
   VAR_3--;
  }
  else
  {
   int VAR_7 = FUNC_1(VAR_1);

   if (VAR_3 < VAR_7)
    FUNC_2(VAR_0, (const char *) VAR_1,
          VAR_3);
   if (VAR_7 != 2 || VAR_6 != VAR_4 || !FUNC_0(VAR_1[1]))
    FUNC_3(VAR_0, VAR_5,
             (const char *) VAR_1, VAR_3);
   *VAR_2++ = VAR_1[1];
   VAR_1 += 2;
   VAR_3 -= 2;
  }
 }
 *VAR_2 = '\0';
}
