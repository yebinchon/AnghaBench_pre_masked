
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
struct isst_pbf_info {int p1_high; int p1_low; int t_prochot; int tdp; int core_cpumask; int core_cpumask_size; } ;
typedef int header ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,int,char*,char*) ;
 int FUNC_1 (int,char*,int ,int ) ;
 int FUNC_2 (int,char*,int ,int ) ;
 int FUNC_3 (char*,int,char*,...) ;

__attribute__((used)) static void FUNC_4(int VAR_1, FILE *VAR_2, int VAR_3,
       struct isst_pbf_info *VAR_4,
       int VAR_5)
{
 char VAR_6[256];
 char VAR_7[256];

 FUNC_3(VAR_6, sizeof(VAR_6), "speed-select-base-freq");
 FUNC_0(VAR_2, VAR_5, VAR_6, ((void*)0));

 FUNC_3(VAR_6, sizeof(VAR_6), "high-priority-base-frequency(MHz)");
 FUNC_3(VAR_7, sizeof(VAR_7), "%d",
   VAR_4->p1_high * VAR_0);
 FUNC_0(VAR_2, VAR_5 + 1, VAR_6, VAR_7);

 FUNC_3(VAR_6, sizeof(VAR_6), "high-priority-cpu-mask");
 FUNC_2(sizeof(VAR_7), VAR_7, VAR_4->core_cpumask_size,
       VAR_4->core_cpumask);
 FUNC_0(VAR_2, VAR_5 + 1, VAR_6, VAR_7);

 FUNC_3(VAR_6, sizeof(VAR_6), "high-priority-cpu-list");
 FUNC_1(sizeof(VAR_7), VAR_7,
       VAR_4->core_cpumask_size,
       VAR_4->core_cpumask);
 FUNC_0(VAR_2, VAR_5 + 1, VAR_6, VAR_7);

 FUNC_3(VAR_6, sizeof(VAR_6), "low-priority-base-frequency(MHz)");
 FUNC_3(VAR_7, sizeof(VAR_7), "%d",
   VAR_4->p1_low * VAR_0);
 FUNC_0(VAR_2, VAR_5 + 1, VAR_6, VAR_7);

 FUNC_3(VAR_6, sizeof(VAR_6), "tjunction-temperature(C)");
 FUNC_3(VAR_7, sizeof(VAR_7), "%d", VAR_4->t_prochot);
 FUNC_0(VAR_2, VAR_5 + 1, VAR_6, VAR_7);

 FUNC_3(VAR_6, sizeof(VAR_6), "thermal-design-power(W)");
 FUNC_3(VAR_7, sizeof(VAR_7), "%d", VAR_4->tdp);
 FUNC_0(VAR_2, VAR_5 + 1, VAR_6, VAR_7);
}
