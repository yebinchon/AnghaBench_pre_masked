
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup {int fd; int name; int refcnt; } ;


 int FUNC_0 (struct cgroup*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (char const*) ;
 struct cgroup* FUNC_4 (int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static struct cgroup *FUNC_6(const char *VAR_0)
{
 struct cgroup *VAR_1 = FUNC_4(sizeof(*VAR_1));

 if (VAR_1 != ((void*)0)) {
  FUNC_2(&VAR_1->refcnt, 1);

  VAR_1->name = FUNC_3(VAR_0);
  if (!VAR_1->name)
   goto out_err;
  VAR_1->fd = FUNC_1(VAR_0);
  if (VAR_1->fd == -1)
   goto out_free_name;
 }

 return VAR_1;

out_free_name:
 FUNC_5(&VAR_1->name);
out_err:
 FUNC_0(VAR_1);
 return ((void*)0);
}
