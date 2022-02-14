
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cmdnames {int cnt; TYPE_1__** names; } ;
typedef int main_cmds ;
struct TYPE_2__ {unsigned int len; char* name; } ;


 scalar_t__ FUNC_0 (struct cmdnames*,struct cmdnames*) ;
 int VAR_0 ;
 int FUNC_1 (struct cmdnames*) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,...) ;
 unsigned int FUNC_4 (char const*,char*,int ,int,int,int) ;
 int VAR_2 ;
 int FUNC_5 (char*,struct cmdnames*,struct cmdnames*) ;
 int FUNC_6 (struct cmdnames*,int ,int) ;
 int FUNC_7 (int ,int *) ;
 int VAR_3 ;
 int FUNC_8 (int *,int ,int) ;
 int FUNC_9 (TYPE_1__**,int,int,int ) ;
 int VAR_4 ;
 int FUNC_10 (struct cmdnames*) ;

const char *FUNC_11(const char *VAR_5)
{
 unsigned int VAR_6, VAR_7 = 0, VAR_8 = 0;
 struct cmdnames VAR_9, VAR_10;

 FUNC_6(&VAR_9, 0, sizeof(VAR_9));
 FUNC_6(&VAR_10, 0, sizeof(VAR_9));

 FUNC_7(VAR_3, ((void*)0));

 FUNC_5("perf-", &VAR_9, &VAR_10);

 if (FUNC_0(&VAR_9, &VAR_10) < 0) {
  FUNC_3(VAR_4, "ERROR: Failed to allocate command list for unknown command.\n");
  goto end;
 }
 FUNC_9(VAR_9.names, VAR_9.cnt,
       sizeof(VAR_9.names), VAR_1);
 FUNC_10(&VAR_9);

 if (VAR_9.cnt) {

  for (VAR_6 = 0; VAR_6 < VAR_9.cnt; ++VAR_6)
   VAR_9.names[VAR_6]->len =
    FUNC_4(VAR_5, VAR_9.names[VAR_6]->name, 0, 2, 1, 4);

  FUNC_9(VAR_9.names, VAR_9.cnt,
        sizeof(*VAR_9.names), VAR_2);

  VAR_8 = VAR_9.names[0]->len;
  VAR_7 = 1;
  while (VAR_7 < VAR_9.cnt && VAR_8 == VAR_9.names[VAR_7]->len)
   ++VAR_7;
 }

 if (VAR_0 && VAR_7 == 1) {
  const char *VAR_11 = VAR_9.names[0]->name;

  VAR_9.names[0] = ((void*)0);
  FUNC_1(&VAR_9);
  FUNC_3(VAR_4, "WARNING: You called a perf program named '%s', "
   "which does not exist.\n"
   "Continuing under the assumption that you meant '%s'\n",
   VAR_5, VAR_11);
  if (VAR_0 > 0) {
   FUNC_3(VAR_4, "in %0.1f seconds automatically...\n",
    (float)VAR_0/10.0);
   FUNC_8(((void*)0), 0, VAR_0 * 100);
  }
  return VAR_11;
 }

 FUNC_3(VAR_4, "perf: '%s' is not a perf-command. See 'perf --help'.\n", VAR_5);

 if (VAR_9.cnt && VAR_8 < 6) {
  FUNC_3(VAR_4, "\nDid you mean %s?\n",
   VAR_7 < 2 ? "this": "one of these");

  for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
   FUNC_3(VAR_4, "\t%s\n", VAR_9.names[VAR_6]->name);
 }
end:
 FUNC_2(1);
}
