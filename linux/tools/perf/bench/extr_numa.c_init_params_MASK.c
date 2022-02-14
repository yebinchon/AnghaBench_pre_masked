
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct params {int serialize_startup; int data_reads; int data_writes; int data_backwards; int data_rand_walk; int nr_loops; int init_random; char* mb_global_str; int nr_proc; int nr_threads; int nr_secs; int run_all; } ;


 int FUNC_0 (struct params*,int ,int) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(struct params *VAR_0, const char *VAR_1, int VAR_2, const char **VAR_3)
{
 int VAR_4;

 FUNC_1("\n # Running %s \"perf bench numa", VAR_1);

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  FUNC_1(" %s", VAR_3[VAR_4]);

 FUNC_1("\"\n");

 FUNC_0(VAR_0, 0, sizeof(*VAR_0));



 VAR_0->serialize_startup = 1;
 VAR_0->data_reads = 1;
 VAR_0->data_writes = 1;
 VAR_0->data_backwards = 1;
 VAR_0->data_rand_walk = 1;
 VAR_0->nr_loops = -1;
 VAR_0->init_random = 1;
 VAR_0->mb_global_str = "1";
 VAR_0->nr_proc = 1;
 VAR_0->nr_threads = 1;
 VAR_0->nr_secs = 5;
 VAR_0->run_all = VAR_2 == 1;
}
