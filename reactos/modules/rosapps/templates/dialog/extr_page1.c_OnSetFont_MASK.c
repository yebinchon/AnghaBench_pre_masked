
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WPARAM ;
struct TYPE_4__ {int flags; scalar_t__ cy; scalar_t__ cx; int hwnd; } ;
typedef TYPE_1__ WINDOWPOS ;
struct TYPE_5__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; } ;
typedef TYPE_2__ RECT ;
typedef int LPARAM ;
typedef int HWND ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int VAR_4 ;

void FUNC_2(HWND VAR_5, WPARAM VAR_6, LPARAM VAR_7)
{
 RECT VAR_8;
 WINDOWPOS VAR_9;

 FUNC_0(VAR_5, &VAR_8);
 VAR_9.hwnd = VAR_5;
 VAR_9.cx = VAR_8.right - VAR_8.left;
 VAR_9.cy = VAR_8.bottom - VAR_8.top;
 VAR_9.flags = VAR_0 | VAR_1 | VAR_2 | VAR_3;
 FUNC_1(VAR_5, VAR_4, 0, (LPARAM)&VAR_9);
}
