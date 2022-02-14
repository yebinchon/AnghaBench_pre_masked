
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {int flags; scalar_t__ hwndSelf; scalar_t__ hwndCombo; scalar_t__ himl; } ;
struct TYPE_11__ {scalar_t__ top; scalar_t__ bottom; } ;
struct TYPE_14__ {TYPE_1__ rcImage; } ;
struct TYPE_13__ {scalar_t__ bottom; scalar_t__ top; scalar_t__ left; scalar_t__ right; } ;
struct TYPE_12__ {scalar_t__ cy; } ;
typedef TYPE_2__ SIZE ;
typedef TYPE_3__ RECT ;
typedef scalar_t__ LONG ;
typedef TYPE_4__ IMAGEINFO ;
typedef TYPE_5__ COMBOEX_INFO ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_5__ const*,TYPE_2__*) ;
 int FUNC_1 (scalar_t__,TYPE_3__*) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,TYPE_4__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (scalar_t__,int ,int,scalar_t__) ;
 int FUNC_4 (scalar_t__,int ,int ,int ,scalar_t__,scalar_t__,int) ;
 int FUNC_5 (char*,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_7 (const COMBOEX_INFO *VAR_7)
{
    SIZE VAR_8;
    LONG VAR_9;
    IMAGEINFO VAR_10;

    FUNC_0 (VAR_7, &VAR_8);
    VAR_9 = VAR_8.cy + VAR_1;
    if (VAR_7->himl && FUNC_2(VAR_7->himl, 0, &VAR_10)) {
 VAR_9 = FUNC_6 (VAR_10.rcImage.bottom - VAR_10.rcImage.top, VAR_9);
 FUNC_5("upgraded height due to image:  height=%d\n", VAR_9);
    }
    FUNC_3 (VAR_7->hwndSelf, VAR_2, -1, VAR_9);
    if (VAR_7->hwndCombo) {
        FUNC_3 (VAR_7->hwndCombo, VAR_2, 0, VAR_9);
 if ( !(VAR_7->flags & VAR_0)) {
     RECT VAR_11, VAR_12;
     FUNC_1(VAR_7->hwndCombo, &VAR_11);
            FUNC_1(VAR_7->hwndSelf, &VAR_12);
            if (VAR_11.bottom > VAR_12.bottom)
                FUNC_4( VAR_7->hwndSelf, 0, 0, 0, VAR_12.right - VAR_12.left,
                              VAR_11.bottom - VAR_11.top,
                              VAR_4 | VAR_6 | VAR_3 | VAR_5 );
 }
    }
}
