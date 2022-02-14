
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct _stat {int dummy; } ;
typedef int char_u ;
typedef int buf ;
typedef int WCHAR ;


 scalar_t__ FUNC_0 () ;
 char VAR_0 ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_2 (char*,int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,struct stat*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int) ;
 char* FUNC_8 (char*,char*) ;
 int FUNC_9 (int *,struct _stat*) ;

int
FUNC_10(const char *VAR_5, struct stat *VAR_6)
{






    char VAR_7[VAR_2 + 1];

    char *VAR_8;

    FUNC_7((char_u *)VAR_7, (char_u *)VAR_5, sizeof(VAR_7) - 1);
    VAR_8 = VAR_7 + FUNC_5(VAR_7);
    if (VAR_8 > VAR_7)
 FUNC_3(VAR_7, VAR_8);


    if (VAR_8 > VAR_7 && (*VAR_8 == '\\' || *VAR_8 == '/') && VAR_8[-1] != ':')
 *VAR_8 = VAR_0;

    if ((VAR_7[0] == '\\' && VAR_7[1] == '\\') || (VAR_7[0] == '/' && VAR_7[1] == '/'))
    {

 VAR_8 = FUNC_8(VAR_7 + 2, "\\/");
 if (VAR_8 != ((void*)0))
 {
     VAR_8 = FUNC_8(VAR_8 + 1, "\\/");
     if (VAR_8 == ((void*)0))
  FUNC_1(VAR_7, "\\");
 }
    }
    return FUNC_4(VAR_7, VAR_6);
}
