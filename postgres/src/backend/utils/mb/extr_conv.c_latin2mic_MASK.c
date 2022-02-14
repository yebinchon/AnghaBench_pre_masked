
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,char const*,int) ;

void
FUNC_2(const unsigned char *VAR_0, unsigned char *VAR_1, int VAR_2,
    int VAR_3, int VAR_4)
{
 int VAR_5;

 while (VAR_2 > 0)
 {
  VAR_5 = *VAR_0;
  if (VAR_5 == 0)
   FUNC_1(VAR_4, (const char *) VAR_0, VAR_2);
  if (FUNC_0(VAR_5))
   *VAR_1++ = VAR_3;
  *VAR_1++ = VAR_5;
  VAR_0++;
  VAR_2--;
 }
 *VAR_1 = '\0';
}
