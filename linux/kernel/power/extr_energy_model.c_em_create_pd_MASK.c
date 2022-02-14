
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct em_perf_domain {unsigned long power; unsigned long frequency; int nr_cap_states; int cpus; struct em_perf_domain* table; int cost; } ;
struct em_data_callback {int (* active_power ) (unsigned long*,unsigned long*,int) ;} ;
struct em_cap_state {unsigned long power; unsigned long frequency; int nr_cap_states; int cpus; struct em_cap_state* table; int cost; } ;
typedef int cpumask_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int,unsigned long) ;
 int FUNC_4 (struct em_perf_domain*,int) ;
 struct em_perf_domain* FUNC_5 (int,int,int ) ;
 int FUNC_6 (struct em_perf_domain*) ;
 struct em_perf_domain* FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (char*,int,unsigned long) ;
 int FUNC_9 (char*,int,int,int) ;
 int FUNC_10 (unsigned long*,unsigned long*,int) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static struct em_perf_domain *FUNC_12(cpumask_t *VAR_3, int VAR_4,
      struct em_data_callback *VAR_5)
{
 unsigned long VAR_6, VAR_7 = VAR_2;
 unsigned long VAR_8, VAR_9, VAR_10 = 0;
 int VAR_11, VAR_12, VAR_13 = FUNC_1(VAR_3);
 struct em_cap_state *VAR_14;
 struct em_perf_domain *VAR_15;
 u64 VAR_16;

 if (!VAR_5->active_power)
  return ((void*)0);

 VAR_15 = FUNC_7(sizeof(*VAR_15) + FUNC_2(), VAR_1);
 if (!VAR_15)
  return ((void*)0);

 VAR_14 = FUNC_5(VAR_4, sizeof(*VAR_14), VAR_1);
 if (!VAR_14)
  goto free_pd;


 for (VAR_11 = 0, VAR_9 = 0; VAR_11 < VAR_4; VAR_11++, VAR_9++) {





  VAR_12 = VAR_5->active_power(&VAR_8, &VAR_9, VAR_13);
  if (VAR_12) {
   FUNC_8("pd%d: invalid cap. state: %d\n", VAR_13, VAR_12);
   goto free_cs_table;
  }





  if (VAR_9 <= VAR_10) {
   FUNC_8("pd%d: non-increasing freq: %lu\n", VAR_13, VAR_9);
   goto free_cs_table;
  }





  if (!VAR_8 || VAR_8 > VAR_0) {
   FUNC_8("pd%d: invalid power: %lu\n", VAR_13, VAR_8);
   goto free_cs_table;
  }

  VAR_14[VAR_11].power = VAR_8;
  VAR_14[VAR_11].frequency = VAR_10 = VAR_9;







  VAR_6 = VAR_9 / VAR_8;
  if (VAR_6 >= VAR_7)
   FUNC_9("pd%d: hertz/watts ratio non-monotonically decreasing: em_cap_state %d >= em_cap_state%d\n",
     VAR_13, VAR_11, VAR_11 - 1);
  VAR_7 = VAR_6;
 }


 VAR_16 = (u64) VAR_14[VAR_4 - 1].frequency;
 for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {
  VAR_14[VAR_11].cost = FUNC_3(VAR_16 * VAR_14[VAR_11].power,
       VAR_14[VAR_11].frequency);
 }

 VAR_15->table = VAR_14;
 VAR_15->nr_cap_states = VAR_4;
 FUNC_0(FUNC_11(VAR_15->cpus), VAR_3);

 FUNC_4(VAR_15, VAR_13);

 return VAR_15;

free_cs_table:
 FUNC_6(VAR_14);
free_pd:
 FUNC_6(VAR_15);

 return ((void*)0);
}
