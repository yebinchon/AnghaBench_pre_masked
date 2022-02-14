
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long long FUNC_0 (unsigned long long,int,int ) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (char const) ;
 unsigned long FUNC_3 (char const) ;

unsigned long long
FUNC_4 (const char *VAR_2, char **VAR_3, int VAR_4)
{
  unsigned long long VAR_5 = 0;
  int VAR_6 = 0;


  while (*VAR_2 && FUNC_2 (*VAR_2))
    VAR_2++;



  if (VAR_2[0] == '0')
    {
      if (VAR_2[1] == 'x')
 {
   if (VAR_4 == 0 || VAR_4 == 16)
     {
       VAR_4 = 16;
       VAR_2 += 2;
     }
 }
      else if (VAR_4 == 0 && VAR_2[1] >= '0' && VAR_2[1] <= '7')
 VAR_4 = 8;
    }

  if (VAR_4 == 0)
    VAR_4 = 10;

  while (*VAR_2)
    {
      unsigned long VAR_7;

      VAR_7 = FUNC_3 (*VAR_2) - '0';
      if (VAR_7 > 9)
 {
   VAR_7 += '0' - 'a' + 10;
   if (VAR_7 >= (unsigned long) VAR_4)
     break;
 }

      VAR_6 = 1;


      if (VAR_5 > FUNC_0 (~0ULL - VAR_7, VAR_4, 0))
 {
   FUNC_1 (VAR_1, "overflow is detected");
   return ~0ULL;
 }

      VAR_5 = VAR_5 * VAR_4 + VAR_7;
      VAR_2++;
    }

  if (! VAR_6)
    {
      FUNC_1 (VAR_0, "unrecognized number");
      return 0;
    }

  if (VAR_3)
    *VAR_3 = (char *) VAR_2;

  return VAR_5;
}
