
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbcfg_value {char* name; char* desc; } ;
struct rbcfg_env {char* usage; char* name; int num_values; struct rbcfg_value* values; } ;
struct rbcfg_command {char* usage; char* name; int num_values; struct rbcfg_value* values; } ;
typedef int buf ;


 int FUNC_0 (struct rbcfg_env*) ;
 int FUNC_1 (int ,char*,...) ;
 struct rbcfg_env* VAR_0 ;
 struct rbcfg_env* VAR_1 ;
 char* VAR_2 ;
 int FUNC_2 (char*,int,char*,char*) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_3(void)
{
 char VAR_4[255];
 int VAR_5;
 int VAR_6;

 FUNC_1(VAR_3, "Usage: %s <command>\n", VAR_2);

 FUNC_1(VAR_3, "\nCommands:\n");
 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_0); VAR_6++) {
  const struct rbcfg_command *VAR_7;
  VAR_7 = &VAR_0[VAR_6];

  VAR_5 = FUNC_2(VAR_4, sizeof(VAR_4), "%s", VAR_7->usage);
  VAR_4[VAR_5] = '\0';
  FUNC_1(VAR_3, "%s\n", VAR_4);
 }

 FUNC_1(VAR_3, "\nConfiguration options:\n");
 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_1); VAR_6++) {
  const struct rbcfg_env *VAR_8;
  int VAR_9;

  VAR_8 = &VAR_1[VAR_6];
  FUNC_1(VAR_3, "\n%s:\n", VAR_8->name);
  for (VAR_9 = 0; VAR_9 < VAR_8->num_values; VAR_9++) {
   const struct rbcfg_value *VAR_10 = &VAR_8->values[VAR_9];
   FUNC_1(VAR_3, "\t%-12s %s\n", VAR_10->name, VAR_10->desc);
  }
 }
 FUNC_1(VAR_3, "\n");
}
