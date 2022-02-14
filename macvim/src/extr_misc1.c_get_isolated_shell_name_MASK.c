
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ char_u ;


 scalar_t__ VAR_0 ;
 scalar_t__* FUNC_0 (scalar_t__*) ;
 int FUNC_1 (scalar_t__*) ;
 scalar_t__* VAR_1 ;
 scalar_t__* FUNC_2 (scalar_t__*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__* FUNC_4 (scalar_t__*,int) ;
 scalar_t__* FUNC_5 (scalar_t__*) ;

char_u *
FUNC_6()
{
    char_u *VAR_2;





    VAR_2 = FUNC_2(VAR_1);
    if (*VAR_2 == VAR_0)
    {

 VAR_2 = FUNC_5(FUNC_0(VAR_1));
    }
    else
    {
 char_u *VAR_3, *VAR_4;


 VAR_3 = VAR_1;
 for (VAR_4 = VAR_1; VAR_4 < VAR_2; FUNC_1(VAR_4))
     if (FUNC_3(*VAR_4))
  VAR_3 = VAR_4 + 1;
 VAR_2 = FUNC_4(VAR_3, (int)(VAR_2 - VAR_3));
    }

    return VAR_2;
}
