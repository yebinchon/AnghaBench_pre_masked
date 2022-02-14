
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_7__ {int hMenuView; } ;
struct TYPE_6__ {int hwnd; int visible_cols; } ;
typedef TYPE_1__ Pane ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,int const,int) ;
 int VAR_1 ;
 TYPE_5__ VAR_2 ;



 int FUNC_1 (int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static BOOL FUNC_4(Pane* VAR_6, UINT VAR_7)
{
 switch(VAR_7) {
  case 128:
   if (VAR_6->visible_cols) {
    VAR_6->visible_cols = 0;
    FUNC_2(VAR_6, VAR_5);
    FUNC_3(VAR_6);
    FUNC_1(VAR_6->hwnd, 0, VAR_5);
    FUNC_0(VAR_2.hMenuView, 128, VAR_3|VAR_4);
    FUNC_0(VAR_2.hMenuView, 129, VAR_3);
   }
   break;

  case 129:
   if (VAR_6->visible_cols != VAR_0) {
    VAR_6->visible_cols = VAR_0;
    FUNC_2(VAR_6, VAR_5);
    FUNC_3(VAR_6);
    FUNC_1(VAR_6->hwnd, 0, VAR_5);
    FUNC_0(VAR_2.hMenuView, 128, VAR_3);
    FUNC_0(VAR_2.hMenuView, 129, VAR_3|VAR_4);
   }
   break;

  case 130: {
   FUNC_2(VAR_6, VAR_5);
   FUNC_3(VAR_6);
   FUNC_1(VAR_6->hwnd, 0, VAR_5);
   break;}



  default:
   return VAR_1;
 }

 return VAR_5;
}
