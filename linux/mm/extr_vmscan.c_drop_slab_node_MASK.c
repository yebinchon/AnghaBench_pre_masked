
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_cgroup {int dummy; } ;


 int VAR_0 ;
 struct mem_cgroup* FUNC_0 (int *,struct mem_cgroup*,int *) ;
 scalar_t__ FUNC_1 (int ,int,struct mem_cgroup*,int ) ;

void FUNC_2(int VAR_1)
{
 unsigned long VAR_2;

 do {
  struct mem_cgroup *VAR_3 = ((void*)0);

  VAR_2 = 0;
  VAR_3 = FUNC_0(((void*)0), ((void*)0), ((void*)0));
  do {
   VAR_2 += FUNC_1(VAR_0, VAR_1, VAR_3, 0);
  } while ((VAR_3 = FUNC_0(((void*)0), VAR_3, ((void*)0))) != ((void*)0));
 } while (VAR_2 > 10);
}
