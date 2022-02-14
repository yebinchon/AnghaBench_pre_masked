
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int names ;
typedef int char_u ;







 int FUNC_0 (char*) ;
 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (int) ;

int
FUNC_8(char_u *VAR_5)
{
    int VAR_6;
    int VAR_7;
    static char *(VAR_8[]) = {"BW40", "C40", "BW80", "C80", "MONO", "C4350"};
    static int VAR_9[] = { 133, 131, 132, 129, 128, 130};

    VAR_6 = -1;
    if (FUNC_1(*VAR_5))
 VAR_6 = FUNC_2((char *)VAR_5);
    else
    {
 for (VAR_7 = 0; VAR_7 < sizeof(VAR_8) / sizeof(char_u *); ++VAR_7)
     if (FUNC_6(VAR_8[VAR_7], (char *)VAR_5) == 0)
     {
  VAR_6 = VAR_9[VAR_7];
  break;
     }
    }
    if (VAR_6 == -1)
    {
 FUNC_0("E362: Unsupported screen mode");
 return VAR_0;
    }
    FUNC_7(VAR_6);






    FUNC_4(VAR_2);
    return VAR_1;
}
