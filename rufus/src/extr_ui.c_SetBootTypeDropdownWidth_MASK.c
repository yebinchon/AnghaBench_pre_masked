
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WPARAM ;
struct TYPE_6__ {scalar_t__ left; scalar_t__ right; } ;
struct TYPE_5__ {scalar_t__ cx; } ;
typedef TYPE_1__ SIZE ;
typedef TYPE_2__ RECT ;
typedef int POINT ;
typedef int LPARAM ;
typedef scalar_t__ HFONT ;
typedef int HDC ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (int *,int ,int *,int) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;
 int FUNC_8 (int ,int ) ;
 int VAR_5 ;

void FUNC_9(void)
{
 HDC VAR_6;
 HFONT VAR_7;
 SIZE VAR_8;
 RECT VAR_9;

 if (VAR_4 == ((void*)0))
  return;

 FUNC_2(VAR_2, &VAR_9);
 FUNC_3(((void*)0), VAR_3, (POINT*)&VAR_9, 2);
 VAR_6 = FUNC_0(VAR_2);
 VAR_7 = (HFONT)FUNC_6(VAR_2, VAR_1, 0, 0);
 FUNC_4(VAR_6, VAR_7);
 FUNC_1(VAR_6, VAR_5, &VAR_8);
 FUNC_8(VAR_2, VAR_6);
 FUNC_5(VAR_2, VAR_0, (WPARAM)FUNC_7(VAR_8.cx + 10, VAR_9.right - VAR_9.left), (LPARAM)0);
}
