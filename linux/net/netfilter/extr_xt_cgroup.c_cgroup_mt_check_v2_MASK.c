
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_mtchk_param {struct xt_cgroup_info_v2* matchinfo; } ;
struct xt_cgroup_info_v2 {int invert_path; int invert_classid; struct cgroup* priv; int path; scalar_t__ has_path; scalar_t__ has_classid; } ;
struct cgroup {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct cgroup*) ;
 int FUNC_1 (struct cgroup*) ;
 struct cgroup* FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static int FUNC_5(const struct xt_mtchk_param *VAR_1)
{
 struct xt_cgroup_info_v2 *VAR_2 = VAR_1->matchinfo;
 struct cgroup *VAR_3;

 if ((VAR_2->invert_path & ~1) || (VAR_2->invert_classid & ~1))
  return -VAR_0;

 if (!VAR_2->has_path && !VAR_2->has_classid) {
  FUNC_3("xt_cgroup: no path or classid specified\n");
  return -VAR_0;
 }

 if (VAR_2->has_path && VAR_2->has_classid) {
  FUNC_4("path and classid specified\n");
  return -VAR_0;
 }

 VAR_2->priv = ((void*)0);
 if (VAR_2->has_path) {
  VAR_3 = FUNC_2(VAR_2->path);
  if (FUNC_0(VAR_3)) {
   FUNC_4("invalid path, errno=%ld\n",
         FUNC_1(VAR_3));
   return -VAR_0;
  }
  VAR_2->priv = VAR_3;
 }

 return 0;
}
