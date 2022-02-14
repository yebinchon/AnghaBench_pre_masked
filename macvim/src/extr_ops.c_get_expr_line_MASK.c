
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int char_u ;


 int VAR_0 ;
 int * FUNC_0 (int *,int *,int ) ;
 int * VAR_1 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;

char_u *
FUNC_3()
{
    char_u *VAR_2;
    char_u *VAR_3;
    static int VAR_4 = 0;

    if (VAR_1 == ((void*)0))
 return ((void*)0);



    VAR_2 = FUNC_2(VAR_1);
    if (VAR_2 == ((void*)0))
 return ((void*)0);



    if (VAR_4 >= 10)
 return VAR_2;

    ++VAR_4;
    VAR_3 = FUNC_0(VAR_2, ((void*)0), VAR_0);
    --VAR_4;
    FUNC_1(VAR_2);
    return VAR_3;
}
