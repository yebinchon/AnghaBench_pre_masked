
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_cgroup {int dummy; } ;


 int FUNC_0 (struct mem_cgroup*,struct mem_cgroup*) ;
 struct mem_cgroup* FUNC_1 (struct mem_cgroup*) ;
 struct mem_cgroup* VAR_0 ;

__attribute__((used)) static void FUNC_2(struct mem_cgroup *VAR_1)
{
 struct mem_cgroup *VAR_2 = VAR_1;
 struct mem_cgroup *VAR_3;

 do {
  FUNC_0(VAR_2, VAR_1);
  VAR_3 = VAR_2;
 } while ((VAR_2 = FUNC_1(VAR_2)));







 if (VAR_3 != VAR_0)
  FUNC_0(VAR_0,
      VAR_1);
}
