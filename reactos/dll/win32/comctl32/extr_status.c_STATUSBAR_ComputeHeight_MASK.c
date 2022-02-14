
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_11__ {scalar_t__ top; scalar_t__ bottom; } ;
struct TYPE_10__ {int Self; scalar_t__ minHeight; scalar_t__ verticalBorder; scalar_t__ hDefaultFont; scalar_t__ hFont; } ;
struct TYPE_9__ {int tmInternalLeading; scalar_t__ tmHeight; } ;
typedef TYPE_1__ TEXTMETRICW ;
typedef TYPE_2__ STATUS_INFO ;
typedef TYPE_3__ RECT ;
typedef int HTHEME ;
typedef int HDC ;


 int FUNC_0 (scalar_t__,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ,TYPE_3__*,TYPE_3__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (TYPE_3__*,int ,int ,int ,scalar_t__) ;
 int FUNC_8 (char*,scalar_t__,int,scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;

__attribute__((used)) static UINT
FUNC_10(STATUS_INFO *VAR_2)
{
    HTHEME VAR_3;
    UINT VAR_4;
    TEXTMETRICW VAR_5;
    int VAR_6;

    FUNC_0(VAR_2->hFont ? VAR_2->hFont : VAR_2->hDefaultFont, &VAR_5);
    VAR_6 = (VAR_5.tmInternalLeading ? VAR_5.tmInternalLeading : 2);
    VAR_4 = FUNC_9(VAR_5.tmHeight + VAR_6 + 2*FUNC_2(VAR_0), VAR_2->minHeight) + VAR_2->verticalBorder;

    if ((VAR_3 = FUNC_4(VAR_2->Self)))
    {


        HDC VAR_7 = FUNC_1(VAR_2->Self);
        RECT VAR_8;

        FUNC_7(&VAR_8, 0, 0, 0, FUNC_9(VAR_2->minHeight, VAR_5.tmHeight));
        if (FUNC_6(FUNC_3(VAR_3, VAR_7, VAR_1, 0, &VAR_8, &VAR_8)))
        {
            VAR_4 = VAR_8.bottom - VAR_8.top;
        }
        FUNC_5(VAR_2->Self, VAR_7);
    }

    FUNC_8("    textHeight=%d+%d, final height=%d\n", VAR_5.tmHeight, VAR_5.tmInternalLeading, VAR_4);
    return VAR_4;
}
