
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cibuf ;
typedef int char_u ;
typedef int cbuf ;


 int VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (char*,char) ;
 int FUNC_5 (char*,int,char*,...) ;
 int FUNC_6 (char*,int,char*,char*) ;

void
FUNC_7(
 int VAR_6,
 char *VAR_7,
 char *VAR_8)
{
    char VAR_9[VAR_0];
    char VAR_10[VAR_0];
    char VAR_11[VAR_0];
    char *VAR_12;
    FUNC_0(VAR_9, FUNC_3((char_u *)VAR_8));
    VAR_12 = FUNC_4(VAR_9, '.');
    if (VAR_12 != ((void*)0))
 *VAR_12 = VAR_2;

    if (VAR_9[0] != '-' && VAR_9[1] != VAR_2)
    {
 if (VAR_7 != ((void*)0) && *VAR_7)
 {
     FUNC_5(VAR_11, sizeof(VAR_11),
      "highlight WS%s guibg=%s", VAR_9, VAR_7);
     FUNC_2(VAR_11, VAR_1);
     FUNC_5(VAR_10, sizeof(VAR_10), "linehl=WS%s", VAR_9);
 }
 else
     VAR_10[0] = VAR_2;

 FUNC_5(VAR_11, sizeof(VAR_11),
          "sign define %d %s icon=%s", VAR_6, VAR_10, VAR_8);
 FUNC_2(VAR_11, VAR_3);
    }
}
