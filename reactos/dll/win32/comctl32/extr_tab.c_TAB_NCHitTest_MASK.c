
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_8__ {short x; short y; } ;
struct TYPE_7__ {int hwnd; } ;
typedef TYPE_1__ TAB_INFO ;
typedef TYPE_2__ POINT ;
typedef int LRESULT ;
typedef int LPARAM ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (TYPE_1__ const*,TYPE_2__,int *) ;

__attribute__((used)) static inline LRESULT
FUNC_4 (const TAB_INFO *VAR_2, LPARAM VAR_3)
{
  POINT VAR_4;
  UINT VAR_5;

  VAR_4.x = (short)FUNC_1(VAR_3);
  VAR_4.y = (short)FUNC_0(VAR_3);
  FUNC_2(VAR_2->hwnd, &VAR_4);

  if (FUNC_3(VAR_2, VAR_4, &VAR_5) == -1)
    return VAR_1;
  else
    return VAR_0;
}
