
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cpu_topology {int logical_cpu_id; int physical_core_id; int put_ids; int thread_id; } ;
struct TYPE_4__ {int thread_id; } ;
struct TYPE_3__ {int max_cpu_num; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 size_t FUNC_1 (int) ;
 int FUNC_2 (size_t,int ) ;
 int FUNC_3 (int,size_t,int ) ;
 int FUNC_4 (size_t,int ) ;
 TYPE_2__* VAR_1 ;
 int FUNC_5 (int,char*,char*) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (char*,char*) ;
 int FUNC_8 (int *,char*,unsigned long*,char*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (char*,char*,int) ;
 int FUNC_11 (char*,char*,int) ;
 TYPE_1__ VAR_2 ;

int FUNC_12(struct cpu_topology *VAR_3)
{
 char VAR_4[80], VAR_5;
 FILE *VAR_6;
 unsigned long VAR_7;
 int VAR_8, VAR_9, VAR_10;
 int VAR_11 = VAR_3->logical_cpu_id;
 int VAR_12 = VAR_2.max_cpu_num + 1;
 size_t VAR_13;
 int VAR_14 = 0;

 VAR_3->put_ids = FUNC_0((VAR_2.max_cpu_num + 1));
 if (VAR_3->thread_id < 0)
  VAR_3->thread_id = VAR_14++;
 if (!VAR_3->put_ids)
  return -1;

 VAR_13 = FUNC_1((VAR_2.max_cpu_num + 1));
 FUNC_4(VAR_13, VAR_3->put_ids);

 FUNC_10(VAR_4,
  "/sys/devices/system/cpu/cpu%d/topology/thread_siblings", VAR_11);
 VAR_6 = FUNC_7(VAR_4, "r");
 do {
  VAR_12 -= VAR_0;
  if (FUNC_8(VAR_6, "%lx%c", &VAR_7, &VAR_5) != 2)
   FUNC_5(1, "%s: failed to parse file", VAR_4);
  for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
   if ((VAR_7 >> VAR_9) & 0x1) {
    VAR_8 = VAR_9 + VAR_12;
    VAR_10 = FUNC_9(VAR_8);
    if (VAR_10 == VAR_3->physical_core_id) {
     FUNC_3(VAR_8, VAR_13, VAR_3->put_ids);
     if ((VAR_8 != VAR_11) &&
         (VAR_1[VAR_8].thread_id < 0))
      VAR_1[VAR_8].thread_id =
            VAR_14++;
    }
   }
  }
 } while (!FUNC_11(&VAR_5, ",", 1));
 FUNC_6(VAR_6);

 return FUNC_2(VAR_13, VAR_3->put_ids);
}
