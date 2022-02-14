
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_5__ {size_t uNumTools; TYPE_1__* tools; } ;
struct TYPE_4__ {int uFlags; scalar_t__ hwnd; scalar_t__ uId; int rect; } ;
typedef TYPE_1__ TTTOOL_INFO ;
typedef TYPE_2__ TOOLTIPS_INFO ;
typedef int POINT ;
typedef size_t INT ;
typedef scalar_t__ HWND ;


 int FUNC_0 (int *,int const) ;
 int VAR_0 ;

__attribute__((used)) static INT
FUNC_1 (const TOOLTIPS_INFO *VAR_1, HWND VAR_2, const POINT *VAR_3)
{
    TTTOOL_INFO *VAR_4;
    UINT VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_1->uNumTools; VAR_5++) {
 VAR_4 = &VAR_1->tools[VAR_5];

 if (!(VAR_4->uFlags & VAR_0)) {
     if (VAR_2 != VAR_4->hwnd)
  continue;
     if (!FUNC_0 (&VAR_4->rect, *VAR_3))
  continue;
     return VAR_5;
 }
    }

    for (VAR_5 = 0; VAR_5 < VAR_1->uNumTools; VAR_5++) {
 VAR_4 = &VAR_1->tools[VAR_5];

 if (VAR_4->uFlags & VAR_0) {
     if ((HWND)VAR_4->uId == VAR_2)
  return VAR_5;
 }
    }

    return -1;
}
