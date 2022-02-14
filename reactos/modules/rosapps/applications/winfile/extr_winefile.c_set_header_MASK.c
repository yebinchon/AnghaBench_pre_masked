
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int cxy; int mask; } ;
struct TYPE_4__ {int* widths; int hwndHeader; int hwnd; } ;
typedef TYPE_1__ Pane ;
typedef int LPARAM ;
typedef TYPE_2__ HDITEMW ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int,int ) ;

__attribute__((used)) static void FUNC_2(Pane* VAR_4)
{
 HDITEMW VAR_5;
 int VAR_6 = FUNC_0(VAR_4->hwnd, VAR_3);
 int VAR_7=0, VAR_8=0;

 VAR_5.mask = VAR_1;
 VAR_5.cxy = 0;

 for(; (VAR_7 < VAR_0) && (VAR_8+VAR_4->widths[VAR_7] < VAR_6); VAR_7++) {
  VAR_8 += VAR_4->widths[VAR_7];
  FUNC_1(VAR_4->hwndHeader, VAR_2, VAR_7, (LPARAM)&VAR_5);
 }

 if (VAR_7 < VAR_0) {
  VAR_8 += VAR_4->widths[VAR_7];
  VAR_5.cxy = VAR_8 - VAR_6;
  FUNC_1(VAR_4->hwndHeader, VAR_2, VAR_7++, (LPARAM)&VAR_5);

  for(; VAR_7 < VAR_0; VAR_7++) {
   VAR_5.cxy = VAR_4->widths[VAR_7];
   VAR_8 += VAR_4->widths[VAR_7];
   FUNC_1(VAR_4->hwndHeader, VAR_2, VAR_7, (LPARAM)&VAR_5);
  }
 }
}
