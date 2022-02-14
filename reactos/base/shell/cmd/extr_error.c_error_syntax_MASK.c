
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int TCHAR ;
typedef int LPTSTR ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,...) ;
 int FUNC_2 (int ,int ,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*) ;
 int VAR_3 ;

VOID FUNC_4 (LPTSTR VAR_4)
{
    TCHAR VAR_5[VAR_1];

    FUNC_2(VAR_0, VAR_2, VAR_5, FUNC_0(VAR_5));

    if (VAR_4)
        FUNC_1(FUNC_3("%s - %s\n"), VAR_5, VAR_4);
    else
        FUNC_1(FUNC_3("%s.\n"), VAR_5);

    VAR_3 = 1;
}
