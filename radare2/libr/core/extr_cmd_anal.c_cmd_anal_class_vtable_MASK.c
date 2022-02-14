
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {char* id; void* offset; void* addr; } ;
struct TYPE_6__ {int anal; int num; } ;
typedef TYPE_1__ RCore ;
typedef TYPE_2__ RAnalVTable ;
typedef scalar_t__ RAnalClassErr ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int ,char*,char*) ;
 scalar_t__ FUNC_4 (int ,char*,TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 void* FUNC_6 (int ,char*) ;
 char* FUNC_7 (char const*) ;
 char* FUNC_8 (char*,char) ;
 char* FUNC_9 (char const*) ;

__attribute__((used)) static void FUNC_10(RCore *VAR_3, const char *VAR_4) {
 RAnalClassErr VAR_5 = VAR_1;
 char VAR_6 = VAR_4[0];
 switch (VAR_6) {
 case ' ':
 case '-': {
  const char *VAR_7 = FUNC_7 (VAR_4 + 1);
  if (!*VAR_7) {
   FUNC_0 ("No class name given.\n");
   return;
  }
  char *VAR_8 = FUNC_9 (VAR_7);
  if (!VAR_8) {
   break;
  }
  char *VAR_9 = FUNC_8 (VAR_8, ' ');
  if (VAR_9) {
   *VAR_9 = '\0';
   VAR_9++;
  }

  if (!VAR_9 || *VAR_9 == '\0') {
   if (VAR_6 == ' ') {
    FUNC_2 (VAR_3->anal, VAR_8);
   } else {
    FUNC_0 ("No vtable id given. See acv [class name].\n");
   }
   FUNC_1 (VAR_8);
   break;
  }

  char *VAR_10 = VAR_9;
  VAR_9 = FUNC_8 (VAR_10, ' ');
  if (VAR_9) {
   *VAR_9 = '\0';
  }

  if (VAR_6 == '-') {
   VAR_5 = FUNC_3 (VAR_3->anal, VAR_8, VAR_10);
   FUNC_1 (VAR_8);
   break;
  }

  RAnalVTable VAR_11;
  VAR_11.id = ((void*)0);
  VAR_11.addr = FUNC_6 (VAR_3->num, VAR_10);
  VAR_11.offset = 0;

  if (VAR_9) {
   VAR_11.offset = FUNC_6 (VAR_3->num, VAR_9 + 1);
  }

  VAR_5 = FUNC_4 (VAR_3->anal, VAR_8, &VAR_11);
  FUNC_1 (VAR_11.id);
  FUNC_1 (VAR_8);
  break;
 }
 default:
  FUNC_5 (VAR_3, VAR_2);
  break;
 }

 if (VAR_5 == VAR_0) {
  FUNC_0 ("Class does not exist.\n");
 }
}
