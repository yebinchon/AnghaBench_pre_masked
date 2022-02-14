
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char char_u ;


 int VAR_0 ;
 char VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char**,char*,int,char*) ;
 scalar_t__ FUNC_2 (char*,char**) ;
 scalar_t__ FUNC_3 (char*) ;
 char* FUNC_4 (char*) ;
 char* VAR_4 ;
 int * FUNC_5 (char*,char*) ;
 int * FUNC_6 (scalar_t__,char) ;
 int FUNC_7 (char*,char*,int) ;

int
FUNC_8(char_u *VAR_5, char_u **VAR_6)
{
    char_u VAR_7[VAR_3];
    int VAR_8 = (int)FUNC_0(VAR_5);
    char_u *VAR_9;

    if (VAR_8 >= VAR_3)
 return VAR_0;



    if (FUNC_6(FUNC_3(VAR_5), '.') != ((void*)0)
          || FUNC_5((char *)FUNC_3(VAR_4), "sh") != ((void*)0))
 if (FUNC_2((char *)VAR_5, VAR_6))
     return VAR_2;




    FUNC_7(VAR_7, VAR_5, VAR_3 - 1);
    VAR_9 = FUNC_4("PATHEXT");
    if (VAR_9 == ((void*)0))
 VAR_9 = (char_u *)".com;.exe;.bat;.cmd";
    while (*VAR_9)
    {
 if (VAR_9[0] == '.' && (VAR_9[1] == VAR_1 || VAR_9[1] == ';'))
 {

     VAR_7[VAR_8] = VAR_1;
     ++VAR_9;
     if (*VAR_9)
  ++VAR_9;
 }
 else
     FUNC_1(&VAR_9, VAR_7 + VAR_8, VAR_3 - VAR_8, ";");
 if (FUNC_2((char *)VAR_7, VAR_6))
     return VAR_2;
    }
    return VAR_0;
}
