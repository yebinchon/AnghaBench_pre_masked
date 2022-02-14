
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WPARAM ;
typedef int UINT ;
struct TYPE_3__ {int y; int x; } ;
typedef TYPE_1__ POINT ;
typedef int LRESULT ;
typedef int LPARAM ;
typedef int HWND ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static LRESULT
FUNC_4(HWND VAR_3, UINT VAR_4, WPARAM VAR_5, LPARAM VAR_6)
{
  POINT VAR_7;

  VAR_7.x = FUNC_2(VAR_6);
  VAR_7.y = FUNC_1(VAR_6);
  if (FUNC_3(VAR_0, &VAR_7))
  {
    VAR_1 = VAR_7.x;
    VAR_2 = VAR_7.y;
  }
  return FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6);
}
