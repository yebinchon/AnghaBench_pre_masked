
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int va_list ;
struct tomoyo_request_info {TYPE_5__* ee; TYPE_4__* obj; TYPE_2__* domain; } ;
struct linux_binprm {int argc; int envc; struct file* file; } ;
struct file {int f_path; } ;
struct TYPE_10__ {struct linux_binprm* bprm; int dump; } ;
struct TYPE_9__ {TYPE_3__* symlink_target; } ;
struct TYPE_8__ {char* name; } ;
struct TYPE_7__ {TYPE_1__* domainname; } ;
struct TYPE_6__ {char* name; } ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 char* FUNC_1 (int,int ) ;
 int FUNC_2 (char*,int,char*,char const*,...) ;
 scalar_t__ FUNC_3 (char const*) ;
 char* FUNC_4 (struct linux_binprm*,int *) ;
 char* FUNC_5 (struct tomoyo_request_info*) ;
 char* FUNC_6 (int *) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*,int,char const*,int ) ;

char *FUNC_9(struct tomoyo_request_info *VAR_1, int VAR_2, const char *VAR_3,
        va_list VAR_4)
{
 char *VAR_5 = ((void*)0);
 char *VAR_6 = ((void*)0);
 const char *VAR_7 = ((void*)0);
 char *VAR_8 = ((void*)0);
 const char *VAR_9 = ((void*)0);
 int VAR_10;
 const char *VAR_11 = VAR_1->domain->domainname->name;

 VAR_7 = FUNC_5(VAR_1);
 if (!VAR_7)
  return ((void*)0);

 VAR_2 += FUNC_3(VAR_11) + FUNC_3(VAR_7) + 10;
 if (VAR_1->ee) {
  struct file *VAR_12 = VAR_1->ee->bprm->file;

  VAR_8 = FUNC_6(&VAR_12->f_path);
  VAR_6 = FUNC_4(VAR_1->ee->bprm, &VAR_1->ee->dump);
  if (!VAR_8 || !VAR_6)
   goto out;

  VAR_2 += FUNC_3(VAR_8) + 80 + FUNC_3(VAR_6);
 } else if (VAR_1->obj && VAR_1->obj->symlink_target) {
  VAR_9 = VAR_1->obj->symlink_target->name;

  VAR_2 += 18 + FUNC_3(VAR_9);
 }
 VAR_2 = FUNC_7(VAR_2);
 VAR_5 = FUNC_1(VAR_2, VAR_0);
 if (!VAR_5)
  goto out;
 VAR_2--;
 VAR_10 = FUNC_2(VAR_5, VAR_2, "%s", VAR_7);
 if (VAR_8) {
  struct linux_binprm *VAR_13 = VAR_1->ee->bprm;

  VAR_10 += FUNC_2(VAR_5 + VAR_10, VAR_2 - VAR_10,
    " exec={ realpath=\"%s\" argc=%d envc=%d %s }",
    VAR_8, VAR_13->argc, VAR_13->envc, VAR_6);
 } else if (VAR_9)
  VAR_10 += FUNC_2(VAR_5 + VAR_10, VAR_2 - VAR_10, " symlink.target=\"%s\"",
    VAR_9);
 VAR_10 += FUNC_2(VAR_5 + VAR_10, VAR_2 - VAR_10, "\n%s\n", VAR_11);
 FUNC_8(VAR_5 + VAR_10, VAR_2 - VAR_10, VAR_3, VAR_4);
out:
 FUNC_0(VAR_8);
 FUNC_0(VAR_6);
 FUNC_0(VAR_7);
 return VAR_5;
}
