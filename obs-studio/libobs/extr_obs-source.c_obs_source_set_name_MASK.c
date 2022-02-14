
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct calldata {int dummy; } ;
struct TYPE_8__ {char* name; int signals; int private; } ;
struct TYPE_7__ {TYPE_4__ context; } ;
typedef TYPE_1__ obs_source_t ;
struct TYPE_9__ {int signals; } ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (struct calldata*) ;
 int FUNC_3 (struct calldata*) ;
 int FUNC_4 (struct calldata*,char*,TYPE_1__*) ;
 int FUNC_5 (struct calldata*,char*,char*) ;
 TYPE_5__* VAR_0 ;
 int FUNC_6 (TYPE_4__*,char const*) ;
 int FUNC_7 (TYPE_1__*,char*) ;
 int FUNC_8 (int ,char*,struct calldata*) ;
 scalar_t__ FUNC_9 (char const*,char*) ;

void FUNC_10(obs_source_t *VAR_1, const char *VAR_2)
{
 if (!FUNC_7(VAR_1, "obs_source_set_name"))
  return;

 if (!VAR_2 || !*VAR_2 || !VAR_1->context.name ||
     FUNC_9(VAR_2, VAR_1->context.name) != 0) {
  struct calldata VAR_3;
  char *VAR_4 = FUNC_1(VAR_1->context.name);
  FUNC_6(&VAR_1->context, VAR_2);

  FUNC_3(&VAR_3);
  FUNC_4(&VAR_3, "source", VAR_1);
  FUNC_5(&VAR_3, "new_name", VAR_1->context.name);
  FUNC_5(&VAR_3, "prev_name", VAR_4);
  if (!VAR_1->context.private)
   FUNC_8(VAR_0->signals, "source_rename",
           &VAR_3);
  FUNC_8(VAR_1->context.signals, "rename", &VAR_3);
  FUNC_2(&VAR_3);
  FUNC_0(VAR_4);
 }
}
