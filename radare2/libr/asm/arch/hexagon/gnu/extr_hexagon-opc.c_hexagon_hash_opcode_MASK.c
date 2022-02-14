
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char hexagon_hash ;


 char VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 char VAR_6 ;
 char VAR_7 ;
 char VAR_8 ;
 char VAR_9 ;
 char VAR_10 ;
 char VAR_11 ;
 char VAR_12 ;
 char VAR_13 ;
 char VAR_14 ;
 char VAR_15 ;
 char VAR_16 ;
 char VAR_17 ;
 char VAR_18 ;
 char VAR_19 ;
 char VAR_20 ;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char const) ;
 scalar_t__ FUNC_2 (char const) ;
 char VAR_21 ;
 char FUNC_3 (char const) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 char* FUNC_6 (char const*,char) ;
 int FUNC_7 (char const*,char*) ;
 size_t FUNC_8 (char const*,char*) ;
 char* FUNC_9 (char const*,char*,size_t) ;

hexagon_hash
FUNC_10
(const char *VAR_24)
{
  const char *VAR_25, *VAR_26, *VAR_27, *VAR_28;
  size_t VAR_29;
  int VAR_30;
  char VAR_31;

  if (!FUNC_7 (VAR_24, "Rd8 = #s6 ; Re8 = #S6")
      || !FUNC_7 (VAR_24, "Rd8 = #s6 ; Re8 = aslh (Rs8 )"))
    {
      VAR_25 = ((void*)0);
      VAR_26 = VAR_25;
    }

  VAR_27 = FUNC_6 (VAR_24, VAR_21);
  VAR_28 = FUNC_6 (VAR_24, '=');

  VAR_29 = FUNC_8 (VAR_24, " \t`~!@#$%^&*()_-=+[{]}\\|;:'\",<.>/?");
  VAR_30 = !FUNC_9 (VAR_24, "if", VAR_29);
  if (VAR_27)
    {
      VAR_25 = VAR_27 + 1;
      while (FUNC_2 (*VAR_25))
        VAR_25++;

      if (!FUNC_9 (VAR_25, "jump", 4) || !FUNC_9 (VAR_24, "jump", 4)
          || !FUNC_9 (VAR_25, "call", 4) || !FUNC_9 (VAR_24, "call", 4)
          || ((FUNC_4 () || FUNC_5 ())
              && (!FUNC_9 (VAR_25, "return", VAR_29) || !FUNC_9 (VAR_24, "return", VAR_29))))

        return (VAR_30? VAR_10: VAR_11);
    }
  else
    {
      VAR_25 = VAR_24;

      if (!FUNC_9 (VAR_25, "jump", 4)
          || !FUNC_9 (VAR_25, "call", 4)
          || ((FUNC_4 () || FUNC_5 ())
              && (!FUNC_9 (VAR_25, "return", VAR_29))))

        return (VAR_30? VAR_12: VAR_13);
    }

  if (VAR_28)
    {

      VAR_25 = VAR_28 + 1;
      while (FUNC_2 (*VAR_25))
        VAR_25++;

      if (*VAR_25 != '#' && (VAR_26 = FUNC_6 (VAR_25, '(')))
        {

          while (FUNC_2 (*VAR_25) || FUNC_1 (*VAR_25))
            VAR_25++;

          if (FUNC_0 (VAR_31 = FUNC_3 (*VAR_25)))
            {
              if (VAR_31 == 'v')
                {

                  VAR_31 = FUNC_3 (VAR_25 [1]);

                  return (VAR_27
                          ? (VAR_2 + VAR_31 - 'a' + (VAR_30? VAR_1: 0))
                          : (VAR_3 + VAR_31 - 'a' + (VAR_30? VAR_1: 0)) );
                }
              else
                return (VAR_27
                        ? (VAR_2 + VAR_31 - 'a' + (VAR_30? VAR_1: 0))
                        : (VAR_0 + VAR_31 - 'a' + (VAR_30? VAR_1: 0)) );
            }
        }
      else

        return (VAR_27
                ? VAR_30? VAR_14: VAR_15
                : VAR_30? VAR_16: VAR_17);
    }

  if (!FUNC_9 (VAR_24, "allocframe", 10)
      || !FUNC_9 (VAR_24, "deallocframe", VAR_29)
      || !FUNC_9 (VAR_24, "nop", VAR_29))
    return (VAR_27? VAR_18: VAR_19);


  return (VAR_20);
}
