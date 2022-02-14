
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef scalar_t__ LPVOID ;
typedef int LPTSTR ;
typedef int LPCTSTR ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int *,scalar_t__,int ,int ,int ,int *) ;
 scalar_t__ FUNC_1 () ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *,int ,int ,int) ;
 int VAR_6 ;
 int FUNC_5 (char*) ;

VOID FUNC_6(DWORD VAR_7)
{
    LPVOID VAR_8;

    if (VAR_7 == 0)
        VAR_7 = FUNC_1();

    FUNC_0(VAR_0 |
                  VAR_1 |
                  VAR_2,
                  ((void*)0),
                  VAR_7,
                  FUNC_3(VAR_3, VAR_6),
                  (LPTSTR) &VAR_8,
                  0,
                  ((void*)0) );

    FUNC_4(((void*)0), (LPCTSTR) VAR_8, FUNC_5("Error!"), VAR_5 | VAR_4);

    FUNC_2(VAR_8);
}
