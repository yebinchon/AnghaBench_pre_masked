
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char AsciiChar; } ;
struct TYPE_7__ {int wVirtualKeyCode; TYPE_1__ uChar; int bKeyDown; } ;
struct TYPE_8__ {TYPE_2__ KeyEvent; } ;
struct TYPE_9__ {scalar_t__ EventType; TYPE_3__ Event; } ;
typedef TYPE_4__ INPUT_RECORD ;
typedef int DWORD ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,TYPE_4__*,int,int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int VAR_2 ;

int FUNC_4(void) {

    const int VAR_3 = FUNC_2();
    if (VAR_3) {
        return VAR_3;
    }


    FUNC_1();
    DWORD VAR_4;
    INPUT_RECORD VAR_5;
    for (;;) {
      if (!FUNC_0(VAR_2, &VAR_5, 1, &VAR_4) || !VAR_4) {
          return VAR_0;
      }
      if (VAR_5.EventType != VAR_1 || !VAR_5.Event.KeyEvent.bKeyDown) {
          continue;
      }
      const char VAR_6 = VAR_5.Event.KeyEvent.uChar.AsciiChar;
      if (VAR_6) {
          return VAR_6;
      }
      const int VAR_7 = FUNC_3(VAR_5.Event.KeyEvent.wVirtualKeyCode);
      if (VAR_7) {
          return VAR_7;
      }
    }
}
