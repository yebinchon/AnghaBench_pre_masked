
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char VAR_0 ;
 int FUNC_0 (unsigned char) ;
 int FUNC_1 (int,char const*,int) ;
 int FUNC_2 (int,int,char const*,int) ;

void
FUNC_3(const unsigned char *VAR_1,
   unsigned char *VAR_2,
   int VAR_3,
   int VAR_4,
   int VAR_5,
   const unsigned char *VAR_6)
{
 unsigned char VAR_7,
    VAR_8;

 while (VAR_3 > 0)
 {
  VAR_7 = *VAR_1;
  if (VAR_7 == 0)
   FUNC_1(VAR_4, (const char *) VAR_1, VAR_3);
  if (!FUNC_0(VAR_7))
   *VAR_2++ = VAR_7;
  else
  {
   VAR_8 = VAR_6[VAR_7 - VAR_0];
   if (VAR_8)
    *VAR_2++ = VAR_8;
   else
    FUNC_2(VAR_4, VAR_5,
             (const char *) VAR_1, VAR_3);
  }
  VAR_1++;
  VAR_3--;
 }
 *VAR_2 = '\0';
}
