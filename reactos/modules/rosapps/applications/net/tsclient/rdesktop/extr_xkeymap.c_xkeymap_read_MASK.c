
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef void* uint8 ;
typedef scalar_t__ uint16 ;
typedef int line ;
struct TYPE_5__ {void* keyboard_functionkeys; void* keyboard_subtype; void* keyboard_type; void* enable_compose; int keylayout; } ;
typedef TYPE_1__ RDPCLIENT ;
typedef int FILE ;
typedef void* BOOL ;


 int FUNC_0 (char*) ;
 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int FUNC_2 (TYPE_1__*,char*,char*) ;
 int FUNC_3 (TYPE_1__*,char*,void*,scalar_t__,char*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char*,int,int *) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 char* FUNC_8 (char*,char) ;
 unsigned int FUNC_9 (char*) ;
 unsigned int FUNC_10 (char*,char*) ;
 scalar_t__ FUNC_11 (char*,char*) ;
 void* FUNC_12 (char*,char**,int) ;
 int FUNC_13 (char*,int *,int) ;
 char FUNC_14 (int) ;
 int * FUNC_15 (char*) ;

__attribute__((used)) static BOOL
FUNC_16(RDPCLIENT * VAR_8, char *VAR_9)
{
 FILE *VAR_10;
 char VAR_11[VAR_1];
 unsigned int VAR_12 = 0;
 unsigned int VAR_13 = 0;
 char *VAR_14, *VAR_15;
 char *VAR_16;
 uint8 VAR_17;
 uint16 VAR_18;

 VAR_10 = FUNC_15(VAR_9);
 if (VAR_10 == ((void*)0))
 {
  FUNC_4("Failed to open keymap %s\n", VAR_9);
  return VAR_0;
 }


 while (FUNC_6(VAR_11, sizeof(VAR_11), VAR_10) != ((void*)0))
 {
  VAR_12++;


  VAR_15 = FUNC_8(VAR_11, '\n');
  if (VAR_15 != ((void*)0))
   *VAR_15 = 0;

  VAR_13 = FUNC_9(VAR_11);


  if (FUNC_10(VAR_11, " \t\n\r\f\v") == VAR_13)
  {
   continue;
  }


  if (FUNC_7(VAR_11, "include "))
  {
   if (!FUNC_16(VAR_8, VAR_11 + sizeof("include ") - 1))
    return VAR_0;
   continue;
  }


  if (FUNC_7(VAR_11, "map "))
  {
   VAR_8->keylayout = FUNC_13(VAR_11 + sizeof("map ") - 1, ((void*)0), 16);
   FUNC_0(("Keylayout 0x%x\n", VAR_8->keylayout));
   continue;
  }


  if (FUNC_7(VAR_11, "enable_compose"))
  {
   FUNC_0(("Enabling compose handling\n"));
   VAR_8->enable_compose = VAR_7;
   continue;
  }


  if (FUNC_7(VAR_11, "sequence"))
  {
   FUNC_2(VAR_8, VAR_11 + sizeof("sequence") - 1, VAR_9);
   continue;
  }


  if (FUNC_7(VAR_11, "keyboard_type "))
  {
   VAR_8->keyboard_type = FUNC_12(VAR_11 + sizeof("keyboard_type ") - 1, ((void*)0), 16);
   FUNC_0(("keyboard_type 0x%x\n", VAR_8->keyboard_type));
   continue;
  }


  if (FUNC_7(VAR_11, "keyboard_subtype "))
  {
   VAR_8->keyboard_subtype =
    FUNC_12(VAR_11 + sizeof("keyboard_subtype ") - 1, ((void*)0), 16);
   FUNC_0(("keyboard_subtype 0x%x\n", VAR_8->keyboard_subtype));
   continue;
  }


  if (FUNC_7(VAR_11, "keyboard_functionkeys "))
  {
   VAR_8->keyboard_functionkeys =
    FUNC_12(VAR_11 + sizeof("keyboard_functionkeys ") - 1, ((void*)0), 16);
   FUNC_0(("keyboard_functionkeys 0x%x\n", VAR_8->keyboard_functionkeys));
   continue;
  }


  if (VAR_11[0] == '#')
  {
   continue;
  }


  VAR_14 = VAR_11;
  VAR_15 = FUNC_8(VAR_11, ' ');
  if (VAR_15 == ((void*)0))
  {
   FUNC_4("Bad line %d in keymap %s\n", VAR_12, VAR_9);
   continue;
  }
  else
  {
   *VAR_15 = 0;
  }


  VAR_15++;
  VAR_17 = FUNC_12(VAR_15, &VAR_16, 16);




  VAR_18 = 0;
  if (FUNC_11(VAR_16, "altgr"))
  {
   FUNC_1(VAR_18, VAR_2);
  }

  if (FUNC_11(VAR_16, "shift"))
  {
   FUNC_1(VAR_18, VAR_4);
  }

  if (FUNC_11(VAR_16, "numlock"))
  {
   FUNC_1(VAR_18, VAR_6);
  }

  if (FUNC_11(VAR_16, "localstate"))
  {
   FUNC_1(VAR_18, VAR_5);
  }

  if (FUNC_11(VAR_16, "inhibit"))
  {
   FUNC_1(VAR_18, VAR_3);
  }

  FUNC_3(VAR_8, VAR_14, VAR_17, VAR_18, VAR_9);

  if (FUNC_11(VAR_16, "addupper"))
  {


   for (VAR_15 = VAR_14; *VAR_15; VAR_15++)
    *VAR_15 = FUNC_14((int) *VAR_15);
   FUNC_1(VAR_18, VAR_4);
   FUNC_3(VAR_8, VAR_14, VAR_17, VAR_18, VAR_9);
  }
 }

 FUNC_5(VAR_10);
 return VAR_7;
}
