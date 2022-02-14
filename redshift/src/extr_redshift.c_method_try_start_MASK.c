
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int gamma_state_t ;
struct TYPE_6__ {int (* init ) (int **) ;char* name; int (* set_option ) (int *,char const*,char*) ;int (* start ) (int *) ;int (* free ) (int *) ;} ;
typedef TYPE_1__ gamma_method_t ;
typedef int config_ini_state_t ;
struct TYPE_7__ {char const* name; char* value; struct TYPE_7__* next; } ;
typedef TYPE_2__ config_ini_setting_t ;
struct TYPE_8__ {TYPE_2__* settings; } ;
typedef TYPE_3__ config_ini_section_t ;


 char* FUNC_0 (char*) ;
 TYPE_3__* FUNC_1 (int *,char*) ;
 int FUNC_2 (int ,char*,char*) ;
 int VAR_0 ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (int **) ;
 int FUNC_5 (int *,char const*,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char const*,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int
FUNC_11(const gamma_method_t *VAR_1,
   gamma_state_t **VAR_2, config_ini_state_t *VAR_3, char *VAR_4)
{
 int VAR_5;

 VAR_5 = VAR_1->init(VAR_2);
 if (VAR_5 < 0) {
  FUNC_2(VAR_0, FUNC_0("Initialization of %s failed.\n"),
   VAR_1->name);
  return -1;
 }


 config_ini_section_t *VAR_6 =
  FUNC_1(VAR_3, VAR_1->name);
 if (VAR_6 != ((void*)0)) {
  config_ini_setting_t *VAR_7 = VAR_6->settings;
  while (VAR_7 != ((void*)0)) {
   VAR_5 = VAR_1->set_option(
    *VAR_2, VAR_7->name, VAR_7->value);
   if (VAR_5 < 0) {
    VAR_1->free(*VAR_2);
    FUNC_2(VAR_0, FUNC_0("Failed to set %s"
        " option.\n"),
     VAR_1->name);


    FUNC_2(VAR_0, FUNC_0("Try `-m %s:help' for more"
        " information.\n"),
     VAR_1->name);
    return -1;
   }
   VAR_7 = VAR_7->next;
  }
 }


 while (VAR_4 != ((void*)0)) {
  char *VAR_8 = FUNC_3(VAR_4, ':');
  if (VAR_8 != ((void*)0)) *(VAR_8++) = '\0';

  const char *VAR_9 = VAR_4;
  char *VAR_10 = FUNC_3(VAR_4, '=');
  if (VAR_10 == ((void*)0)) {
   FUNC_2(VAR_0, FUNC_0("Failed to parse option `%s'.\n"),
    VAR_4);
   return -1;
  } else {
   *(VAR_10++) = '\0';
  }

  VAR_5 = VAR_1->set_option(*VAR_2, VAR_9, VAR_10);
  if (VAR_5 < 0) {
   VAR_1->free(*VAR_2);
   FUNC_2(VAR_0, FUNC_0("Failed to set %s option.\n"),
    VAR_1->name);

   FUNC_2(VAR_0, FUNC_0("Try -m %s:help' for more"
       " information.\n"), VAR_1->name);
   return -1;
  }

  VAR_4 = VAR_8;
 }


 VAR_5 = VAR_1->start(*VAR_2);
 if (VAR_5 < 0) {
  VAR_1->free(*VAR_2);
  FUNC_2(VAR_0, FUNC_0("Failed to start adjustment method %s.\n"),
   VAR_1->name);
  return -1;
 }

 return 0;
}
