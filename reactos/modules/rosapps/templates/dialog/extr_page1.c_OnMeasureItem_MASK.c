
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int lfHeight; } ;
struct TYPE_5__ {int itemHeight; } ;
typedef TYPE_1__* LPMEASUREITEMSTRUCT ;
typedef TYPE_2__ LOGFONT ;
typedef int HFONT ;


 int FUNC_0 (int ,int,TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;

void FUNC_2(LPMEASUREITEMSTRUCT VAR_1)
{
    HFONT VAR_2;
 LOGFONT VAR_3;

    VAR_2 = FUNC_1(VAR_0);
    FUNC_0(VAR_2, sizeof(LOGFONT), &VAR_3);
 if (VAR_3.lfHeight < 0)
  VAR_1->itemHeight = -VAR_3.lfHeight;
 else
  VAR_1->itemHeight = VAR_3.lfHeight;
}
