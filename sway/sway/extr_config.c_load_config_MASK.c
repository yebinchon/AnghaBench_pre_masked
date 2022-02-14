
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swaynag_instance {int dummy; } ;
struct sway_config {int dummy; } ;
struct stat {int st_mode; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (int *,struct sway_config*,struct swaynag_instance*) ;
 scalar_t__ FUNC_4 (char const*,struct stat*) ;
 int FUNC_5 (int ,char*,...) ;

__attribute__((used)) static bool FUNC_6(const char *VAR_2, struct sway_config *VAR_3,
  struct swaynag_instance *VAR_4) {
 if (VAR_2 == ((void*)0)) {
  FUNC_5(VAR_0, "Unable to find a config file!");
  return 0;
 }

 FUNC_5(VAR_1, "Loading config from %s", VAR_2);

 struct stat VAR_5;
 if (FUNC_4(VAR_2, &VAR_5) == 0 && FUNC_0(VAR_5.st_mode)) {
  FUNC_5(VAR_0, "%s is a directory not a config file", VAR_2);
  return 0;
 }

 FILE *VAR_6 = FUNC_2(VAR_2, "r");
 if (!VAR_6) {
  FUNC_5(VAR_0, "Unable to open %s for reading", VAR_2);
  return 0;
 }

 bool VAR_7 = FUNC_3(VAR_6, VAR_3, VAR_4);
 FUNC_1(VAR_6);

 if (!VAR_7) {
  FUNC_5(VAR_0, "Error(s) loading config!");
 }

 return 1;
}
