
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char char_u ;


 int FUNC_0 (char) ;

__attribute__((used)) static int
FUNC_1(char_u *VAR_0, char_u **VAR_1, int VAR_2)
{
    int VAR_3;
    int VAR_4 = 0;
    int VAR_5 = 0;

    while (*VAR_0)
    {
 if (*VAR_0 == '.' && VAR_5 == 0)
 {

     VAR_5 = 1;
     continue;
 }

 if (!FUNC_0(*VAR_0))
     break;

 VAR_4 *= 10;
 VAR_4 += *VAR_0 - '0';
 VAR_5 *= 10;

 ++VAR_0;
    }

    if (VAR_5 == 0)
 VAR_5 = 1;

    VAR_3 = VAR_4/VAR_5;
    *VAR_1 = VAR_0;
    return VAR_3;
}
