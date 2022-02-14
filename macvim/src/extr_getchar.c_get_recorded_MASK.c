
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ char_u ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_0 (scalar_t__*) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__* FUNC_2 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

char_u *
FUNC_3()
{
    char_u *VAR_6;
    size_t VAR_7;

    VAR_6 = FUNC_2(&VAR_4, VAR_2);
    FUNC_1(&VAR_4);





    VAR_7 = FUNC_0(VAR_6);
    if ((int)VAR_7 >= VAR_3)
    {
 VAR_7 -= VAR_3;
 VAR_6[VAR_7] = VAR_1;
    }





    if (VAR_7 > 0 && VAR_5 != 0 && VAR_6[VAR_7 - 1] == VAR_0)
 VAR_6[VAR_7 - 1] = VAR_1;

    return (VAR_6);
}
