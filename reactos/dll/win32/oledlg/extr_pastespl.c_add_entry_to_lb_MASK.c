
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {scalar_t__ lpstrFormatName; } ;
typedef TYPE_1__ OLEUIPASTEENTRYW ;
typedef int LRESULT ;
typedef int LPARAM ;
typedef int HWND ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int,int ) ;
 int VAR_4 ;

__attribute__((used)) static BOOL FUNC_2(HWND VAR_5, UINT VAR_6, OLEUIPASTEENTRYW *VAR_7)
{
    HWND VAR_8 = FUNC_0(VAR_5, VAR_6);
    BOOL VAR_9 = VAR_0;






    if(FUNC_1(VAR_8, VAR_2, 0, (LPARAM)VAR_7->lpstrFormatName) == -1)
    {
        LRESULT VAR_10 = FUNC_1(VAR_8, VAR_1, 0, (LPARAM)VAR_7->lpstrFormatName);
        FUNC_1(VAR_8, VAR_3, VAR_10, (LPARAM)VAR_7);
        VAR_9 = VAR_4;
    }
    return VAR_9;
}
