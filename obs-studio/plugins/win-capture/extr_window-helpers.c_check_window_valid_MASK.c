
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum window_search_mode { ____Placeholder_window_search_mode } window_search_mode ;
struct TYPE_3__ {scalar_t__ bottom; scalar_t__ right; } ;
typedef TYPE_1__ RECT ;
typedef int HWND ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static bool FUNC_4(HWND VAR_5, enum window_search_mode VAR_6)
{
 DWORD VAR_7, VAR_8;
 RECT VAR_9;

 if (!FUNC_3(VAR_5) ||
     (VAR_6 == VAR_0 && FUNC_2(VAR_5)))
  return 0;

 FUNC_0(VAR_5, &VAR_9);
 VAR_7 = (DWORD)FUNC_1(VAR_5, VAR_2);
 VAR_8 = (DWORD)FUNC_1(VAR_5, VAR_1);

 if (VAR_8 & VAR_4)
  return 0;
 if (VAR_7 & VAR_3)
  return 0;
 if (VAR_6 == VAR_0 && (VAR_9.bottom == 0 || VAR_9.right == 0))
  return 0;

 return 1;
}
