
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_probe {int size; struct probe_arg* args; int nr_args; } ;
struct probe_arg {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (char*,int,int ) ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,struct probe_arg*,int) ;
 int FUNC_6 (char*,int *,struct probe_arg*,unsigned int,int) ;

int FUNC_7(struct trace_probe *VAR_8, int VAR_9, char *VAR_10,
    unsigned int VAR_11)
{
 struct probe_arg *VAR_12 = &VAR_8->args[VAR_9];
 char *VAR_13;


 VAR_8->nr_args++;

 VAR_13 = FUNC_3(VAR_10, '=');
 if (VAR_13) {
  if (VAR_13 - VAR_10 > VAR_5) {
   FUNC_4(0, VAR_0);
   return -VAR_2;
  } else if (VAR_13 == VAR_10) {
   FUNC_4(0, VAR_6);
   return -VAR_2;
  }
  VAR_12->name = FUNC_2(VAR_10, VAR_13 - VAR_10, VAR_4);
  VAR_13++;
 } else {

  VAR_12->name = FUNC_1(VAR_4, "arg%d", VAR_9 + 1);
  VAR_13 = VAR_10;
 }
 if (!VAR_12->name)
  return -VAR_3;

 if (!FUNC_0(VAR_12->name)) {
  FUNC_4(0, VAR_1);
  return -VAR_2;
 }
 if (FUNC_5(VAR_12->name, VAR_8->args, VAR_9)) {
  FUNC_4(0, VAR_7);
  return -VAR_2;
 }

 return FUNC_6(VAR_13, &VAR_8->size, VAR_12, VAR_11,
            VAR_13 - VAR_10);
}
