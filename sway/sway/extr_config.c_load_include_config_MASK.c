
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct swaynag_instance {int dummy; } ;
struct sway_config {char* current_config_path; TYPE_1__* config_chain; } ;
struct TYPE_3__ {int length; char** items; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (char*,struct sway_config*,struct swaynag_instance*) ;
 char* FUNC_4 (int) ;
 char* FUNC_5 (char*,int *) ;
 int FUNC_6 (char*,int,char*,char const*,char const*) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 char* FUNC_8 (char const*) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (int ,char*,...) ;

__attribute__((used)) static bool FUNC_11(const char *VAR_2, const char *VAR_3,
  struct sway_config *VAR_4, struct swaynag_instance *VAR_5) {

 const char *VAR_6 = VAR_4->current_config_path;

 char *VAR_7;
 int VAR_8 = FUNC_9(VAR_2);
 if (VAR_8 >= 1 && VAR_2[0] != '/') {
  VAR_8 = VAR_8 + FUNC_9(VAR_3) + 2;
  VAR_7 = FUNC_4(VAR_8 * sizeof(char));
  if (!VAR_7) {
   FUNC_10(VAR_1,
    "Unable to allocate full path to included config");
   return 0;
  }
  FUNC_6(VAR_7, VAR_8, "%s/%s", VAR_3, VAR_2);
 } else {
  VAR_7 = FUNC_8(VAR_2);
 }

 char *VAR_9 = FUNC_5(VAR_7, ((void*)0));
 FUNC_0(VAR_7);

 if (VAR_9 == ((void*)0)) {
  FUNC_10(VAR_0, "%s not found.", VAR_2);
  return 0;
 }


 int VAR_10;
 for (VAR_10 = 0; VAR_10 < VAR_4->config_chain->length; ++VAR_10) {
  char *VAR_11 = VAR_4->config_chain->items[VAR_10];
  if (FUNC_7(VAR_9, VAR_11) == 0) {
   FUNC_10(VAR_0,
    "%s already included once, won't be included again.",
    VAR_9);
   FUNC_0(VAR_9);
   return 0;
  }
 }

 VAR_4->current_config_path = VAR_9;
 FUNC_1(VAR_4->config_chain, VAR_9);
 int VAR_12 = VAR_4->config_chain->length - 1;

 if (!FUNC_3(VAR_9, VAR_4, VAR_5)) {
  FUNC_0(VAR_9);
  VAR_4->current_config_path = VAR_6;
  FUNC_2(VAR_4->config_chain, VAR_12);
  return 0;
 }


 VAR_4->current_config_path = VAR_6;
 return 1;
}
