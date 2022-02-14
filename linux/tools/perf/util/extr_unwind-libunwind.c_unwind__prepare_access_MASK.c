
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct unwind_libunwind_ops {int dummy; } ;
struct map_groups {TYPE_1__* unwind_libunwind_ops; TYPE_4__* machine; scalar_t__ addr_space; } ;
struct map {TYPE_3__* dso; } ;
typedef enum dso_type { ____Placeholder_dso_type } dso_type ;
struct TYPE_8__ {TYPE_2__* env; } ;
struct TYPE_7__ {int name; } ;
struct TYPE_6__ {int arch; } ;
struct TYPE_5__ {int (* prepare_access ) (struct map_groups*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct unwind_libunwind_ops* VAR_2 ;
 int FUNC_0 (TYPE_3__*,TYPE_4__*) ;
 int VAR_3 ;
 struct unwind_libunwind_ops* VAR_4 ;
 char* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char const*,char*) ;
 int FUNC_5 (struct map_groups*) ;
 int FUNC_6 (struct map_groups*,struct unwind_libunwind_ops*) ;
 struct unwind_libunwind_ops* VAR_5 ;

int FUNC_7(struct map_groups *VAR_6, struct map *VAR_7,
      bool *VAR_8)
{
 const char *VAR_9;
 enum dso_type VAR_10;
 struct unwind_libunwind_ops *VAR_11 = VAR_4;
 int VAR_12;

 if (!VAR_3)
  return 0;

 if (VAR_6->addr_space) {
  FUNC_2("unwind: thread map already set, dso=%s\n",
    VAR_7->dso->name);
  if (VAR_8)
   *VAR_8 = 1;
  return 0;
 }


 if (!VAR_6->machine->env || !VAR_6->machine->env->arch)
  goto out_register;

 VAR_10 = FUNC_0(VAR_7->dso, VAR_6->machine);
 if (VAR_10 == VAR_1)
  return 0;

 VAR_9 = FUNC_1(VAR_6->machine->env);

 if (!FUNC_4(VAR_9, "x86")) {
  if (VAR_10 != VAR_0)
   VAR_11 = VAR_5;
 } else if (!FUNC_4(VAR_9, "arm64") || !FUNC_4(VAR_9, "arm")) {
  if (VAR_10 == VAR_0)
   VAR_11 = VAR_2;
 }

 if (!VAR_11) {
  FUNC_3("unwind: target platform=%s is not supported\n", VAR_9);
  return 0;
 }
out_register:
 FUNC_6(VAR_6, VAR_11);

 VAR_12 = VAR_6->unwind_libunwind_ops->prepare_access(VAR_6);
 if (VAR_8)
  *VAR_8 = VAR_12 ? 0 : 1;
 return VAR_12;
}
