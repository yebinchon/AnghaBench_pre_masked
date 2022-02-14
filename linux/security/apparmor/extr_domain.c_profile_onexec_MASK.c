
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct path_cond {int uid; } ;
struct linux_binprm {char* filename; TYPE_1__* file; } ;
struct TYPE_6__ {unsigned int start; int dfa; } ;
struct TYPE_5__ {int flags; } ;
struct aa_profile {TYPE_3__ file; TYPE_2__ label; int disconnected; int path_flags; } ;
struct aa_perms {int allow; int xindex; } ;
struct aa_label {int dummy; } ;
struct TYPE_4__ {int f_path; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct aa_profile*,struct aa_perms*,int ,int,char const*,int *,struct aa_label*,int ,char const*,int) ;
 unsigned int FUNC_3 (int ,unsigned int) ;
 int FUNC_4 (struct aa_label*,int ) ;
 int FUNC_5 (int *,int ,char*,char const**,char const**,int ) ;
 unsigned int FUNC_6 (int ,unsigned int,char const*,struct path_cond*,struct aa_perms*) ;
 int FUNC_7 (struct aa_profile*,struct aa_label*,int,int,unsigned int,struct aa_perms*) ;
 int FUNC_8 (char*,...) ;
 scalar_t__ FUNC_9 (struct aa_profile*) ;

__attribute__((used)) static int FUNC_10(struct aa_profile *VAR_7, struct aa_label *VAR_8,
     bool VAR_9, const struct linux_binprm *VAR_10,
     char *VAR_11, struct path_cond *VAR_12,
     bool *VAR_13)
{
 unsigned int VAR_14 = VAR_7->file.start;
 struct aa_perms VAR_15 = {};
 const char *VAR_16 = ((void*)0), *VAR_17 = "change_profile onexec";
 int VAR_18 = -VAR_3;

 FUNC_0(!VAR_7);
 FUNC_0(!VAR_8);
 FUNC_0(!VAR_10);
 FUNC_0(!VAR_11);

 if (FUNC_9(VAR_7)) {






  return 0;
 }

 VAR_18 = FUNC_5(&VAR_10->file->f_path, VAR_7->path_flags, VAR_11,
        &VAR_16, &VAR_17, VAR_7->disconnected);
 if (VAR_18) {
  if (FUNC_9(VAR_7) ||
      (VAR_7->label.flags & VAR_4)) {
   FUNC_1("name lookup ix on error");
   VAR_18 = 0;
  }
  VAR_16 = VAR_10->filename;
  goto audit;
 }


 VAR_14 = FUNC_6(VAR_7->file.dfa, VAR_14, VAR_16, VAR_12, &VAR_15);
 if (!(VAR_15.allow & VAR_0)) {
  VAR_17 = "no change_onexec valid for executable";
  goto audit;
 }




 VAR_14 = FUNC_3(VAR_7->file.dfa, VAR_14);
 VAR_18 = FUNC_7(VAR_7, VAR_8, VAR_9, VAR_0,
         VAR_14, &VAR_15);
 if (VAR_18) {
  VAR_15.allow &= ~VAR_0;
  goto audit;
 }

 if (!(VAR_15.xindex & VAR_1)) {
  if (VAR_2) {
   FUNC_8("apparmor: scrubbing environment "
       "variables for %s label=", VAR_16);
   FUNC_4(VAR_8, VAR_5);
   FUNC_8("\n");
  }
  *VAR_13 = 1;
 }

audit:
 return FUNC_2(VAR_7, &VAR_15, VAR_6, VAR_0, VAR_16,
        ((void*)0), VAR_8, VAR_12->uid, VAR_17, VAR_18);
}
