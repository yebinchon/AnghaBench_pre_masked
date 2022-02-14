
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct topology {int sib_core_nr; int sib_thr_nr; int * sib_thr; int * sib_core; } ;
struct perf_env {int nr_sibling_cores; int nr_sibling_threads; char* sibling_cores; char* sibling_threads; int nr_cpus_online; } ;
typedef int cpumask_t ;


 int VAR_0 ;
 void* FUNC_0 (int,int) ;
 int FUNC_1 (int ,char*) ;
 int* FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int*,struct topology*,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (char*,int *,int) ;
 scalar_t__ FUNC_6 (char*) ;
 int* VAR_2 ;
 int FUNC_7 (int **) ;

int FUNC_8(struct perf_env *VAR_3)
{
 int VAR_4, VAR_5;
 struct topology VAR_6;
 char *VAR_7, *VAR_8;

 VAR_5 = FUNC_3(VAR_3->nr_cpus_online, VAR_0);

 VAR_6.sib_core_nr = VAR_3->nr_sibling_cores;
 VAR_6.sib_thr_nr = VAR_3->nr_sibling_threads;
 VAR_6.sib_core = FUNC_0(VAR_3->nr_sibling_cores, sizeof(cpumask_t));
 VAR_6.sib_thr = FUNC_0(VAR_3->nr_sibling_threads, sizeof(cpumask_t));

 VAR_7 = VAR_3->sibling_cores;
 VAR_8 = VAR_3->sibling_threads;

 if (!VAR_6.sib_core || !VAR_6.sib_thr) {
  FUNC_1(VAR_1, "topology: no memory\n");
  goto exit;
 }

 for (VAR_4 = 0; VAR_4 < VAR_3->nr_sibling_cores; VAR_4++) {
  if (FUNC_5(VAR_7, &VAR_6.sib_core[VAR_4], VAR_5)) {
   FUNC_1(VAR_1, "topology: can't parse siblings map\n");
   goto exit;
  }

  VAR_7 += FUNC_6(VAR_7) + 1;
 }

 for (VAR_4 = 0; VAR_4 < VAR_3->nr_sibling_threads; VAR_4++) {
  if (FUNC_5(VAR_8, &VAR_6.sib_thr[VAR_4], VAR_5)) {
   FUNC_1(VAR_1, "topology: can't parse siblings map\n");
   goto exit;
  }

  VAR_8 += FUNC_6(VAR_8) + 1;
 }

 VAR_2 = FUNC_2(sizeof(int) * VAR_5);
 if (!VAR_2) {
  FUNC_1(VAR_1, "topology: no memory\n");
  goto exit;
 }

 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
  VAR_2[VAR_4] = -1;

 FUNC_4(VAR_2, &VAR_6, VAR_5);

 return 0;

exit:
 FUNC_7(&VAR_6.sib_core);
 FUNC_7(&VAR_6.sib_thr);

 return -1;
}
