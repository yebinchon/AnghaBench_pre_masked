
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int char_u ;
struct TYPE_5__ {int MouseEvent; int KeyEvent; } ;
struct TYPE_6__ {scalar_t__ EventType; TYPE_1__ Event; } ;
typedef TYPE_2__ INPUT_RECORD ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (long) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int *,int *,int *,int*,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (TYPE_2__) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 (int ,TYPE_2__*,int,int *) ;
 int FUNC_7 () ;
 int FUNC_8 () ;

__attribute__((used)) static char_u
FUNC_9(int *VAR_8, char_u *VAR_9)
{
    char_u VAR_10;

    for (;;)
    {
 INPUT_RECORD VAR_11;
 DWORD VAR_12 = 0;
 if (FUNC_6(VAR_6, &VAR_11, 1, &VAR_12) == 0)
 {
     if (VAR_5)
  FUNC_7();
     FUNC_1();
     continue;
 }

 if (VAR_11.EventType == VAR_1)
 {
     if (FUNC_2(&VAR_11.Event.KeyEvent, &VAR_10, VAR_9,
           VAR_8, VAR_3))
  return VAR_10;
 }
 else if (VAR_11.EventType == VAR_0)
     FUNC_4(VAR_11);
 else if (VAR_11.EventType == VAR_4)
     FUNC_8();







    }
}
