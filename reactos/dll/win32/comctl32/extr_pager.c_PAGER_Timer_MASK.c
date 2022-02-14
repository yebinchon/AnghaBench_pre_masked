
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ TLbtnState; int dwStyle; scalar_t__ direction; int hwndSelf; } ;
typedef TYPE_1__ PAGER_INFO ;
typedef int LRESULT ;
typedef scalar_t__ INT ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int ,scalar_t__,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ,int) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_4 (char*,int ,scalar_t__,...) ;

__attribute__((used)) static LRESULT
FUNC_5 (PAGER_INFO* VAR_15, INT VAR_16)
{
    INT VAR_17;


    if (VAR_16 == VAR_13) {
 if (VAR_15->TLbtnState == VAR_0)
     VAR_17 = (VAR_15->dwStyle & VAR_6) ?
  VAR_2 : VAR_4;
 else
     VAR_17 = (VAR_15->dwStyle & VAR_6) ?
  VAR_3 : VAR_1;
 FUNC_4("[%p] TIMERID1: style=%08x, dir=%d\n",
              VAR_15->hwndSelf, VAR_15->dwStyle, VAR_17);
 FUNC_0(VAR_15->hwndSelf, VAR_13);
 FUNC_2(VAR_15->hwndSelf, VAR_13, VAR_7, 0);
 if (VAR_15->dwStyle & VAR_5) {
     FUNC_1(VAR_15, VAR_17);
     FUNC_3(VAR_15->hwndSelf, 0, 0, 0, 0, 0,
    VAR_8 | VAR_11 | VAR_10 |
    VAR_12 | VAR_9);
 }
 return 0;

    }

    FUNC_4("[%p] TIMERID2: dir=%d\n", VAR_15->hwndSelf, VAR_15->direction);
    FUNC_0(VAR_15->hwndSelf, VAR_14);
    if (VAR_15->direction > 0) {
 FUNC_1(VAR_15, VAR_15->direction);
 FUNC_2(VAR_15->hwndSelf, VAR_14, VAR_7, 0);
    }
    return 0;
}
