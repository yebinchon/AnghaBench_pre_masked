
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct passwd {scalar_t__ pw_uid; scalar_t__ pw_gid; int pw_dir; int pw_name; } ;
struct group {scalar_t__ gr_gid; } ;
struct fpm_worker_pool_s {scalar_t__ set_uid; scalar_t__ set_gid; void* home; void* user; TYPE_1__* config; } ;
struct TYPE_4__ {int run_as_root; } ;
struct TYPE_3__ {int process_priority; int name; scalar_t__* chroot; scalar_t__* group; scalar_t__* user; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 () ;
 struct group* FUNC_1 (scalar_t__*) ;
 struct passwd* FUNC_2 (scalar_t__*) ;
 struct passwd* FUNC_3 (int ) ;
 int FUNC_4 () ;
 void* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (scalar_t__*) ;
 scalar_t__ FUNC_7 (scalar_t__*,char*) ;
 void* FUNC_8 (scalar_t__*,int ,int) ;
 int FUNC_9 (int ,char*,int ,...) ;

__attribute__((used)) static int FUNC_10(struct fpm_worker_pool_s *VAR_3)
{
 struct passwd *VAR_4;
 int VAR_5 = !FUNC_0();

 if (VAR_5) {
  if (VAR_3->config->user && *VAR_3->config->user) {
   if (FUNC_6(VAR_3->config->user) == FUNC_7(VAR_3->config->user, "0123456789")) {
    VAR_3->set_uid = FUNC_8(VAR_3->config->user, 0, 10);
   } else {
    struct passwd *VAR_6;

    VAR_6 = FUNC_2(VAR_3->config->user);
    if (!VAR_6) {
     FUNC_9(VAR_0, "[pool %s] cannot get uid for user '%s'", VAR_3->config->name, VAR_3->config->user);
     return -1;
    }

    VAR_3->set_uid = VAR_6->pw_uid;
    VAR_3->set_gid = VAR_6->pw_gid;

    VAR_3->user = FUNC_5(VAR_6->pw_name);
    VAR_3->home = FUNC_5(VAR_6->pw_dir);
   }
  }

  if (VAR_3->config->group && *VAR_3->config->group) {
   if (FUNC_6(VAR_3->config->group) == FUNC_7(VAR_3->config->group, "0123456789")) {
    VAR_3->set_gid = FUNC_8(VAR_3->config->group, 0, 10);
   } else {
    struct group *VAR_7;

    VAR_7 = FUNC_1(VAR_3->config->group);
    if (!VAR_7) {
     FUNC_9(VAR_0, "[pool %s] cannot get gid for group '%s'", VAR_3->config->name, VAR_3->config->group);
     return -1;
    }
    VAR_3->set_gid = VAR_7->gr_gid;
   }
  }

  if (!VAR_2.run_as_root) {
   if (VAR_3->set_uid == 0 || VAR_3->set_gid == 0) {
    FUNC_9(VAR_0, "[pool %s] please specify user and group other than root", VAR_3->config->name);
    return -1;
   }
  }
 } else {
  if (VAR_3->config->user && *VAR_3->config->user) {
   FUNC_9(VAR_1, "[pool %s] 'user' directive is ignored when FPM is not running as root", VAR_3->config->name);
  }
  if (VAR_3->config->group && *VAR_3->config->group) {
   FUNC_9(VAR_1, "[pool %s] 'group' directive is ignored when FPM is not running as root", VAR_3->config->name);
  }
  if (VAR_3->config->chroot && *VAR_3->config->chroot) {
   FUNC_9(VAR_1, "[pool %s] 'chroot' directive is ignored when FPM is not running as root", VAR_3->config->name);
  }
  if (VAR_3->config->process_priority != 64) {
   FUNC_9(VAR_1, "[pool %s] 'process.priority' directive is ignored when FPM is not running as root", VAR_3->config->name);
  }


  VAR_4 = FUNC_3(FUNC_4());
  if (VAR_4) {
   VAR_3->user = FUNC_5(VAR_4->pw_name);
   VAR_3->home = FUNC_5(VAR_4->pw_dir);
  }
 }
 return 0;
}
