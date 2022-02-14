
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef scalar_t__ LPVOID ;
typedef int LPTSTR ;
typedef scalar_t__ LONG ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int *,scalar_t__,int ,int ,int ,int *) ;
 scalar_t__ FUNC_1 () ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ) ;
 int VAR_4 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int ) ;

VOID FUNC_6(LONG VAR_5)
{
    LPVOID VAR_6;


    if (VAR_5 == 0)
        VAR_5 = FUNC_1();

    if (FUNC_0(VAR_0 |
                        VAR_1 |
                        VAR_2,
                      ((void*)0),
                      VAR_5,
                      FUNC_3(VAR_3, VAR_4),
                      (LPTSTR) &VAR_6,
                      0,
                      ((void*)0)))
    {
        FUNC_5(FUNC_4("%s"), (LPTSTR)VAR_6);
        FUNC_2(VAR_6);
    }
}
