
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ wDayOfWeek; } ;
struct TYPE_7__ {scalar_t__ wDayOfWeek; } ;
struct TYPE_10__ {int dwStyle; int hwndNotify; TYPE_5__ maxSel; TYPE_1__ minSel; int hwndSelf; } ;
struct TYPE_8__ {int idFrom; int code; int hwndFrom; } ;
struct TYPE_9__ {TYPE_2__ nmhdr; TYPE_5__ stSelEnd; TYPE_1__ stSelStart; } ;
typedef TYPE_3__ NMSELCHANGE ;
typedef TYPE_4__ MONTHCAL_INFO ;
typedef int LPARAM ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int VAR_3 ;
 TYPE_5__ VAR_4 ;

__attribute__((used)) static inline void FUNC_2(const MONTHCAL_INFO *VAR_5)
{
    NMSELCHANGE VAR_6;

    VAR_6.nmhdr.hwndFrom = VAR_5->hwndSelf;
    VAR_6.nmhdr.idFrom = FUNC_0(VAR_5->hwndSelf, VAR_0);
    VAR_6.nmhdr.code = VAR_1;
    VAR_6.stSelStart = VAR_5->minSel;
    VAR_6.stSelStart.wDayOfWeek = 0;
    if(VAR_5->dwStyle & VAR_2){
        VAR_6.stSelEnd = VAR_5->maxSel;
        VAR_6.stSelEnd.wDayOfWeek = 0;
    }
    else
        VAR_6.stSelEnd = VAR_4;

    FUNC_1(VAR_5->hwndNotify, VAR_3, VAR_6.nmhdr.idFrom, (LPARAM)&VAR_6);
}
