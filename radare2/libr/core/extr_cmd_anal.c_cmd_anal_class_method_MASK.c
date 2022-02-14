
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {char* name; int vtable_offset; scalar_t__ addr; } ;
struct TYPE_6__ {int anal; int num; } ;
typedef TYPE_1__ RCore ;
typedef TYPE_2__ RAnalMethod ;
typedef int RAnalClassErr ;




 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (int ,char*,char*,char*) ;
 int FUNC_4 (int ,char*,TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_6 (int ,char*) ;
 char* FUNC_7 (char const*) ;
 char* FUNC_8 (char*,char) ;
 char* FUNC_9 (char const*) ;

__attribute__((used)) static void FUNC_10(RCore *VAR_2, const char *VAR_3) {
 RAnalClassErr VAR_4 = VAR_0;
 char VAR_5 = VAR_3[0];
 switch (VAR_5) {
 case ' ':
 case '-':
 case 'n': {
  const char *VAR_6 = FUNC_7 (VAR_3 + 1);
  if (!*VAR_6) {
   FUNC_0 ("No class name given.\n");
   break;
  }
  char *VAR_7 = FUNC_9 (VAR_6);
  if (!VAR_7) {
   break;
  }
  char *VAR_8 = FUNC_8 (VAR_7, ' ');
  if (!VAR_8) {
   FUNC_0 ("No method name given.\n");
   FUNC_1 (VAR_7);
   break;
  }
  *VAR_8 = '\0';
  char *VAR_9 = VAR_8 + 1;

  if (VAR_5 == ' ' || VAR_5 == 'n') {
   VAR_8 = FUNC_8 (VAR_9, ' ');
   if (!VAR_8) {
    if (VAR_5 == ' ') {
     FUNC_0 ("No offset given.\n");
    } else if (VAR_5 == 'n') {
     FUNC_0 ("No new method name given.\n");
    }
    FUNC_1 (VAR_7);
    break;
   }
   *VAR_8 = '\0';
  }

  if (VAR_5 == ' ') {
   char *VAR_10 = VAR_8 + 1;
   VAR_8 = FUNC_8 (VAR_10, ' ');
   if (VAR_8) {
    *VAR_8 = '\0';
   }

   RAnalMethod VAR_11;
   VAR_11.name = VAR_9;
   VAR_11.addr = FUNC_6 (VAR_2->num, VAR_10);
   VAR_11.vtable_offset = -1;
   if (VAR_8) {
    VAR_11.vtable_offset = (int)FUNC_6 (VAR_2->num, VAR_8 + 1);
   }
   VAR_4 = FUNC_4 (VAR_2->anal, VAR_7, &VAR_11);
  } else if (VAR_5 == 'n') {
   char *VAR_12 = VAR_8 + 1;
   VAR_8 = FUNC_8 (VAR_12, ' ');
   if (VAR_8) {
    *VAR_8 = '\0';
   }

   VAR_4 = FUNC_3 (VAR_2->anal, VAR_7, VAR_9, VAR_12);
  } else if (VAR_5 == '-') {
   VAR_4 = FUNC_2 (VAR_2->anal, VAR_7, VAR_9);
  }

  FUNC_1 (VAR_7);
  break;
 }
 default:
  FUNC_5 (VAR_2, VAR_1);
  break;
 }

 switch (VAR_4) {
  case 128:
   FUNC_0 ("Class does not exist.\n");
   break;
  case 129:
   FUNC_0 ("Method does not exist.\n");
   break;
  default:
   break;
 }
}
