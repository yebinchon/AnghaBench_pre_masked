
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int prompt ;
typedef int input ;
typedef int WORD ;
struct TYPE_21__ {short X; } ;
struct TYPE_15__ {int X; } ;
struct TYPE_14__ {int Bottom; int Top; } ;
struct TYPE_20__ {int wAttributes; TYPE_8__ dwCursorPosition; TYPE_2__ dwSize; TYPE_1__ srWindow; } ;
struct TYPE_16__ {scalar_t__ AsciiChar; } ;
struct TYPE_17__ {TYPE_3__ uChar; int bKeyDown; } ;
struct TYPE_18__ {TYPE_4__ KeyEvent; } ;
struct TYPE_19__ {scalar_t__ EventType; TYPE_5__ Event; } ;
typedef TYPE_6__ INPUT_RECORD ;
typedef int HANDLE ;
typedef int DWORD ;
typedef TYPE_7__ CONSOLE_SCREEN_BUFFER_INFO ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,int,TYPE_8__,int*) ;
 int FUNC_1 (int ,char,int,TYPE_8__,int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int *,int ,int ,char*,int,int *) ;
 int FUNC_4 (int ,int*) ;
 int FUNC_5 (int ,TYPE_7__*) ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int ,TYPE_6__*,int,int*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (int ,TYPE_8__) ;
 int FUNC_9 (int ,int) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_10 (int ,char*,int,TYPE_8__,int*) ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 (char*,char*) ;
 int FUNC_13 (char*) ;
 char FUNC_14 (scalar_t__) ;

BOOL FUNC_15(char *VAR_12, BOOL VAR_13)
{
 static int VAR_14 = 0;
 char VAR_15[80];
 int VAR_16 = 0;
 HANDLE VAR_17;
 HANDLE VAR_18;




 VAR_17 = FUNC_6(VAR_8);
 VAR_18 = FUNC_6(VAR_7);

 for (;;) {
  CONSOLE_SCREEN_BUFFER_INFO VAR_19;
  INPUT_RECORD VAR_20;
  DWORD VAR_21;
  DWORD VAR_22;
  int VAR_23;
  char *VAR_24;
  char VAR_25;




  FUNC_5(VAR_17, &VAR_19);

  if (VAR_13 || VAR_14 <= 0) {
   VAR_14 = VAR_19.srWindow.Bottom - VAR_19.srWindow.Top - 1;
  }

  VAR_23 = VAR_19.dwSize.X;



  if (VAR_14 <= 0) {

   FUNC_11("%s", VAR_12);
   break;
  }




  VAR_24 = VAR_12;
  VAR_25 = '\0';

  while (*VAR_24) {
   if (*(VAR_24++) == '\n' || (VAR_23--) == 0) {

    if (--VAR_14 == 0) {


     VAR_25 = *VAR_24;
     *VAR_24 = '\0';
     break;
    }

    VAR_23 = VAR_19.dwSize.X;
   }
  }


  FUNC_11("%s", VAR_12);


  if (VAR_25 == '\0') {
   break;
  }







  if (VAR_16 == 0) {

   VAR_16 = FUNC_3(
    VAR_3 |
    VAR_4,
    ((void*)0), VAR_6, 0,
    VAR_15, sizeof(VAR_15), ((void*)0));

   if (VAR_16 == 0) {
    FUNC_12(VAR_15, "Press any key to continue...");
    VAR_16 = FUNC_13(VAR_15);
   }
  }



  FUNC_4(VAR_18, &VAR_22);



  FUNC_9(VAR_18, (VAR_22 & ~VAR_1));



  FUNC_5(VAR_17, &VAR_19);



  FUNC_10(VAR_17, VAR_15,
   VAR_16, VAR_19.dwCursorPosition, &VAR_21);



  FUNC_0(VAR_17,
   (WORD)(VAR_19.wAttributes | VAR_0),
   VAR_16, VAR_19.dwCursorPosition, &VAR_21);



  VAR_19.dwCursorPosition.X =
   (short)(VAR_19.dwCursorPosition.X + VAR_16);

  FUNC_8(VAR_17, VAR_19.dwCursorPosition);



  FUNC_2(VAR_18);

  do {
   FUNC_7(VAR_18, &VAR_20, sizeof(VAR_20), &VAR_21);
  }
  while (VAR_20.EventType != VAR_5 ||
   !VAR_20.Event.KeyEvent.bKeyDown ||
   !VAR_20.Event.KeyEvent.uChar.AsciiChar);



  VAR_19.dwCursorPosition.X =
   (short)(VAR_19.dwCursorPosition.X - VAR_16);

  FUNC_8(VAR_17, VAR_19.dwCursorPosition);



  FUNC_1(VAR_17, ' ',
   VAR_16, VAR_19.dwCursorPosition, &VAR_21);



  FUNC_0(VAR_17, VAR_19.wAttributes,
   VAR_16, VAR_19.dwCursorPosition, &VAR_21);



  FUNC_9(VAR_18, VAR_22);



  if (VAR_20.Event.KeyEvent.uChar.AsciiChar == VAR_10 ||
   VAR_20.Event.KeyEvent.uChar.AsciiChar == VAR_11 ||
   FUNC_14(VAR_20.Event.KeyEvent.uChar.AsciiChar) == 'q') {


   return VAR_2;
  }




  *VAR_24 = VAR_25;
  VAR_12 = VAR_24;
 }

 return VAR_9;
}
