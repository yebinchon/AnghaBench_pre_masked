
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u64 ;
struct mem_cgroup {int css; int high; int memory; } ;
struct TYPE_2__ {unsigned int memcg_nr_pages_over_high; int mm; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_6 ;
 unsigned long FUNC_2 (unsigned long,unsigned long) ;
 struct mem_cgroup* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;
 unsigned long FUNC_5 (unsigned long,unsigned long) ;
 unsigned long FUNC_6 (unsigned long,int ) ;
 unsigned long FUNC_7 (int *) ;
 int FUNC_8 (unsigned long*) ;
 int FUNC_9 (unsigned long*) ;
 int FUNC_10 (struct mem_cgroup*,unsigned int,int ) ;
 int FUNC_11 (unsigned long) ;

void FUNC_12(void)
{
 unsigned long VAR_7, VAR_8, VAR_9;
 unsigned long VAR_10;
 unsigned long VAR_11, VAR_12;
 unsigned int VAR_13 = VAR_6->memcg_nr_pages_over_high;
 struct mem_cgroup *VAR_14;

 if (FUNC_4(!VAR_13))
  return;

 VAR_14 = FUNC_3(VAR_6->mm);
 FUNC_10(VAR_14, VAR_13, VAR_0);
 VAR_6->memcg_nr_pages_over_high = 0;
 VAR_7 = FUNC_7(&VAR_14->memory);
 VAR_8 = FUNC_0(VAR_14->high);

 if (VAR_7 <= VAR_8)
  goto out;





 VAR_9 = FUNC_5(VAR_8, 1UL);

 VAR_12 = FUNC_2((u64)(VAR_7 - VAR_8) << VAR_3,
     VAR_9);

 VAR_11 = ((u64)VAR_12 * VAR_12 * VAR_1)
  >> (VAR_3 + VAR_4);
 VAR_11 = VAR_11 * VAR_13 / VAR_2;






 VAR_11 = FUNC_6(VAR_11, VAR_5);







 if (VAR_11 <= VAR_1 / 100)
  goto out;






 FUNC_8(&VAR_10);
 FUNC_11(VAR_11);
 FUNC_9(&VAR_10);

out:
 FUNC_1(&VAR_14->css);
}
