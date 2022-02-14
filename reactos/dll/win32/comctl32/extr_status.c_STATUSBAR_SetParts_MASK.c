
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_11__ {int style; scalar_t__ x; struct TYPE_11__* text; } ;
struct TYPE_10__ {size_t numParts; int Self; scalar_t__ hwndToolTip; TYPE_3__* parts; } ;
struct TYPE_9__ {int cbSize; size_t uId; int * lpszText; int hwnd; } ;
typedef TYPE_1__ TTTOOLINFOW ;
typedef TYPE_2__ STATUS_INFO ;
typedef TYPE_3__ STATUSWINDOWPART ;
typedef scalar_t__* LPINT ;
typedef int LPARAM ;
typedef size_t INT ;
typedef int BOOL ;


 TYPE_3__* FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,int *,int ) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_2__*) ;
 size_t FUNC_4 (scalar_t__,int ,int ,int ) ;
 int FUNC_5 (char*,size_t,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (TYPE_1__*,int) ;

__attribute__((used)) static BOOL
FUNC_7 (STATUS_INFO *VAR_6, INT VAR_7, LPINT VAR_8)
{
    STATUSWINDOWPART *VAR_9;
    INT VAR_10, VAR_11;

    FUNC_5("(%d,%p)\n", VAR_7, VAR_8);

    if(!VAR_7) return VAR_0;

    VAR_11 = VAR_6->numParts;
    VAR_6->numParts = VAR_7;
    if (VAR_11 > VAR_6->numParts) {
 for (VAR_10 = VAR_6->numParts ; VAR_10 < VAR_11; VAR_10++) {
     if (!(VAR_6->parts[VAR_10].style & VAR_1))
  FUNC_1 (VAR_6->parts[VAR_10].text);
 }
    } else if (VAR_11 < VAR_6->numParts) {
 VAR_9 = FUNC_0 (sizeof(STATUSWINDOWPART) * VAR_6->numParts);
 if (!VAR_9) return VAR_0;
 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
     VAR_9[VAR_10] = VAR_6->parts[VAR_10];
 }
        FUNC_1 (VAR_6->parts);
 VAR_6->parts = VAR_9;
    }
    if (VAR_11 == VAR_6->numParts) {
 for (VAR_10=0; VAR_10 < VAR_11; VAR_10++)
     if (VAR_6->parts[VAR_10].x != VAR_8[VAR_10])
  break;
 if (VAR_10==VAR_11)
     return VAR_2;
    }

    for (VAR_10 = 0; VAR_10 < VAR_6->numParts; VAR_10++)
 VAR_6->parts[VAR_10].x = VAR_8[VAR_10];

    if (VAR_6->hwndToolTip) {
 INT VAR_12;
 TTTOOLINFOW VAR_13;
 WCHAR VAR_14 = 0;

 FUNC_6 (&VAR_13, sizeof(TTTOOLINFOW));
 VAR_13.cbSize = sizeof(TTTOOLINFOW);
 VAR_13.hwnd = VAR_6->Self;
 VAR_13.lpszText = &VAR_14;

 VAR_12 = FUNC_4 (VAR_6->hwndToolTip, VAR_5, 0, 0);
 if (VAR_12 < VAR_6->numParts) {

     for (VAR_10 = VAR_12; VAR_10 < VAR_6->numParts; VAR_10++) {
  FUNC_5("add tool %d\n", VAR_10);
  VAR_13.uId = VAR_10;
  FUNC_4 (VAR_6->hwndToolTip, VAR_3,
    0, (LPARAM)&VAR_13);
     }
 }
 else if (VAR_12 > VAR_6->numParts) {

     for (VAR_10 = VAR_12 - 1; VAR_10 >= VAR_6->numParts; VAR_10--) {
  FUNC_5("delete tool %d\n", VAR_10);
  VAR_13.uId = VAR_10;
  FUNC_4 (VAR_6->hwndToolTip, VAR_4,
    0, (LPARAM)&VAR_13);
     }
 }
    }
    FUNC_3 (VAR_6);
    FUNC_2(VAR_6->Self, ((void*)0), VAR_0);
    return VAR_2;
}
