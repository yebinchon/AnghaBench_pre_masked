
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_20__ {int cxy; int mask; } ;
struct TYPE_19__ {int iItem; TYPE_1__* pitem; } ;
struct TYPE_18__ {int code; } ;
struct TYPE_17__ {int* widths; int* positions; int hwnd; int hwndHeader; } ;
struct TYPE_16__ {int right; int left; int bottom; int top; } ;
struct TYPE_15__ {int cxy; } ;
typedef TYPE_2__ RECT ;
typedef TYPE_3__ Pane ;
typedef TYPE_4__ NMHDR ;
typedef int LRESULT ;
typedef TYPE_5__* LPNMHEADERW ;
typedef int LPARAM ;
typedef TYPE_6__ HDITEMW ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;

 int FUNC_2 (int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,TYPE_2__*,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int ,int,int ,TYPE_2__*,TYPE_2__*,int ,int ,int ) ;
 int FUNC_5 (int ,int ,size_t,int ) ;
 int VAR_10 ;
 int FUNC_6 (TYPE_3__*,int) ;
 int FUNC_7 (TYPE_3__*) ;

__attribute__((used)) static LRESULT FUNC_8(Pane* VAR_11, NMHDR* VAR_12)
{
 switch(VAR_12->code) {
  case 128: {
   LPNMHEADERW VAR_13 = (LPNMHEADERW)VAR_12;
   int VAR_14 = VAR_13->iItem;
   int VAR_15 = VAR_13->pitem->cxy - VAR_11->widths[VAR_14];
   int VAR_16;

   RECT VAR_17;
   FUNC_0(VAR_11->hwnd, &VAR_17);

   VAR_11->widths[VAR_14] += VAR_15;

   for(VAR_16=VAR_14; ++VAR_16<=VAR_0; )
    VAR_11->positions[VAR_16] += VAR_15;

   {
    int VAR_18 = FUNC_1(VAR_11->hwnd, VAR_8);
    RECT VAR_19;
    RECT VAR_20;

    VAR_19.left = VAR_11->positions[VAR_14+1]-VAR_18;
    VAR_19.top = 0;
    VAR_19.right = VAR_17.right;
    VAR_19.bottom = VAR_17.bottom;

    VAR_20.left = VAR_11->positions[VAR_14]-VAR_18;
    VAR_20.top = 0;
    VAR_20.right = VAR_17.right;
    VAR_20.bottom = VAR_17.bottom;

    if (VAR_19.left < 0) VAR_19.left = 0;
    if (VAR_20.left < 0) VAR_20.left = 0;

    FUNC_4(VAR_11->hwnd, VAR_15, 0, &VAR_19, &VAR_20, 0, 0, VAR_9);

    VAR_20.right = VAR_11->positions[VAR_14+1];
    FUNC_3(VAR_11->hwnd, &VAR_20, 0, VAR_6|VAR_7);

    if (VAR_12->code == VAR_4) {
     FUNC_5(VAR_11->hwnd, VAR_5, VAR_11->positions[VAR_0], 0);

     if (FUNC_1(VAR_11->hwnd, VAR_8) != VAR_18)
      FUNC_7(VAR_11);
    }
   }

   return VAR_1;
  }

  case 129: {
   LPNMHEADERW VAR_21 = (LPNMHEADERW)VAR_12;
   HDITEMW VAR_22;

   FUNC_6(VAR_11, VAR_21->iItem);
   VAR_22.mask = VAR_2;
   VAR_22.cxy = VAR_11->widths[VAR_21->iItem];

   FUNC_5(VAR_11->hwndHeader, VAR_3, VAR_21->iItem, (LPARAM)&VAR_22);
   FUNC_2(VAR_11->hwnd, 0, VAR_10);
   break;}
 }

 return 0;
}
