
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isst_pkg_ctdp_level_info {int cpu_count; int core_cpumask; int core_cpumask_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int,int,unsigned int) ;
 int FUNC_1 (int,int ,int ,int ,int,unsigned int*) ;
 int FUNC_2 (int,unsigned long long,int ,int ,int*) ;

int FUNC_3(int VAR_2, int VAR_3,
      struct isst_pkg_ctdp_level_info *VAR_4)
{
 unsigned int VAR_5;
 int VAR_6, VAR_7;

 VAR_4->cpu_count = 0;
 for (VAR_6 = 0; VAR_6 < 2; ++VAR_6) {
  unsigned long long VAR_8;
  int VAR_9 = 0;

  VAR_7 = FUNC_1(VAR_2, VAR_0,
          VAR_1, 0,
          (VAR_6 << 8) | VAR_3, &VAR_5);
  if (VAR_7)
   return VAR_7;

  FUNC_0(
   "cpu:%d ctdp:%d mask:%d CONFIG_TDP_GET_CORE_MASK resp:%x\n",
   VAR_2, VAR_3, VAR_6, VAR_5);

  VAR_8 = (unsigned long long)VAR_5 << (32 * VAR_6);
  FUNC_2(VAR_2, VAR_8,
       VAR_4->core_cpumask_size,
       VAR_4->core_cpumask,
       &VAR_9);
  VAR_4->cpu_count += VAR_9;
  FUNC_0("cpu:%d ctdp:%d mask:%d cpu count:%d\n", VAR_2,
        VAR_3, VAR_6, VAR_4->cpu_count);
 }

 return 0;
}
