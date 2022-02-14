
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int cx; } ;
struct TYPE_13__ {TYPE_2__ spaceSize; int hfont; } ;
struct TYPE_9__ {scalar_t__ bottom; scalar_t__ right; scalar_t__ top; scalar_t__ left; } ;
struct TYPE_12__ {TYPE_1__ rcItem; int hDC; int hwndItem; scalar_t__ itemState; scalar_t__ itemAction; scalar_t__ itemID; scalar_t__ CtlID; scalar_t__ CtlType; } ;
struct TYPE_11__ {int* widths; int* positions; int hwnd; } ;
typedef TYPE_3__ Pane ;
typedef int HFONT ;
typedef int HDC ;
typedef int Entry ;
typedef TYPE_4__ DRAWITEMSTRUCT ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_8__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int,int ) ;
 int FUNC_4 (TYPE_3__*,TYPE_4__*,int *,int) ;

__attribute__((used)) static void FUNC_5(Pane* VAR_6, int VAR_7)
{
 HFONT VAR_8;
 int VAR_9, VAR_10;
 int VAR_11 = FUNC_3(VAR_6->hwnd, VAR_3, 0, 0);
 int VAR_12;
 HDC VAR_13;

 VAR_6->widths[VAR_7] = 0;

 VAR_13 = FUNC_0(VAR_6->hwnd);
 VAR_8 = FUNC_2(VAR_13, VAR_1.hfont);

 for(VAR_12=0; VAR_12<VAR_11; VAR_12++) {
  Entry* VAR_14 = (Entry*)FUNC_3(VAR_6->hwnd, VAR_4, VAR_12, 0);
  DRAWITEMSTRUCT VAR_15;

  VAR_15.CtlType = 0;
  VAR_15.CtlID = 0;
  VAR_15.itemID = 0;
  VAR_15.itemAction = 0;
  VAR_15.itemState = 0;
  VAR_15.hwndItem = VAR_6->hwnd;
  VAR_15.hDC = VAR_13;
  VAR_15.rcItem.left = 0;
  VAR_15.rcItem.top = 0;
  VAR_15.rcItem.right = 0;
  VAR_15.rcItem.bottom = 0;


  FUNC_4(VAR_6, &VAR_15, VAR_14, VAR_7);
 }

 FUNC_2(VAR_13, VAR_8);
 FUNC_1(VAR_6->hwnd, VAR_13);

 VAR_10 = VAR_6->widths[VAR_7];

 if (VAR_10) {
  VAR_10 += 3*VAR_1.spaceSize.cx;

  if (VAR_10 < VAR_2)
   VAR_10 = VAR_2;
 }

 VAR_6->widths[VAR_7] = VAR_10;

 VAR_9 = VAR_6->positions[VAR_7] + VAR_10;

 for(; VAR_7<VAR_0-1; ) {
  VAR_6->positions[++VAR_7] = VAR_9;
  VAR_9 += VAR_6->widths[VAR_7];
 }

 FUNC_3(VAR_6->hwnd, VAR_5, VAR_9, 0);
}
