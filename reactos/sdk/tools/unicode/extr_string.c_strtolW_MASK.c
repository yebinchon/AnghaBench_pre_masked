
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;


 int VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char const) ;
 char FUNC_2 (char const) ;

long int FUNC_3( const WCHAR *VAR_5, WCHAR **VAR_6, int VAR_7 )
{
  int VAR_8;
  register unsigned long int VAR_9;
  register unsigned int VAR_10;
  register unsigned long int VAR_11;
  register const WCHAR *VAR_12;
  register WCHAR VAR_13;
  const WCHAR *VAR_14, *VAR_15;
  int VAR_16;

  if (VAR_7 < 0 || VAR_7 == 1 || VAR_7 > 36) return 0;

  VAR_14 = VAR_12 = VAR_5;


  while (FUNC_1 (*VAR_12))
    ++VAR_12;
  if (!*VAR_12) goto noconv;


  VAR_8 = 0;
  if (*VAR_12 == '-')
    {
      VAR_8 = 1;
      ++VAR_12;
    }
  else if (*VAR_12 == '+')
    ++VAR_12;


  if (*VAR_12 == '0')
    {
      if ((VAR_7 == 0 || VAR_7 == 16) && FUNC_2(VAR_12[1]) == 'X')
 {
   VAR_12 += 2;
   VAR_7 = 16;
 }
      else if (VAR_7 == 0)
 VAR_7 = 8;
    }
  else if (VAR_7 == 0)
    VAR_7 = 10;


  VAR_14 = VAR_12;
  VAR_15 = ((void*)0);

  VAR_9 = VAR_3 / (unsigned long int) VAR_7;
  VAR_10 = VAR_3 % (unsigned long int) VAR_7;

  VAR_16 = 0;
  VAR_11 = 0;
  VAR_13 = *VAR_12;
  for (;VAR_13 != '\0'; VAR_13 = *++VAR_12)
  {
      if (VAR_12 == VAR_15)
          break;
      if (VAR_13 >= '0' && VAR_13 <= '9')
          VAR_13 -= '0';
      else if (FUNC_0 (VAR_13))
          VAR_13 = FUNC_2 (VAR_13) - 'A' + 10;
      else
          break;
      if ((int) VAR_13 >= VAR_7)
          break;

      if (VAR_11 > VAR_9 || (VAR_11 == VAR_9 && VAR_13 > VAR_10))
          VAR_16 = 1;
      else
      {
          VAR_11 *= (unsigned long int) VAR_7;
          VAR_11 += VAR_13;
      }
  }


  if (VAR_12 == VAR_14)
    goto noconv;



  if (VAR_6 != ((void*)0))
    *VAR_6 = (WCHAR *)VAR_12;



  if (VAR_16 == 0
      && VAR_11 > (VAR_8
       ? -((unsigned long int) (VAR_2 + 1)) + 1
       : (unsigned long int) VAR_1))
    VAR_16 = 1;

  if (VAR_16)
    {
      VAR_4 = VAR_0;
      return VAR_8 ? VAR_2 : VAR_1;
    }


  return VAR_8 ? -VAR_11 : VAR_11;

noconv:




  if (VAR_6 != ((void*)0))
    {
      if (VAR_14 - VAR_5 >= 2 && FUNC_2 (VAR_14[-1]) == 'X'
   && VAR_14[-2] == '0')
 *VAR_6 = (WCHAR *)&VAR_14[-1];
      else

 *VAR_6 = (WCHAR *)VAR_5;
    }

  return 0L;
}
