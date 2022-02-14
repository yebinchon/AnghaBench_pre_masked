
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int member_0; int* rgstate; } ;
typedef TYPE_1__ SCROLLBARINFO ;
typedef int INT ;
typedef int HWND ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,TYPE_1__*) ;
 int VAR_1 ;

BOOL
FUNC_1(HWND VAR_2, INT VAR_3)
{
  SCROLLBARINFO VAR_4 = {sizeof(SCROLLBARINFO)};
  if(!FUNC_0(VAR_2, VAR_3, &VAR_4))
    return VAR_0;

  return !(VAR_4.rgstate[0] & VAR_1);
}
