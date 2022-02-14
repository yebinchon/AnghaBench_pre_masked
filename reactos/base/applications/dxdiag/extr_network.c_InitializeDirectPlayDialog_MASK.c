
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LONG ;
typedef int HWND ;
typedef int HKEY ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,char*,int ,int ,int *) ;
 int FUNC_5 (int ,int ,int ,int ) ;

__attribute__((used)) static
void
FUNC_6(HWND VAR_8)
{
    HKEY VAR_9;
    LONG VAR_10;
    HWND VAR_11;


    VAR_10 = FUNC_4(VAR_3, L"SOFTWARE\\Microsoft\\DirectPlay8\\Service Providers", 0, VAR_5, &VAR_9);
    if (VAR_10 != VAR_2)
        return;

    VAR_11 = FUNC_1(VAR_8, VAR_4);


    FUNC_5(VAR_11, VAR_6, 0, VAR_7);


    FUNC_2(VAR_11);


    VAR_10 = FUNC_0(VAR_9, VAR_11, VAR_0);
    FUNC_3(VAR_9);
    if (!VAR_10)
        return;


    VAR_10 = FUNC_4(VAR_3, L"SOFTWARE\\Microsoft\\DirectPlay\\Service Providers", 0, VAR_5, &VAR_9);
    if (VAR_10 != VAR_2)
        return;


    FUNC_0(VAR_9, VAR_11, VAR_1);
    FUNC_3(VAR_9);
}
