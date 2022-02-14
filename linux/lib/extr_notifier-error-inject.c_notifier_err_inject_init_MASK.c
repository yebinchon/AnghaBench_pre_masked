
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct notifier_err_inject_action {char* name; int error; } ;
struct TYPE_2__ {int priority; int notifier_call; } ;
struct notifier_err_inject {struct notifier_err_inject_action* actions; TYPE_1__ nb; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dentry* FUNC_0 (char const*,struct dentry*) ;
 int FUNC_1 (char*,int,struct dentry*,int *) ;
 int VAR_3 ;

struct dentry *FUNC_2(const char *VAR_4, struct dentry *VAR_5,
   struct notifier_err_inject *VAR_6, int VAR_7)
{
 struct notifier_err_inject_action *VAR_8;
 umode_t VAR_9 = VAR_0 | VAR_1 | VAR_2;
 struct dentry *VAR_10;
 struct dentry *VAR_11;

 VAR_6->nb.notifier_call = VAR_3;
 VAR_6->nb.priority = VAR_7;

 VAR_10 = FUNC_0(VAR_4, VAR_5);

 VAR_11 = FUNC_0("actions", VAR_10);

 for (VAR_8 = VAR_6->actions; VAR_8->name; VAR_8++) {
  struct dentry *VAR_12;

  VAR_12 = FUNC_0(VAR_8->name, VAR_11);






  FUNC_1("error", VAR_9, VAR_12, &VAR_8->error);
 }
 return VAR_10;
}
