
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int LPBYTE ;
typedef int HWND ;
typedef int HKEY ;
typedef int DWORD ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int *,int ,int ,int *,int *,int *) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int) ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ,int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static VOID
FUNC_5(HWND VAR_8)
{
    HKEY VAR_9;
    DWORD VAR_10;

    VAR_10 = (FUNC_3(VAR_8,
                                               VAR_4,
                                               VAR_0,
                                               0,
                                               0) == VAR_1);

    if (FUNC_1(VAR_3,
                       VAR_7,
                       0,
                       ((void*)0),
                       0,
                       VAR_5,
                       ((void*)0),
                       &VAR_9,
                       ((void*)0)) == VAR_2)
    {
        FUNC_2(VAR_9,
                      FUNC_4("ReportAsWorkstation"),
                      0,
                      VAR_6,
                      (LPBYTE)&VAR_10,
                      sizeof(DWORD));

        FUNC_0(VAR_9);
    }
}
