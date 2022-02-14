
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int Size; TYPE_2__* Color; TYPE_1__* Theme; } ;
struct TYPE_9__ {TYPE_3__ ActiveTheme; } ;
struct TYPE_7__ {scalar_t__ ChildStyle; } ;
struct TYPE_6__ {scalar_t__ SizesList; } ;
typedef scalar_t__ PTHEME_STYLE ;
typedef int HWND ;
typedef TYPE_4__ GLOBALS ;


 int FUNC_0 (int ,int ,scalar_t__,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(HWND VAR_1, GLOBALS *VAR_2)
{
    PTHEME_STYLE VAR_3;

    if (VAR_2->ActiveTheme.Theme->SizesList)
        VAR_3 = VAR_2->ActiveTheme.Theme->SizesList;
    else
        VAR_3 = VAR_2->ActiveTheme.Color->ChildStyle;

    FUNC_0(VAR_1,
                              VAR_0,
                              VAR_3,
                              VAR_2->ActiveTheme.Size);
}
