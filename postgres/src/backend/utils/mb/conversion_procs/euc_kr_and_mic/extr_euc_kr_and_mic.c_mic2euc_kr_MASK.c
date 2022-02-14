
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char const*,int) ;
 int FUNC_2 (int ,char const*,int) ;
 int FUNC_3 (int ,int ,char const*,int) ;

__attribute__((used)) static void
FUNC_4(const unsigned char *VAR_3, unsigned char *VAR_4, int VAR_5)
{
 int VAR_6;
 int VAR_7;

 while (VAR_5 > 0)
 {
  VAR_6 = *VAR_3;
  if (!FUNC_0(VAR_6))
  {

   if (VAR_6 == 0)
    FUNC_2(VAR_2,
          (const char *) VAR_3, VAR_5);
   *VAR_4++ = VAR_6;
   VAR_3++;
   VAR_5--;
   continue;
  }
  VAR_7 = FUNC_1(VAR_2, (const char *) VAR_3, VAR_5);
  if (VAR_7 < 0)
   FUNC_2(VAR_2,
         (const char *) VAR_3, VAR_5);
  if (VAR_6 == VAR_0)
  {
   *VAR_4++ = VAR_3[1];
   *VAR_4++ = VAR_3[2];
  }
  else
   FUNC_3(VAR_2, VAR_1,
            (const char *) VAR_3, VAR_5);
  VAR_3 += VAR_7;
  VAR_5 -= VAR_7;
 }
 *VAR_4 = '\0';
}
