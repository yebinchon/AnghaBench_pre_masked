
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct user_namespace {int flags; int parent; int owner; } ;
struct uid_gid_map {int nr_extents; TYPE_1__* extent; } ;
struct file {struct cred* f_cred; } ;
struct cred {int egid; int euid; } ;
typedef int kuid_t ;
typedef int kgid_t ;
struct TYPE_2__ {int count; int lower_first; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct file const*,int ,int) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (int ,int ) ;

__attribute__((used)) static bool FUNC_7(const struct file *VAR_3,
    struct user_namespace *VAR_4, int VAR_5,
    struct uid_gid_map *VAR_6)
{
 const struct cred *VAR_7 = VAR_3->f_cred;



 if ((VAR_6->nr_extents == 1) && (VAR_6->extent[0].count == 1) &&
     FUNC_6(VAR_4->owner, VAR_7->euid)) {
  u32 VAR_8 = VAR_6->extent[0].lower_first;
  if (VAR_5 == VAR_1) {
   kuid_t VAR_9 = FUNC_4(VAR_4->parent, VAR_8);
   if (FUNC_6(VAR_9, VAR_7->euid))
    return 1;
  } else if (VAR_5 == VAR_0) {
   kgid_t VAR_10 = FUNC_3(VAR_4->parent, VAR_8);
   if (!(VAR_4->flags & VAR_2) &&
       FUNC_2(VAR_10, VAR_7->egid))
    return 1;
  }
 }


 if (!FUNC_0(VAR_5))
  return 1;





 if (FUNC_5(VAR_4->parent, VAR_5) &&
     FUNC_1(VAR_3, VAR_4->parent, VAR_5))
  return 1;

 return 0;
}
