
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int input ;
typedef int ULONG ;
struct TYPE_6__ {int AsciiChar; } ;
struct TYPE_7__ {TYPE_1__ uChar; scalar_t__ bKeyDown; } ;
struct TYPE_8__ {TYPE_2__ KeyEvent; } ;
struct TYPE_9__ {scalar_t__ EventType; TYPE_3__ Event; } ;
typedef int PCSTR ;
typedef TYPE_4__ INPUT_RECORD ;
typedef int HANDLE ;
typedef int DWORD ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_4__*,int,int *) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int) ;
 scalar_t__ FUNC_6 (int ,int) ;
 int FUNC_7 (int ) ;

int FUNC_8(ULONG VAR_2, PCSTR VAR_3)
{
 HANDLE VAR_4;
 INPUT_RECORD VAR_5;
 DWORD VAR_6;
 int VAR_7;

 FUNC_2(VAR_2);
 FUNC_4(((void*)0));

 VAR_4 = FUNC_1(VAR_1);

 FUNC_0(VAR_4);

 for (;;) {
  FUNC_3(VAR_4, &VAR_5, sizeof(VAR_5), &VAR_6);

  if (VAR_5.EventType == VAR_0 &&
   VAR_5.Event.KeyEvent.bKeyDown) {

   VAR_7 = FUNC_7(VAR_5.Event.KeyEvent.uChar.AsciiChar);

   if (FUNC_6(VAR_3, VAR_7)) {
    break;
   }
  }
 }

 FUNC_5("%c\n", VAR_7);

 return VAR_7;
}
