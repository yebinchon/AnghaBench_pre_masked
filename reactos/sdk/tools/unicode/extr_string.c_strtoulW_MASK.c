
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char const) ;
 char FUNC_2 (char const) ;

unsigned long int FUNC_3( const WCHAR *VAR_3, WCHAR **VAR_4, int VAR_5 )
{
  int VAR_6;
  register unsigned long int VAR_7;
  register unsigned int VAR_8;
  register unsigned long int VAR_9;
  register const WCHAR *VAR_10;
  register WCHAR VAR_11;
  const WCHAR *VAR_12, *VAR_13;
  int VAR_14;

  if (VAR_5 < 0 || VAR_5 == 1 || VAR_5 > 36) return 0;

  VAR_12 = VAR_10 = VAR_3;


  while (FUNC_1 (*VAR_10))
    ++VAR_10;
  if (!*VAR_10) goto noconv;


  VAR_6 = 0;
  if (*VAR_10 == '-')
    {
      VAR_6 = 1;
      ++VAR_10;
    }
  else if (*VAR_10 == '+')
    ++VAR_10;


  if (*VAR_10 == '0')
    {
      if ((VAR_5 == 0 || VAR_5 == 16) && FUNC_2(VAR_10[1]) == 'X')
 {
   VAR_10 += 2;
   VAR_5 = 16;
 }
      else if (VAR_5 == 0)
 VAR_5 = 8;
    }
  else if (VAR_5 == 0)
    VAR_5 = 10;


  VAR_12 = VAR_10;
  VAR_13 = ((void*)0);

  VAR_7 = VAR_1 / (unsigned long int) VAR_5;
  VAR_8 = VAR_1 % (unsigned long int) VAR_5;

  VAR_14 = 0;
  VAR_9 = 0;
  VAR_11 = *VAR_10;
  for (;VAR_11 != '\0'; VAR_11 = *++VAR_10)
  {
      if (VAR_10 == VAR_13)
          break;
      if (VAR_11 >= '0' && VAR_11 <= '9')
          VAR_11 -= '0';
      else if (FUNC_0 (VAR_11))
          VAR_11 = FUNC_2 (VAR_11) - 'A' + 10;
      else
          break;
      if ((int) VAR_11 >= VAR_5)
          break;

      if (VAR_9 > VAR_7 || (VAR_9 == VAR_7 && VAR_11 > VAR_8))
          VAR_14 = 1;
      else
      {
          VAR_9 *= (unsigned long int) VAR_5;
          VAR_9 += VAR_11;
      }
  }


  if (VAR_10 == VAR_12)
    goto noconv;



  if (VAR_4 != ((void*)0))
    *VAR_4 = (WCHAR *)VAR_10;

  if (VAR_14)
    {
      VAR_2 = VAR_0;
      return VAR_1;
    }


  return VAR_6 ? -VAR_9 : VAR_9;

noconv:




  if (VAR_4 != ((void*)0))
    {
      if (VAR_12 - VAR_3 >= 2 && FUNC_2 (VAR_12[-1]) == 'X'
   && VAR_12[-2] == '0')
 *VAR_4 = (WCHAR *)&VAR_12[-1];
      else

 *VAR_4 = (WCHAR *)VAR_3;
    }

  return 0L;
}
