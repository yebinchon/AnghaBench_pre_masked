
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long min; unsigned long low; unsigned long emin; unsigned long elow; int children_low_usage; int children_min_usage; } ;
struct mem_cgroup {TYPE_1__ memory; } ;
typedef enum mem_cgroup_protection { ____Placeholder_mem_cgroup_protection } mem_cgroup_protection ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (int *) ;
 scalar_t__ FUNC_2 () ;
 unsigned long FUNC_3 (unsigned long,unsigned long) ;
 unsigned long FUNC_4 (TYPE_1__*) ;
 struct mem_cgroup* FUNC_5 (struct mem_cgroup*) ;
 struct mem_cgroup* VAR_3 ;

enum mem_cgroup_protection FUNC_6(struct mem_cgroup *VAR_4,
      struct mem_cgroup *VAR_5)
{
 struct mem_cgroup *VAR_6;
 unsigned long VAR_7, VAR_8;
 unsigned long VAR_9, VAR_10;
 unsigned long VAR_11;

 if (FUNC_2())
  return VAR_2;

 if (!VAR_4)
  VAR_4 = VAR_3;
 if (VAR_5 == VAR_4)
  return VAR_2;

 VAR_11 = FUNC_4(&VAR_5->memory);
 if (!VAR_11)
  return VAR_2;

 VAR_7 = VAR_5->memory.min;
 VAR_9 = VAR_5->memory.low;

 VAR_6 = FUNC_5(VAR_5);

 if (!VAR_6)
  return VAR_2;

 if (VAR_6 == VAR_4)
  goto exit;

 VAR_8 = FUNC_0(VAR_6->memory.emin);
 VAR_7 = FUNC_3(VAR_7, VAR_8);
 if (VAR_7 && VAR_8) {
  unsigned long VAR_12, VAR_13;

  VAR_12 = FUNC_3(VAR_11, VAR_5->memory.min);
  VAR_13 = FUNC_1(
   &VAR_6->memory.children_min_usage);

  if (VAR_12 && VAR_13)
   VAR_7 = FUNC_3(VAR_7, VAR_8 * VAR_12 /
       VAR_13);
 }

 VAR_10 = FUNC_0(VAR_6->memory.elow);
 VAR_9 = FUNC_3(VAR_9, VAR_10);
 if (VAR_9 && VAR_10) {
  unsigned long VAR_14, VAR_15;

  VAR_14 = FUNC_3(VAR_11, VAR_5->memory.low);
  VAR_15 = FUNC_1(
   &VAR_6->memory.children_low_usage);

  if (VAR_14 && VAR_15)
   VAR_9 = FUNC_3(VAR_9, VAR_10 * VAR_14 /
       VAR_15);
 }

exit:
 VAR_5->memory.emin = VAR_7;
 VAR_5->memory.elow = VAR_9;

 if (VAR_11 <= VAR_7)
  return VAR_1;
 else if (VAR_11 <= VAR_9)
  return VAR_0;
 else
  return VAR_2;
}
