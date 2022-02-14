
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int hSelf; scalar_t__ Height; scalar_t__ Width; int hDC; int * hBitmap; } ;
struct TYPE_5__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__* PSCREENSHOT ;
typedef int HDC ;
typedef int BOOL ;


 int FUNC_0 (int ,int ,int ,scalar_t__,scalar_t__,int ,int ,int ,int ) ;
 int * FUNC_1 (int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,TYPE_1__*) ;
 int FUNC_6 (int ,int ) ;
 int VAR_1 ;
 int FUNC_7 (int ,int *) ;
 int VAR_2 ;

__attribute__((used)) static BOOL
FUNC_8(PSCREENSHOT VAR_3)
{
    HDC VAR_4;
    RECT VAR_5;





    FUNC_5(VAR_3->hSelf, &VAR_5);
    VAR_3->Width = VAR_5.right - VAR_5.left;
    VAR_3->Height = VAR_5.bottom - VAR_5.top;


    if (!(VAR_4 = FUNC_3(VAR_3->hSelf)))
        return VAR_0;



    VAR_3->hBitmap = FUNC_1(VAR_4,
                                              VAR_3->Width,
                                              VAR_3->Height);
    if (VAR_3->hBitmap == ((void*)0))
    {
        FUNC_4();
        FUNC_6(VAR_3->hSelf, VAR_4);
        return VAR_0;
    }


    if (!(VAR_3->hDC = FUNC_2(VAR_4)))
    {
        FUNC_4();
        FUNC_6(VAR_3->hSelf, VAR_4);
        return VAR_0;
    }


    FUNC_7(VAR_3->hDC,
                 VAR_3->hBitmap);


    FUNC_0(VAR_3->hDC,
           0,
           0,
           VAR_3->Width,
           VAR_3->Height,
           VAR_4,
           0,
           0,
           VAR_1);


    FUNC_6(VAR_3->hSelf, VAR_4);

    return VAR_2;
}
