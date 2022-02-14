
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct symbol {int dummy; } ;
struct subtitle_part {int entries; int * text; } ;
struct menu {TYPE_1__* prompt; void* data; struct symbol* sym; } ;
struct TYPE_5__ {int prev; } ;
struct TYPE_4__ {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (struct menu*) ;
 int VAR_3 ;
 int FUNC_2 (struct menu*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct menu*) ;
 struct menu* VAR_4 ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ,struct menu*,int*) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 () ;
 struct menu* FUNC_10 () ;
 int FUNC_11 (char) ;
 int FUNC_12 () ;
 scalar_t__ FUNC_13 () ;
 int FUNC_14 (int *,TYPE_2__*) ;
 int FUNC_15 (int ) ;
 char* VAR_5 ;
 void* FUNC_16 (struct menu*) ;
 char* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_17 () ;
 struct menu VAR_9 ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_20 (struct menu*) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (int *,int ,int,int) ;
 int VAR_12 ;
 int FUNC_23 (struct symbol*) ;
 int FUNC_24 (struct symbol*) ;
 int FUNC_25 (struct symbol*,int ) ;
 int FUNC_26 (struct symbol*) ;
 TYPE_2__ VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static void FUNC_27(struct menu *VAR_15, struct menu *VAR_16)
{
 struct menu *VAR_17;
 const char *VAR_18 = FUNC_16(VAR_15);
 struct subtitle_part VAR_19;
 struct symbol *VAR_20;
 int VAR_21;
 int VAR_22 = 0;

 if (VAR_15 != &VAR_9)
  VAR_19.text = FUNC_16(VAR_15);
 else
  VAR_19.text = ((void*)0);
 FUNC_14(&VAR_19.entries, &VAR_13);

 while (1) {
  FUNC_12();
  VAR_4 = VAR_15;
  FUNC_1(VAR_15);
  if (!VAR_3)
   break;
  FUNC_19();
  FUNC_6();
  VAR_21 = FUNC_7(VAR_18 ? FUNC_0(VAR_18) : FUNC_0("Main Menu"),
      FUNC_0(VAR_6),
      VAR_16, &VAR_22);
  if (VAR_21 == 1 || VAR_21 == VAR_1 || VAR_21 == -VAR_0)
   break;
  if (FUNC_9() != 0) {
   if (!FUNC_8())
    continue;
   if (!FUNC_13())
    continue;
  }
  VAR_17 = FUNC_10();
  VAR_16 = FUNC_10();
  if (VAR_17)
   VAR_20 = VAR_17->sym;
  else
   VAR_20 = ((void*)0);

  switch (VAR_21) {
  case 0:
   switch (FUNC_13()) {
   case 'm':
    if (VAR_12)
     VAR_17->data = (void *) (long) !VAR_17->data;
    else
     FUNC_27(VAR_17, ((void*)0));
    break;
   case 't':
    if (FUNC_24(VAR_20) && FUNC_23(VAR_20) == VAR_14)
     FUNC_2(VAR_17);
    else if (VAR_17->prompt->type == VAR_2)
     FUNC_27(VAR_17, ((void*)0));
    break;
   case 's':
    FUNC_5(VAR_17);
    break;
   }
   break;
  case 2:
   if (VAR_20)
    FUNC_20(VAR_17);
   else {
    FUNC_17();
    FUNC_21(FUNC_0("README"), FUNC_0(VAR_5));
   }
   break;
  case 3:
   FUNC_17();
   FUNC_4();
   break;
  case 4:
   FUNC_17();
   FUNC_3();
   break;
  case 5:
   if (FUNC_11('t')) {
    if (FUNC_25(VAR_20, VAR_14))
     break;
    if (FUNC_25(VAR_20, VAR_7))
     FUNC_22(((void*)0), VAR_10, 6, 74);
   }
   break;
  case 6:
   if (FUNC_11('t'))
    FUNC_25(VAR_20, VAR_8);
   break;
  case 7:
   if (FUNC_11('t'))
    FUNC_25(VAR_20, VAR_7);
   break;
  case 8:
   if (FUNC_11('t'))
    FUNC_26(VAR_20);
   else if (FUNC_11('m'))
    FUNC_27(VAR_17, ((void*)0));
   break;
  case 9:
   FUNC_18();
   break;
  case 10:
   VAR_11 = !VAR_11;
   break;
  }
 }

 FUNC_15(VAR_13.prev);
}
