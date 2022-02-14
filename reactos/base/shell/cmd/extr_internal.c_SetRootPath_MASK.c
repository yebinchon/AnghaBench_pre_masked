
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TCHAR ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int,int *,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int *) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int *,int) ;
 int VAR_3 ;

BOOL FUNC_8(TCHAR *VAR_4, TCHAR *VAR_5)
{
    TCHAR VAR_6[VAR_1];
    TCHAR VAR_7[VAR_1];

    FUNC_5(VAR_5);


    if (FUNC_1(VAR_5, VAR_1, VAR_7, ((void*)0)) == 0)
        goto Fail;



    FUNC_3(VAR_7, VAR_6);



    if (FUNC_6(VAR_6) != 0)
        goto Fail;


    if (VAR_4 != ((void*)0) && FUNC_7(VAR_6, VAR_4, 2) != 0)
        FUNC_4(VAR_4);

    return VAR_2;

Fail:
    FUNC_0(FUNC_2());
    VAR_3 = 1;
    return VAR_0;
}
