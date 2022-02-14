
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hXcv; } ;
typedef TYPE_1__ lptconfig_t ;
typedef int LPARAM ;
typedef int HWND ;
typedef int HANDLE ;
typedef int BOOL ;


 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static BOOL FUNC_5(HANDLE VAR_4, HWND VAR_5)
{
    lptconfig_t VAR_6;
    BOOL VAR_7;


    VAR_6.hXcv = VAR_4;

    VAR_7 = FUNC_0(VAR_1, FUNC_2(VAR_2), VAR_5,
                               VAR_3, (LPARAM) &VAR_6);

    FUNC_4("got %u with %u\n", VAR_7, FUNC_1());

    if (!VAR_7) FUNC_3(VAR_0);
    return VAR_7;
}
