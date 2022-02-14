
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char char_u ;


 scalar_t__ FUNC_0 (char) ;
 int VAR_0 ;
 char VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char*,char*,int) ;
 char VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;

__attribute__((used)) static int
FUNC_2()
{
    char_u VAR_8[4];
    char_u *VAR_9;
    int VAR_10;
    int VAR_11 = 0;

    for (VAR_10 = 0; VAR_10 < 4; ++VAR_10)
 VAR_8[VAR_10] = 0;

    for (VAR_9 = VAR_6; *VAR_9; ++VAR_9)
    {
 for (VAR_10 = 0; FUNC_0(VAR_9[VAR_10]); ++VAR_10)
     ;
 if (VAR_9[VAR_10] != VAR_1 && VAR_9[VAR_10] != ',' && VAR_9[VAR_10] != ':')
     return VAR_0;
 if (VAR_10 == 7 && FUNC_1(VAR_9, "longest", 7) == 0)
     VAR_8[VAR_11] |= VAR_5;
 else if (VAR_10 == 4 && FUNC_1(VAR_9, "full", 4) == 0)
     VAR_8[VAR_11] |= VAR_3;
 else if (VAR_10 == 4 && FUNC_1(VAR_9, "list", 4) == 0)
     VAR_8[VAR_11] |= VAR_4;
 else
     return VAR_0;
 VAR_9 += VAR_10;
 if (*VAR_9 == VAR_1)
     break;
 if (*VAR_9 == ',')
 {
     if (VAR_11 == 3)
  return VAR_0;
     ++VAR_11;
 }
    }


    while (VAR_11 < 3)
    {
 VAR_8[VAR_11 + 1] = VAR_8[VAR_11];
 ++VAR_11;
    }


    for (VAR_10 = 0; VAR_10 < 4; ++VAR_10)
 VAR_7[VAR_10] = VAR_8[VAR_10];
    return VAR_2;
}
