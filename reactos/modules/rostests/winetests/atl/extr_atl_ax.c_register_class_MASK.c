
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* lpszClassName; int * lpszMenuName; scalar_t__ hbrBackground; int hCursor; int * hIcon; int hInstance; scalar_t__ cbWndExtra; scalar_t__ cbClsExtra; int lpfnWndProc; scalar_t__ style; } ;
typedef TYPE_1__ WNDCLASSA ;
typedef int LPSTR ;
typedef scalar_t__ HBRUSH ;
typedef int ATOM ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static ATOM FUNC_3(void)
{
    WNDCLASSA VAR_3;

    VAR_3.style = 0;
    VAR_3.lpfnWndProc = VAR_1;
    VAR_3.cbClsExtra = 0;
    VAR_3.cbWndExtra = 0;
    VAR_3.hInstance = FUNC_0(((void*)0));
    VAR_3.hIcon = ((void*)0);
    VAR_3.hCursor = FUNC_1(((void*)0), (LPSTR)VAR_2);
    VAR_3.hbrBackground = (HBRUSH)(VAR_0+1);
    VAR_3.lpszMenuName = ((void*)0);
    VAR_3.lpszClassName = "WineAtlTestClass";

    return FUNC_2(&VAR_3);
}
