
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {char** we_wordv; } ;
typedef TYPE_1__ wordexp_t ;
struct TYPE_10__ {int length; int * items; } ;
typedef TYPE_2__ list_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 () ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (TYPE_2__*) ;
 char* FUNC_6 (size_t) ;
 int FUNC_7 (char*,size_t,char*,char*) ;
 char* FUNC_8 (char*) ;
 char* FUNC_9 (char*,char*) ;
 scalar_t__ FUNC_10 (int ,TYPE_1__*,int ) ;
 int FUNC_11 (TYPE_1__*) ;

__attribute__((used)) static list_t *FUNC_12(void) {
 list_t *VAR_1 = FUNC_0();
 FUNC_4(VAR_1, FUNC_8("$HOME/.icons"));

 char *VAR_2 = FUNC_3("XDG_DATA_HOME");
 FUNC_4(VAR_1, FUNC_8(VAR_2 && *VAR_2 ?
   "$XDG_DATA_HOME/icons" : "$HOME/.local/share/icons"));

 FUNC_4(VAR_1, FUNC_8("/usr/share/pixmaps"));

 char *VAR_3 = FUNC_3("XDG_DATA_DIRS");
 if (!(VAR_3 && *VAR_3)) {
  VAR_3 = "/usr/local/share:/usr/share";
 }
 VAR_3 = FUNC_8(VAR_3);
 char *VAR_4 = FUNC_9(VAR_3, ":");
 do {
  size_t VAR_5 = FUNC_7(((void*)0), 0, "%s/icons", VAR_4) + 1;
  char *VAR_6 = FUNC_6(VAR_5);
  FUNC_7(VAR_6, VAR_5, "%s/icons", VAR_4);
  FUNC_4(VAR_1, VAR_6);
 } while ((VAR_4 = FUNC_9(((void*)0), ":")));
 FUNC_2(VAR_3);

 list_t *VAR_7 = FUNC_0();
 for (int VAR_8 = 0; VAR_8 < VAR_1->length; ++VAR_8) {
  wordexp_t VAR_9;
  if (FUNC_10(VAR_1->items[VAR_8], &VAR_9, VAR_0) == 0) {
   if (FUNC_1(VAR_9.we_wordv[0])) {
    FUNC_4(VAR_7, FUNC_8(VAR_9.we_wordv[0]));
   }
   FUNC_11(&VAR_9);
  }
 }

 FUNC_5(VAR_1);

 return VAR_7;
}
