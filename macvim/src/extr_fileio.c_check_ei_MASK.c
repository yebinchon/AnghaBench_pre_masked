
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char char_u ;


 int VAR_0 ;
 char VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char*,char*,int) ;
 scalar_t__ FUNC_1 (char*,char**) ;
 char* VAR_4 ;

int
FUNC_2()
{
    char_u *VAR_5 = VAR_4;

    while (*VAR_5)
    {
 if (FUNC_0(VAR_5, "all", 3) == 0 && (VAR_5[3] == VAR_1 || VAR_5[3] == ','))
 {
     VAR_5 += 3;
     if (*VAR_5 == ',')
  ++VAR_5;
 }
 else if (FUNC_1(VAR_5, &VAR_5) == VAR_2)
     return VAR_0;
    }

    return VAR_3;
}
