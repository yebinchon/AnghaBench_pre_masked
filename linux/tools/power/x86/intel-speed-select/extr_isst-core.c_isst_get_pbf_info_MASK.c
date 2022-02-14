
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isst_pbf_info {unsigned int p1_low; unsigned int p1_high; unsigned int tdp; unsigned int t_control; unsigned int t_prochot; int core_cpumask; int core_cpumask_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int,unsigned int) ;
 int FUNC_3 (int,int ,int ,int ,unsigned int,unsigned int*) ;
 int FUNC_4 (int,unsigned long long,int ,int ,int*) ;

int FUNC_5(int VAR_5, int VAR_6, struct isst_pbf_info *VAR_7)
{
 unsigned int VAR_8, VAR_9;
 int VAR_10, VAR_11;

 VAR_7->core_cpumask_size = FUNC_1(&VAR_7->core_cpumask);

 for (VAR_10 = 0; VAR_10 < 2; ++VAR_10) {
  unsigned long long VAR_12;
  int VAR_13;

  VAR_11 = FUNC_3(VAR_5, VAR_0,
          VAR_1,
          0, (VAR_10 << 8) | VAR_6, &VAR_9);
  if (VAR_11)
   return VAR_11;

  FUNC_2(
   "cpu:%d CONFIG_TDP_PBF_GET_CORE_MASK_INFO resp:%x\n",
   VAR_5, VAR_9);

  VAR_12 = (unsigned long long)VAR_9 << (32 * VAR_10);
  FUNC_4(VAR_5, VAR_12,
       VAR_7->core_cpumask_size,
       VAR_7->core_cpumask,
       &VAR_13);
 }

 VAR_8 = VAR_6;
 VAR_11 = FUNC_3(VAR_5, VAR_0,
         VAR_2, 0, VAR_8,
         &VAR_9);
 if (VAR_11)
  return VAR_11;

 FUNC_2("cpu:%d CONFIG_TDP_PBF_GET_P1HI_P1LO_INFO resp:%x\n", VAR_5,
       VAR_9);

 VAR_7->p1_low = VAR_9 & 0xff;
 VAR_7->p1_high = (VAR_9 & FUNC_0(15, 8)) >> 8;

 VAR_8 = VAR_6;
 VAR_11 = FUNC_3(
  VAR_5, VAR_0, VAR_3, 0, VAR_8, &VAR_9);
 if (VAR_11)
  return VAR_11;

 FUNC_2("cpu:%d CONFIG_TDP_PBF_GET_TDP_INFO resp:%x\n", VAR_5, VAR_9);

 VAR_7->tdp = VAR_9 & 0xffff;

 VAR_8 = VAR_6;
 VAR_11 = FUNC_3(
  VAR_5, VAR_0, VAR_4, 0, VAR_8, &VAR_9);
 if (VAR_11)
  return VAR_11;

 FUNC_2("cpu:%d CONFIG_TDP_PBF_GET_TJ_MAX_INFO resp:%x\n", VAR_5,
       VAR_9);
 VAR_7->t_control = (VAR_9 >> 8) & 0xff;
 VAR_7->t_prochot = VAR_9 & 0xff;

 return 0;
}
