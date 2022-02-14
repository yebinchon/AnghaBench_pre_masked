
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_8__ {size_t uNumTools; TYPE_1__* tools; } ;
struct TYPE_7__ {scalar_t__ hwnd; scalar_t__ uId; } ;
struct TYPE_6__ {int uFlags; scalar_t__ hwnd; scalar_t__ uId; } ;
typedef TYPE_1__ TTTOOL_INFO ;
typedef TYPE_2__ TTTOOLINFOW ;
typedef TYPE_3__ TOOLTIPS_INFO ;
typedef size_t INT ;


 int VAR_0 ;

__attribute__((used)) static INT
FUNC_0 (const TOOLTIPS_INFO *VAR_1, const TTTOOLINFOW *VAR_2)
{
    TTTOOL_INFO *VAR_3;
    UINT VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_1->uNumTools; VAR_4++) {
 VAR_3 = &VAR_1->tools[VAR_4];

 if (!(VAR_3->uFlags & VAR_0) &&
     (VAR_2->hwnd == VAR_3->hwnd) &&
     (VAR_2->uId == VAR_3->uId))
     return VAR_4;
    }

    for (VAR_4 = 0; VAR_4 < VAR_1->uNumTools; VAR_4++) {
 VAR_3 = &VAR_1->tools[VAR_4];

 if ((VAR_3->uFlags & VAR_0) &&
     (VAR_2->uId == VAR_3->uId))
     return VAR_4;
    }

    return -1;
}
