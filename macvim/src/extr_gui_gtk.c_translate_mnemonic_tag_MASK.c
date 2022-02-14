
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char char_u ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char VAR_0 ;
 char VAR_1 ;
 char* FUNC_2 (unsigned int) ;

__attribute__((used)) static char_u *
FUNC_3(char_u *VAR_2, int VAR_3)
{
    char_u *VAR_4;
    char_u *VAR_5;
    char_u *VAR_6;
    int VAR_7 = 0;

    VAR_2 = FUNC_0(VAR_2);
    if (VAR_2 == ((void*)0))
 return ((void*)0);

    for (VAR_5 = VAR_2; *VAR_5 != VAR_0 && *VAR_5 != VAR_1; ++VAR_5)
 if (*VAR_5 == '_')
     ++VAR_7;

    VAR_4 = FUNC_2((unsigned)(VAR_5 - VAR_2 + VAR_7 + 1));
    if (VAR_4 != ((void*)0))
    {
 VAR_6 = VAR_4;
 for (VAR_5 = VAR_2; *VAR_5 != VAR_0 && *VAR_5 != VAR_1; ++VAR_5)
 {
     if (*VAR_5 == '_')
     {
  *VAR_6++ = '_';
  *VAR_6++ = '_';
     }
     else if (*VAR_5 != '&')
     {
  *VAR_6++ = *VAR_5;
     }
     else if (*(VAR_5 + 1) == '&')
     {
  *VAR_6++ = *VAR_5++;
     }
     else if (VAR_3)
     {
  *VAR_6++ = '_';
     }
 }
 *VAR_6 = VAR_0;
    }

    FUNC_1(VAR_2);
    return VAR_4;
}
