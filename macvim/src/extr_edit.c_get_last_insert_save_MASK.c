
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ char_u ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__*) ;
 int * VAR_2 ;
 int VAR_3 ;
 scalar_t__* FUNC_1 (int *) ;

char_u *
FUNC_2()
{
    char_u *VAR_4;
    int VAR_5;

    if (VAR_2 == ((void*)0))
 return ((void*)0);
    VAR_4 = FUNC_1(VAR_2 + VAR_3);
    if (VAR_4 != ((void*)0))
    {
 VAR_5 = (int)FUNC_0(VAR_4);
 if (VAR_5 > 0 && VAR_4[VAR_5 - 1] == VAR_0)
     VAR_4[VAR_5 - 1] = VAR_1;
    }
    return VAR_4;
}
