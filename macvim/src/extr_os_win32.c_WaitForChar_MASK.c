
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int char_u ;
struct TYPE_12__ {scalar_t__ UnicodeChar; } ;
struct TYPE_16__ {int wVirtualKeyCode; TYPE_2__ uChar; scalar_t__ bKeyDown; } ;
struct TYPE_11__ {int Y; } ;
struct TYPE_15__ {TYPE_1__ dwCursorPosition; } ;
struct TYPE_13__ {int MouseEvent; TYPE_9__ KeyEvent; } ;
struct TYPE_14__ {scalar_t__ EventType; TYPE_3__ Event; } ;
typedef TYPE_4__ INPUT_RECORD ;
typedef scalar_t__ DWORD ;
typedef TYPE_5__ CONSOLE_SCREEN_BUFFER_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,TYPE_5__*) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (int,int *,int,scalar_t__,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 int VAR_13 ;
 scalar_t__ FUNC_4 (TYPE_9__*,int *,int *,int *,int) ;
 scalar_t__ FUNC_5 (int *) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_6 (TYPE_4__) ;
 scalar_t__ FUNC_7 () ;
 int VAR_17 ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 () ;
 long VAR_18 ;
 int FUNC_10 (int ,TYPE_4__*,int,scalar_t__*) ;
 int FUNC_11 (int ,TYPE_4__*,int,scalar_t__*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 () ;

__attribute__((used)) static int
FUNC_16(long VAR_19)
{
    DWORD VAR_20 = 0, VAR_21 = 0;
    INPUT_RECORD VAR_22;
    DWORD VAR_23;
    char_u VAR_24, VAR_25;

    if (VAR_19 > 0)

 VAR_21 = FUNC_1() + VAR_19;
    else if (VAR_19 < 0)

 VAR_21 = VAR_4;




    for (;;)
    {






 if (0






    )
     return VAR_10;

 if (VAR_19 > 0)
 {


     VAR_20 = FUNC_1();
     if ((int)(VAR_20 - VAR_21) >= 0)
  break;
 }
 if (VAR_19 != 0)
 {
     DWORD VAR_26 = VAR_21 - VAR_20;
     if (FUNC_3(VAR_14, VAR_26) != VAR_11)

      continue;
 }

 VAR_23 = 0;
 FUNC_10(VAR_14, &VAR_22, 1, &VAR_23);
 if (VAR_23 > 0)
 {
     if (VAR_22.EventType == VAR_5 && VAR_22.Event.KeyEvent.bKeyDown)
     {
  if (FUNC_4(&VAR_22.Event.KeyEvent, &VAR_24, &VAR_25,
         ((void*)0), VAR_2))
      return VAR_10;
     }

     FUNC_11(VAR_14, &VAR_22, 1, &VAR_23);

     if (VAR_22.EventType == VAR_3)
  FUNC_6(VAR_22);
     else if (VAR_22.EventType == VAR_12)
  FUNC_15();





 }
 else if (VAR_19 == 0)
     break;
    }






    return VAR_2;
}
