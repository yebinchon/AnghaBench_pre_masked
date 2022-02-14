
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int) ;

int FUNC_4(int VAR_2, WCHAR **VAR_3)
{
    int VAR_4, VAR_5 = 0;


    FUNC_0();

    if(VAR_2 != 2 && VAR_2 != 3)
    {
        FUNC_1(VAR_1, VAR_0);
        return 2;
    }

    VAR_4 = FUNC_2(VAR_3[1], VAR_2 == 3 ? VAR_3[2] : ((void*)0));
    if (VAR_4 <= 0)
        VAR_5 = FUNC_3(VAR_4);

    return VAR_5;
}
