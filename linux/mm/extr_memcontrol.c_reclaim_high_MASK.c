
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_cgroup {scalar_t__ high; int memory; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (struct mem_cgroup*,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 struct mem_cgroup* FUNC_2 (struct mem_cgroup*) ;
 int FUNC_3 (struct mem_cgroup*,unsigned int,int ,int) ;

__attribute__((used)) static void FUNC_4(struct mem_cgroup *VAR_1,
    unsigned int VAR_2,
    gfp_t VAR_3)
{
 do {
  if (FUNC_1(&VAR_1->memory) <= VAR_1->high)
   continue;
  FUNC_0(VAR_1, VAR_0);
  FUNC_3(VAR_1, VAR_2, VAR_3, 1);
 } while ((VAR_1 = FUNC_2(VAR_1)));
}
