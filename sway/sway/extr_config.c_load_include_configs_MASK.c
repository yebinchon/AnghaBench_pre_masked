
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char** we_wordv; size_t we_wordc; } ;
typedef TYPE_1__ wordexp_t ;
struct swaynag_instance {int dummy; } ;
struct sway_config {int current_config_path; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int *,int ) ;
 int FUNC_4 (char*,char const*,struct sway_config*,struct swaynag_instance*) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 scalar_t__ FUNC_7 (char const*,TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*) ;

void FUNC_9(const char *VAR_1, struct sway_config *VAR_2,
  struct swaynag_instance *VAR_3) {
 char *VAR_4 = FUNC_3(((void*)0), 0);
 char *VAR_5 = FUNC_5(VAR_2->current_config_path);
 const char *VAR_6 = FUNC_1(VAR_5);

 if (FUNC_0(VAR_6) < 0) {
  FUNC_6(VAR_0, "failed to change working directory");
  goto cleanup;
 }

 wordexp_t VAR_7;
 if (FUNC_7(VAR_1, &VAR_7, 0) == 0) {
  char **VAR_8 = VAR_7.we_wordv;
  size_t VAR_9;
  for (VAR_9 = 0; VAR_9 < VAR_7.we_wordc; ++VAR_9) {
   FUNC_4(VAR_8[VAR_9], VAR_6, VAR_2, VAR_3);
  }
  FUNC_8(&VAR_7);
 }


 if (FUNC_0(VAR_4) < 0) {
  FUNC_6(VAR_0, "failed to change working directory");
 }
cleanup:
 FUNC_2(VAR_5);
 FUNC_2(VAR_4);
}
