
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,char*) ;
 int FUNC_2 (char*,char*,float) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(char *VAR_1, char *VAR_2, int VAR_3)
{
    int VAR_4;
    float VAR_5;

    *VAR_2 = '\0';

    if (VAR_3)
    {
 FUNC_1(VAR_1, 7, VAR_2);
 if (*VAR_2 != VAR_0)
 {
     VAR_4 = FUNC_0(VAR_2);
     FUNC_2(VAR_2, "%3d", VAR_4);
 }
    }
    else
    {
 FUNC_1(VAR_1, 8, VAR_2);
 if (*VAR_2 != VAR_0)
 {
     VAR_4 = FUNC_0(VAR_2);
     VAR_5 = (float)VAR_4 / 10.0;
     VAR_4 = VAR_5;
     if (VAR_2[FUNC_3(VAR_2) - 1] == '0')
  FUNC_2(VAR_2, "%3d", VAR_4);
     else
  FUNC_2(VAR_2, "%4.1f", VAR_5);
 }
    }
}
