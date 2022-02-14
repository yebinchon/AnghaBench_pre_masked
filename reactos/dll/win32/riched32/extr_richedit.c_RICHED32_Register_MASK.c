
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int style; int cbWndExtra; int lpszClassName; scalar_t__ hbrBackground; int hCursor; scalar_t__ cbClsExtra; int lpfnWndProc; } ;
typedef TYPE_1__ WNDCLASSA ;
typedef int LPSTR ;
typedef scalar_t__ HBRUSH ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int VAR_6 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static BOOL FUNC_3(void)
{
    WNDCLASSA VAR_9;

    FUNC_2(&VAR_9, sizeof(WNDCLASSA));
    VAR_9.style = VAR_1 | VAR_3 | VAR_4 | VAR_2;
    VAR_9.lpfnWndProc = VAR_7;
    VAR_9.cbClsExtra = 0;
    VAR_9.cbWndExtra = sizeof(void *);
    VAR_9.hCursor = FUNC_0(0, (LPSTR)VAR_5);
    VAR_9.hbrBackground = (HBRUSH)(VAR_0 + 1);
    VAR_9.lpszClassName = VAR_6;

    FUNC_1(&VAR_9);

    return VAR_8;
}
