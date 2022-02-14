
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s390_cpumsf_queue {int * logfile_ctr; } ;
struct TYPE_2__ {size_t nr_queues; struct auxtrace_queue* queue_array; } ;
struct s390_cpumsf {scalar_t__ logdir; TYPE_1__ queues; int use_logfile; } ;
struct perf_sample {size_t cpu; scalar_t__ raw_size; int raw_data; } ;
struct auxtrace_queue {struct s390_cpumsf_queue* priv; } ;


 int FUNC_0 (char**,char*,size_t,...) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 size_t FUNC_3 (int ,scalar_t__,int,int *) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static int FUNC_5(struct s390_cpumsf *VAR_0,
          struct perf_sample *VAR_1)
{
 struct s390_cpumsf_queue *VAR_2;
 struct auxtrace_queue *VAR_3;
 int VAR_4 = 0;

 if (!VAR_0->use_logfile || VAR_0->queues.nr_queues <= VAR_1->cpu)
  return VAR_4;

 VAR_3 = &VAR_0->queues.queue_array[VAR_1->cpu];
 VAR_2 = VAR_3->priv;
 if (!VAR_2)
  return VAR_4;

 if (!VAR_2->logfile_ctr) {
  char *VAR_5;

  VAR_4 = (VAR_0->logdir)
   ? FUNC_0(&VAR_5, "%zu/aux.ctr.%02zx",
     VAR_0->logdir, VAR_1->cpu)
   : FUNC_0(&VAR_5, "aux.ctr.%02zx", VAR_1->cpu);
  if (VAR_4 > 0)
   VAR_2->logfile_ctr = FUNC_1(VAR_5, "w");
  if (VAR_2->logfile_ctr == ((void*)0)) {
   FUNC_4("Failed to open counter set log file %s, "
          "continue...\n", VAR_5);
   VAR_4 = 1;
  }
  FUNC_2(VAR_5);
 }

 if (VAR_2->logfile_ctr) {

  size_t VAR_6 = FUNC_3(VAR_1->raw_data, VAR_1->raw_size - 4, 1,
      VAR_2->logfile_ctr);
  if (VAR_6 != 1) {
   FUNC_4("Failed to write counter set data\n");
   VAR_4 = 1;
  }
 }
 return VAR_4;
}
