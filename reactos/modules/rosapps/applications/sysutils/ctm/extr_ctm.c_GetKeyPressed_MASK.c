
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int wVirtualKeyCode; scalar_t__ bKeyDown; } ;
struct TYPE_6__ {TYPE_1__ KeyEvent; } ;
struct TYPE_7__ {scalar_t__ EventType; TYPE_2__ Event; } ;
typedef TYPE_3__ INPUT_RECORD ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,TYPE_3__*,int,int *) ;
 int VAR_1 ;

unsigned int FUNC_1(int VAR_2)
{
 DWORD VAR_3;
 INPUT_RECORD VAR_4;
 int VAR_5;


 for (VAR_5=0; VAR_5<VAR_2; VAR_5++)
 {
  if (!FUNC_0(VAR_1, &VAR_4, 1, &VAR_3)) {
   return 0;
  }

  if (VAR_4.EventType == VAR_0 && VAR_4.Event.KeyEvent.bKeyDown)
   return VAR_4.Event.KeyEvent.wVirtualKeyCode;
 }

 return 0;
}
