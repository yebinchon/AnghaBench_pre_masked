
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int WPARAM ;
typedef int UINT ;
struct TYPE_2__ {scalar_t__ left; scalar_t__ top; scalar_t__ right; scalar_t__ bottom; } ;
typedef int LRESULT ;
typedef int LPARAM ;
typedef int HWND ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static LRESULT
FUNC_2(HWND VAR_4, UINT VAR_5, WPARAM VAR_6, LPARAM VAR_7)
{
  if (VAR_1 >= VAR_3.left &&
      VAR_2 >= VAR_3.top &&
      VAR_1 < VAR_3.right &&
      VAR_2 < VAR_3.bottom)
  {
    FUNC_1(VAR_0);
  }

  return FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7);
}
