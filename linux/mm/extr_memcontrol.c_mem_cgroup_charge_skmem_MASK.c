
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page_counter {int dummy; } ;
struct mem_cgroup {int tcpmem_pressure; int tcpmem; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int VAR_4 ;
 int FUNC_2 (struct mem_cgroup*,int ,unsigned int) ;
 int FUNC_3 (int *,unsigned int) ;
 scalar_t__ FUNC_4 (int *,unsigned int,struct page_counter**) ;
 scalar_t__ FUNC_5 (struct mem_cgroup*,int,unsigned int) ;

bool FUNC_6(struct mem_cgroup *VAR_5, unsigned int VAR_6)
{
 gfp_t VAR_7 = VAR_0;

 if (!FUNC_0(VAR_4)) {
  struct page_counter *VAR_8;

  if (FUNC_4(&VAR_5->tcpmem, VAR_6, &VAR_8)) {
   VAR_5->tcpmem_pressure = 0;
   return 1;
  }
  FUNC_3(&VAR_5->tcpmem, VAR_6);
  VAR_5->tcpmem_pressure = 1;
  return 0;
 }


 if (FUNC_1())
  VAR_7 = VAR_1;

 FUNC_2(VAR_5, VAR_2, VAR_6);

 if (FUNC_5(VAR_5, VAR_7, VAR_6) == 0)
  return 1;

 FUNC_5(VAR_5, VAR_7|VAR_3, VAR_6);
 return 0;
}
