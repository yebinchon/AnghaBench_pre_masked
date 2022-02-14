
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_10__ {TYPE_1__* lpVtbl; } ;
struct TYPE_9__ {int left; int right; int top; int bottom; } ;
struct TYPE_8__ {scalar_t__ (* GetDC ) (TYPE_3__*,int *) ;int (* ReleaseDC ) (TYPE_3__*,int ) ;} ;
typedef TYPE_2__ RECT ;
typedef TYPE_3__* LPDIRECTDRAWSURFACE ;
typedef int HGDIOBJ ;
typedef int HDC ;
typedef scalar_t__ HBRUSH ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int ,TYPE_2__*,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (TYPE_3__*,int *) ;
 int FUNC_6 (TYPE_3__*,int ) ;

VOID FUNC_7(LPDIRECTDRAWSURFACE VAR_7)
{
    HDC VAR_8;

    if (VAR_7->lpVtbl->GetDC(VAR_7, &VAR_8) == VAR_0)
    {
        RECT VAR_9;
        HBRUSH VAR_10, VAR_11;
        BOOL VAR_12 = VAR_4;

        VAR_9.left = (FUNC_3(VAR_5) - VAR_3)/2;
        VAR_9.right = (FUNC_3(VAR_5) - VAR_3)/2 + VAR_3;
        VAR_9.top = (FUNC_3(VAR_6) - VAR_1)/2;
        VAR_9.bottom = (FUNC_3(VAR_6) - VAR_1)/2 + VAR_1;

        VAR_10 = FUNC_0(FUNC_4(0,0,0));
        VAR_11 = FUNC_0(FUNC_4(255,255,255));

        while((VAR_9.bottom - VAR_9.top) > VAR_2){
            (VAR_12)? FUNC_2(VAR_8, &VAR_9, VAR_11) : FUNC_2(VAR_8, &VAR_9, VAR_10);
            VAR_9.top += VAR_2;
            VAR_9.bottom -= VAR_2;
            VAR_9.left += VAR_2;
            VAR_9.right -= VAR_2;
            VAR_12 = !VAR_12;
        }
        FUNC_1((HGDIOBJ)VAR_10);
        FUNC_1((HGDIOBJ)VAR_11);
        VAR_7->lpVtbl->ReleaseDC(VAR_7, VAR_8);
    }
}
