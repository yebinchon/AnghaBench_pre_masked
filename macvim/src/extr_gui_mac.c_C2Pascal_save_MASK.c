
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int char_u ;


 int FUNC_0 (int*) ;
 int* FUNC_1 (int) ;
 int FUNC_2 (int*,int*,int) ;

char_u *
FUNC_3(char_u *VAR_0)
{
    char_u *VAR_1;
    int VAR_2;

    if (VAR_0 == ((void*)0))
 return ((void*)0);

    VAR_2 = FUNC_0(VAR_0);

    if (VAR_2 > 255)
 VAR_2 = 255;

    VAR_1 = FUNC_1(VAR_2 + 1);
    if (VAR_1 != ((void*)0))
    {
 FUNC_2(VAR_1 + 1, VAR_0, VAR_2);
 VAR_1[0] = VAR_2;
    }

    return VAR_1;
}
