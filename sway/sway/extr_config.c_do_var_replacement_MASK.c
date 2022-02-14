
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sway_variable {char* name; char* value; } ;
struct TYPE_4__ {TYPE_1__* symbols; } ;
struct TYPE_3__ {int length; struct sway_variable** items; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,char*,size_t) ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (int ,char*) ;

char *FUNC_9(char *VAR_2) {
 int VAR_3;
 char *VAR_4 = VAR_2;
 while ((VAR_4 = FUNC_3(VAR_4, '$'))) {

  if (VAR_4 > VAR_2 && VAR_4[-1] == '\\') {
   if (VAR_4 == VAR_2 + 1 || !(VAR_4 > VAR_2 + 1 && VAR_4[-2] == '\\')) {
    ++VAR_4;
    continue;
   }
  }

  if (VAR_4[1] == '$') {
   size_t VAR_5 = FUNC_5(VAR_4 + 1);
   FUNC_2(VAR_4, VAR_4 + 1, VAR_5);
   VAR_4[VAR_5] = '\0';
   ++VAR_4;
   continue;
  }

  for (VAR_3 = 0; VAR_3 < VAR_1->symbols->length; ++VAR_3) {
   struct sway_variable *VAR_6 = VAR_1->symbols->items[VAR_3];
   int VAR_7 = FUNC_5(VAR_6->name);
   if (FUNC_6(VAR_4, VAR_6->name, VAR_7) == 0) {
    int VAR_8 = FUNC_5(VAR_6->value);
    char *VAR_9 = FUNC_1(FUNC_5(VAR_2) - VAR_7 + VAR_8 + 1);
    if (!VAR_9) {
     FUNC_8(VAR_0,
      "Unable to allocate replacement "
      "during variable expansion");
     break;
    }
    char *VAR_10 = VAR_9;
    int VAR_11 = VAR_4 - VAR_2;
    FUNC_7(VAR_10, VAR_2, VAR_11);
    VAR_10 += VAR_11;
    FUNC_7(VAR_10, VAR_6->value, VAR_8);
    VAR_10 += VAR_8;
    FUNC_4(VAR_10, VAR_4 + VAR_7);
    FUNC_0(VAR_2);
    VAR_2 = VAR_9;
    VAR_4 = VAR_2 + VAR_11 + VAR_8;
    break;
   }
  }
  if (VAR_3 == VAR_1->symbols->length) {
   ++VAR_4;
  }
 }
 return VAR_2;
}
