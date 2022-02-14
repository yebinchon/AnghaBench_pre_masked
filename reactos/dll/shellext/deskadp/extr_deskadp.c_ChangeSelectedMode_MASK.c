
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WPARAM ;
struct TYPE_3__ {int * lpSelDevMode; } ;
typedef int * PDEVMODEW ;
typedef TYPE_1__* PDESKDISPLAYADAPTER ;
typedef scalar_t__ INT ;
typedef int HWND ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static BOOL
FUNC_1(PDESKDISPLAYADAPTER VAR_5,
                   HWND VAR_6)
{
    INT VAR_7;
    PDEVMODEW VAR_8 = ((void*)0);
    BOOL VAR_9 = VAR_0;

    VAR_7 = (INT)FUNC_0(VAR_6,
                                VAR_1,
                                VAR_2,
                                0,
                                0);

    if (VAR_7 >= 0)
    {
        VAR_8 = (PDEVMODEW)FUNC_0(VAR_6,
                                                     VAR_1,
                                                     VAR_3,
                                                     (WPARAM)VAR_7,
                                                     0);
    }

    if (VAR_8 != ((void*)0))
    {
        VAR_5->lpSelDevMode = VAR_8;
        VAR_9 = VAR_4;
    }

    return VAR_9;
}
