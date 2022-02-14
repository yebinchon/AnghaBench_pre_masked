
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int si ;
typedef int VOID ;
struct TYPE_9__ {int hSelf; int Height; int Width; } ;
struct TYPE_8__ {scalar_t__ bottom; scalar_t__ right; } ;
struct TYPE_7__ {int cbSize; int fMask; int nMax; scalar_t__ nPage; scalar_t__ nMin; } ;
typedef TYPE_1__ SCROLLINFO ;
typedef TYPE_2__ RECT ;
typedef TYPE_3__* PEDIT_WND_INFO ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,TYPE_1__*,int ) ;
 int VAR_5 ;

__attribute__((used)) static VOID
FUNC_2(PEDIT_WND_INFO VAR_6)
{
    SCROLLINFO VAR_7;
    RECT VAR_8;

    FUNC_0(VAR_6->hSelf,
                  &VAR_8);

    VAR_7.cbSize = sizeof(VAR_7);
    VAR_7.fMask = VAR_3 | VAR_4;
    VAR_7.nPage = VAR_8.right - (2 * VAR_0);
    VAR_7.nMin = 0;
    VAR_7.nMax = VAR_6->Width;

    FUNC_1(VAR_6->hSelf,
                  VAR_1,
                  &VAR_7,
                  VAR_5);

    VAR_7.nPage = VAR_8.bottom - (2 * VAR_0);
    VAR_7.nMax = VAR_6->Height;
    FUNC_1(VAR_6->hSelf,
                  VAR_2,
                  &VAR_7,
                  VAR_5);
}
