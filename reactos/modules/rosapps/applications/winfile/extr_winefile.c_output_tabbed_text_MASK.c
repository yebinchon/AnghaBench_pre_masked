
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ cx; } ;
struct TYPE_15__ {TYPE_1__ spaceSize; } ;
struct TYPE_11__ {int left; int bottom; int top; } ;
struct TYPE_14__ {int hDC; TYPE_2__ rcItem; } ;
struct TYPE_13__ {scalar_t__* positions; } ;
struct TYPE_12__ {int bottom; scalar_t__ right; int top; scalar_t__ left; } ;
typedef TYPE_3__ RECT ;
typedef TYPE_4__ Pane ;
typedef TYPE_5__* LPDRAWITEMSTRUCT ;
typedef int LPCWSTR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,TYPE_3__*,int) ;
 TYPE_8__ VAR_3 ;

__attribute__((used)) static void FUNC_1(Pane* VAR_4, LPDRAWITEMSTRUCT VAR_5, int VAR_6, LPCWSTR VAR_7)
{
 int VAR_8 = VAR_5->rcItem.left;
 RECT VAR_9;

 VAR_9.left = VAR_8+VAR_4->positions[VAR_6]+VAR_3.spaceSize.cx;
 VAR_9.top = VAR_5->rcItem.top;
 VAR_9.right = VAR_8+VAR_4->positions[VAR_6+1]-VAR_3.spaceSize.cx;
 VAR_9.bottom = VAR_5->rcItem.bottom;

 FUNC_0(VAR_5->hDC, VAR_7, -1, &VAR_9, VAR_1|VAR_0|VAR_2|(2<<8));
}
