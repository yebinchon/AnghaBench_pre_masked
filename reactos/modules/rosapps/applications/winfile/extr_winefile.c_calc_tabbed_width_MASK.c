
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int hDC; } ;
struct TYPE_8__ {scalar_t__* widths; } ;
struct TYPE_7__ {scalar_t__ right; int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__ Pane ;
typedef TYPE_3__* LPDRAWITEMSTRUCT ;
typedef int LPCWSTR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int,TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_1(Pane* VAR_4, LPDRAWITEMSTRUCT VAR_5, int VAR_6, LPCWSTR VAR_7)
{
 RECT VAR_8 = {0, 0, 0, 0};

 FUNC_0(VAR_5->hDC, VAR_7, -1, &VAR_8, VAR_0|VAR_2|VAR_1|VAR_3|(2<<8));


 if (VAR_8.right > VAR_4->widths[VAR_6])
  VAR_4->widths[VAR_6] = VAR_8.right;
}
