
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int line ;
struct TYPE_6__ {TYPE_3__* sections; } ;
typedef TYPE_1__ config_ini_state_t ;
struct TYPE_7__ {int * value; int * name; struct TYPE_7__* next; } ;
typedef TYPE_2__ config_ini_setting_t ;
struct TYPE_8__ {TYPE_2__* settings; int * name; struct TYPE_8__* next; } ;
typedef TYPE_3__ config_ini_section_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (char*,int,int *) ;
 int FUNC_4 (int ,int ) ;
 void* FUNC_5 (size_t) ;
 int FUNC_6 (int *,char const*,size_t) ;
 int * FUNC_7 (char const*) ;
 int VAR_1 ;
 char* FUNC_8 (char*,char) ;
 size_t FUNC_9 (char*,char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,char*) ;

int
FUNC_12(config_ini_state_t *VAR_2, const char *VAR_3)
{
 config_ini_section_t *VAR_4 = ((void*)0);
 VAR_2->sections = ((void*)0);

 FILE *VAR_5 = FUNC_7(VAR_3);
 if (VAR_5 == ((void*)0)) {

  if (VAR_3 != ((void*)0)) return -1;
  return 0;
 }

 char VAR_6[VAR_0];
 char *VAR_7;

 while (1) {

  char *VAR_8 = FUNC_3(VAR_6, sizeof(VAR_6), VAR_5);
  if (VAR_8 == ((void*)0)) break;


  VAR_7 = VAR_6 + FUNC_11(VAR_6, " \t");
  VAR_7[FUNC_9(VAR_7, "\r\n")] = '\0';


  if (VAR_7[0] == ';' || VAR_7[0] == '#' || VAR_7[0] == '\0') continue;

  if (VAR_7[0] == '[') {

   const char *VAR_9 = VAR_7+1;
   char *VAR_10 = FUNC_8(VAR_7, ']');
   if (VAR_10 == ((void*)0) || VAR_10[1] != '\0' || VAR_10 == VAR_9) {
    FUNC_4(FUNC_0("Malformed section header in config"
     " file.\n"), VAR_1);
    FUNC_2(VAR_5);
    FUNC_1(VAR_2);
    return -1;
   }

   *VAR_10 = '\0';


   VAR_4 = FUNC_5(sizeof(config_ini_section_t));
   if (VAR_4 == ((void*)0)) {
    FUNC_2(VAR_5);
    FUNC_1(VAR_2);
    return -1;
   }


   VAR_4->name = ((void*)0);
   VAR_4->settings = ((void*)0);
   VAR_4->next = VAR_2->sections;
   VAR_2->sections = VAR_4;


   VAR_4->name = FUNC_5(VAR_10 - VAR_9 + 1);
   if (VAR_4->name == ((void*)0)) {
    FUNC_2(VAR_5);
    FUNC_1(VAR_2);
    return -1;
   }

   FUNC_6(VAR_4->name, VAR_9, VAR_10 - VAR_9 + 1);
  } else {

   char *VAR_11 = FUNC_8(VAR_7, '=');
   if (VAR_11 == ((void*)0) || VAR_11 == VAR_7) {
    FUNC_4(FUNC_0("Malformed assignment in config"
     " file.\n"), VAR_1);
    FUNC_2(VAR_5);
    FUNC_1(VAR_2);
    return -1;
   }

   *VAR_11 = '\0';
   char *VAR_12 = VAR_11 + 1;

   if (VAR_4 == ((void*)0)) {
    FUNC_4(FUNC_0("Assignment outside section in config"
     " file.\n"), VAR_1);
    FUNC_2(VAR_5);
    FUNC_1(VAR_2);
    return -1;
   }


   config_ini_setting_t *VAR_13 =
    FUNC_5(sizeof(config_ini_setting_t));
   if (VAR_13 == ((void*)0)) {
    FUNC_2(VAR_5);
    FUNC_1(VAR_2);
    return -1;
   }


   VAR_13->name = ((void*)0);
   VAR_13->value = ((void*)0);
   VAR_13->next = VAR_4->settings;
   VAR_4->settings = VAR_13;


   VAR_13->name = FUNC_5(VAR_11 - VAR_7 + 1);
   if (VAR_13->name == ((void*)0)) {
    FUNC_2(VAR_5);
    FUNC_1(VAR_2);
    return -1;
   }

   FUNC_6(VAR_13->name, VAR_7, VAR_11 - VAR_7 + 1);


   size_t VAR_14 = FUNC_10(VAR_12) + 1;
   VAR_13->value = FUNC_5(VAR_14);
   if (VAR_13->value == ((void*)0)) {
    FUNC_2(VAR_5);
    FUNC_1(VAR_2);
    return -1;
   }

   FUNC_6(VAR_13->value, VAR_12, VAR_14);
  }
 }

 FUNC_2(VAR_5);

 return 0;
}
