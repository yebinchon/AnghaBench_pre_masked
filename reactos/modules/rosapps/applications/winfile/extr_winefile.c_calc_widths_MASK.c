
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int orgWidths ;
typedef int orgPositions ;
struct TYPE_9__ {int cx; } ;
struct TYPE_13__ {int hfont; TYPE_1__ spaceSize; } ;
struct TYPE_10__ {scalar_t__ bottom; scalar_t__ right; scalar_t__ top; scalar_t__ left; } ;
struct TYPE_12__ {TYPE_2__ rcItem; int hDC; int hwndItem; scalar_t__ itemState; scalar_t__ itemAction; scalar_t__ itemID; scalar_t__ CtlID; scalar_t__ CtlType; } ;
struct TYPE_11__ {int* widths; int* positions; int hwnd; } ;
typedef TYPE_3__ Pane ;
typedef int HFONT ;
typedef int HDC ;
typedef int Entry ;
typedef TYPE_4__ DRAWITEMSTRUCT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_8__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int,int ) ;
 int VAR_7 ;
 int FUNC_5 (TYPE_3__*,TYPE_4__*,int *,int) ;
 int FUNC_6 (int*,int*,int) ;
 int FUNC_7 (int*,int*,int) ;

__attribute__((used)) static BOOL FUNC_8(Pane* VAR_8, BOOL VAR_9)
{
 int VAR_10, VAR_11, VAR_12, VAR_13=3*VAR_2.spaceSize.cx;
 int VAR_14 = FUNC_4(VAR_8->hwnd, VAR_4, 0, 0);
 int VAR_15[VAR_0];
 int VAR_16[VAR_0+1];
 HFONT VAR_17;
 HDC VAR_18;
 int VAR_19;

 if (!VAR_9) {
  FUNC_7(VAR_15, VAR_8->widths, sizeof(VAR_15));
  FUNC_7(VAR_16, VAR_8->positions, sizeof(VAR_16));
 }

 for(VAR_10=0; VAR_10<VAR_0; VAR_10++)
  VAR_8->widths[VAR_10] = 0;

 VAR_18 = FUNC_0(VAR_8->hwnd);
 VAR_17 = FUNC_3(VAR_18, VAR_2.hfont);

 for(VAR_19=0; VAR_19<VAR_14; VAR_19++) {
  Entry* VAR_20 = (Entry*)FUNC_4(VAR_8->hwnd, VAR_5, VAR_19, 0);

  DRAWITEMSTRUCT VAR_21;

  VAR_21.CtlType = 0;
  VAR_21.CtlID = 0;
  VAR_21.itemID = 0;
  VAR_21.itemAction = 0;
  VAR_21.itemState = 0;
  VAR_21.hwndItem = VAR_8->hwnd;
  VAR_21.hDC = VAR_18;
  VAR_21.rcItem.left = 0;
  VAR_21.rcItem.top = 0;
  VAR_21.rcItem.right = 0;
  VAR_21.rcItem.bottom = 0;


  FUNC_5(VAR_8, &VAR_21, VAR_20, VAR_0);
 }

 FUNC_3(VAR_18, VAR_17);
 FUNC_2(VAR_8->hwnd, VAR_18);

 VAR_11 = 0;
 for(VAR_10=0; VAR_10<VAR_0; VAR_10++) {
  VAR_8->positions[VAR_10] = VAR_11;
  VAR_12 = VAR_8->widths[VAR_10];

  if (VAR_12) {
   VAR_12 += VAR_13;

   if (VAR_12 < VAR_3)
    VAR_12 = VAR_3;

   VAR_8->widths[VAR_10] = VAR_12;
  }

  VAR_11 += VAR_12;
 }

 VAR_8->positions[VAR_0] = VAR_11;

 FUNC_4(VAR_8->hwnd, VAR_6, VAR_11, 0);


 if (!VAR_9 && !FUNC_6(VAR_15, VAR_8->widths, sizeof(VAR_15)))
  return VAR_1;


 if (!VAR_9 && VAR_8->widths[0]<VAR_15[0] &&
  !FUNC_6(VAR_15+1, VAR_8->widths+1, sizeof(VAR_15)-sizeof(int))) {
  VAR_8->widths[0] = VAR_15[0];
  FUNC_7(VAR_8->positions, VAR_16, sizeof(VAR_16));

  return VAR_1;
 }

 FUNC_1(VAR_8->hwnd, 0, VAR_7);

 return VAR_7;
}
