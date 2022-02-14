
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup_subsys_state {int dummy; } ;
struct hugetlb_cgroup {struct cgroup_subsys_state css; } ;


 int VAR_0 ;
 struct cgroup_subsys_state* FUNC_0 (int ) ;
 int VAR_1 ;
 struct hugetlb_cgroup* FUNC_1 (struct cgroup_subsys_state*) ;
 int FUNC_2 (struct hugetlb_cgroup*,struct hugetlb_cgroup*) ;
 struct hugetlb_cgroup* FUNC_3 (int,int ) ;
 struct hugetlb_cgroup* VAR_2 ;

__attribute__((used)) static struct cgroup_subsys_state *
FUNC_4(struct cgroup_subsys_state *VAR_3)
{
 struct hugetlb_cgroup *VAR_4 = FUNC_1(VAR_3);
 struct hugetlb_cgroup *VAR_5;

 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 if (!VAR_4)
  VAR_2 = VAR_5;

 FUNC_2(VAR_5, VAR_4);
 return &VAR_5->css;
}
