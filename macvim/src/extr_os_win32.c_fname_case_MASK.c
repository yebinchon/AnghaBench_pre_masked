
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef char char_u ;
struct TYPE_4__ {char* cFileName; char* cAlternateFileName; } ;
typedef TYPE_1__ WIN32_FIND_DATA ;
typedef char WCHAR ;
typedef int HANDLE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_3 () ;
 int VAR_0 ;
 char VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 char* FUNC_7 (char*,int *) ;
 scalar_t__ FUNC_8 (char*,int) ;
 scalar_t__ FUNC_9 (char) ;
 int FUNC_10 (char*) ;
 char VAR_6 ;
 int FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (char*,char*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*) ;
 char* FUNC_15 (char*,int *) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (char*,char*,int) ;
 int FUNC_18 (char*,char*) ;

void
FUNC_19(
    char_u *VAR_7,
    int VAR_8)
{
    char VAR_9[VAR_3 + 2];
    char VAR_10[VAR_3 + 2];
    char *VAR_11, *VAR_12;
    char *VAR_13, *VAR_14;
    int VAR_15;
    WIN32_FIND_DATA VAR_16;
    HANDLE VAR_17;
    int VAR_18;
    int VAR_19;

    VAR_15 = (int)FUNC_5(VAR_7);
    if (VAR_15 == 0)
 return;

    FUNC_11(VAR_7);
    if (VAR_15 > VAR_3)
 return;


    VAR_13 = VAR_7;
    VAR_11 = VAR_9;

    if (FUNC_9(VAR_13[0]) && VAR_13[1] == ':')
    {

 *VAR_11++ = *VAR_13++;
 *VAR_11++ = *VAR_13++;
    }
    *VAR_11 = VAR_1;

    while (*VAR_13 != VAR_1)
    {

 while (*VAR_13 == VAR_6)
     *VAR_11++ = *VAR_13++;

 VAR_12 = VAR_11;
 VAR_14 = VAR_13;
 while (*VAR_13 != VAR_1 && *VAR_13 != VAR_6)
 {
  *VAR_11++ = *VAR_13++;
 }
 *VAR_11 = VAR_1;



 FUNC_4(VAR_10, VAR_9);
 VAR_19 = (int)FUNC_13(VAR_10);
 if (*VAR_13 == VAR_6 && VAR_19 + 2 < VAR_3)
     FUNC_4(VAR_10 + VAR_19, "\\*");


 if (VAR_11 > VAR_12
  && (VAR_12[0] != '.'
      || (VAR_12[1] != VAR_1
   && (VAR_12[1] != '.' || VAR_12[2] != VAR_1)))
  && (VAR_17 = FUNC_1(VAR_10, &VAR_16))
            != VAR_0)
 {
     VAR_18 = *VAR_13;
     *VAR_13 = VAR_1;




     if (FUNC_6(VAR_14, VAR_16.cFileName) == 0
      || (VAR_8 > 0
   && (FUNC_6(VAR_14, VAR_16.cAlternateFileName) == 0
       && (int)(VAR_12 - VAR_9)
        + (int)FUNC_13(VAR_16.cFileName) < VAR_8)))
     {
  FUNC_4(VAR_12, VAR_16.cFileName);



  while (FUNC_2(VAR_17, &VAR_16))
  {
      if (*VAR_16.cAlternateFileName != VAR_1
       && (FUNC_12(VAR_14, VAR_16.cFileName) == 0
    || (VAR_8 > 0
        && (FUNC_6(VAR_14,
         VAR_16.cAlternateFileName) == 0
        && (int)(VAR_12 - VAR_9)
      + (int)FUNC_13(VAR_16.cFileName) < VAR_8))))
      {
   FUNC_4(VAR_12, VAR_16.cFileName);
   break;
      }
  }
     }
     FUNC_0(VAR_17);
     *VAR_13 = VAR_18;
     VAR_11 = VAR_12 + FUNC_13(VAR_12);
 }
    }

    FUNC_4(VAR_7, VAR_9);
}
