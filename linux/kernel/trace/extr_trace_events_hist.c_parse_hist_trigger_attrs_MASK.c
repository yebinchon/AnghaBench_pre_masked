
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_array {int dummy; } ;
struct hist_trigger_attrs {int pause; int cont; int clear; scalar_t__ clock; int keys_str; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hist_trigger_attrs* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct hist_trigger_attrs*) ;
 scalar_t__ FUNC_2 (char*,int ) ;
 struct hist_trigger_attrs* FUNC_3 (int,int ) ;
 int FUNC_4 (char*,struct hist_trigger_attrs*) ;
 int FUNC_5 (struct trace_array*,char*,struct hist_trigger_attrs*) ;
 scalar_t__ FUNC_6 (char*,char) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 char* FUNC_8 (char**,char*) ;

__attribute__((used)) static struct hist_trigger_attrs *
FUNC_9(struct trace_array *VAR_3, char *VAR_4)
{
 struct hist_trigger_attrs *VAR_5;
 int VAR_6 = 0;

 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  return FUNC_0(-VAR_1);

 while (VAR_4) {
  char *VAR_7 = FUNC_8(&VAR_4, ":");

  if (FUNC_6(VAR_7, '=')) {
   VAR_6 = FUNC_5(VAR_3, VAR_7, VAR_5);
   if (VAR_6)
    goto free;
  } else if (FUNC_7(VAR_7, "pause") == 0)
   VAR_5->pause = 1;
  else if ((FUNC_7(VAR_7, "cont") == 0) ||
    (FUNC_7(VAR_7, "continue") == 0))
   VAR_5->cont = 1;
  else if (FUNC_7(VAR_7, "clear") == 0)
   VAR_5->clear = 1;
  else {
   VAR_6 = FUNC_4(VAR_7, VAR_5);
   if (VAR_6)
    goto free;
  }
 }

 if (!VAR_5->keys_str) {
  VAR_6 = -VAR_0;
  goto free;
 }

 if (!VAR_5->clock) {
  VAR_5->clock = FUNC_2("global", VAR_2);
  if (!VAR_5->clock) {
   VAR_6 = -VAR_1;
   goto free;
  }
 }

 return VAR_5;
 free:
 FUNC_1(VAR_5);

 return FUNC_0(VAR_6);
}
