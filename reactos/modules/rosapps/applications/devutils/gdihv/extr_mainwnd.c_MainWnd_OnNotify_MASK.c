
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WPARAM ;
struct TYPE_8__ {int code; } ;
struct TYPE_7__ {int uNewState; int uOldState; int iItem; } ;
struct TYPE_6__ {int lParam; int iItem; int mask; } ;
typedef TYPE_1__ LV_ITEM ;
typedef int LRESULT ;
typedef TYPE_2__* LPNMLISTVIEW ;
typedef TYPE_3__* LPNMHDR ;
typedef int LPARAM ;
typedef int HWND ;
typedef int HANDLE ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int FUNC_2 (int ,TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

__attribute__((used)) static LRESULT
FUNC_4(HWND VAR_5, WPARAM VAR_6, LPARAM VAR_7)
{
 LPNMHDR VAR_8 = (LPNMHDR)VAR_7;

 switch(VAR_8->code)
 {
  case 128:
  {
   LPNMLISTVIEW VAR_9 = (LPNMLISTVIEW)VAR_8;
   if ((VAR_6 == VAR_1)
    && (VAR_9->uNewState & VAR_3)
    && !(VAR_9->uOldState & VAR_3))
   {
    LV_ITEM VAR_10;
    FUNC_3(&VAR_10, 0, sizeof(LV_ITEM));
    VAR_10.mask = VAR_2;
    VAR_10.iItem = VAR_9->iItem;
    (void)FUNC_2(FUNC_0(VAR_5, VAR_1), &VAR_10);
    FUNC_1(FUNC_0(VAR_5, VAR_0), (HANDLE)VAR_10.lParam);
    return VAR_4;
   }
   break;
  }
 }

 return 0;
}
