
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s390_cpumsf_queue {unsigned int queue_nr; int cpu; int * logfile; struct s390_cpumsf* sf; } ;
struct s390_cpumsf {int use_logfile; scalar_t__ logdir; } ;


 int FUNC_0 (char**,char*,unsigned int,...) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;
 struct s390_cpumsf_queue* FUNC_4 (int) ;

__attribute__((used)) static struct s390_cpumsf_queue *
FUNC_5(struct s390_cpumsf *VAR_0, unsigned int VAR_1)
{
 struct s390_cpumsf_queue *VAR_2;

 VAR_2 = FUNC_4(sizeof(struct s390_cpumsf_queue));
 if (VAR_2 == ((void*)0))
  return ((void*)0);

 VAR_2->sf = VAR_0;
 VAR_2->queue_nr = VAR_1;
 VAR_2->cpu = -1;
 if (VAR_0->use_logfile) {
  char *VAR_3;
  int VAR_4;

  VAR_4 = (VAR_0->logdir)
   ? FUNC_0(&VAR_3, "%u/aux.smp.%02x",
     VAR_0->logdir, VAR_1)
   : FUNC_0(&VAR_3, "aux.smp.%02x", VAR_1);
  if (VAR_4 > 0)
   VAR_2->logfile = FUNC_1(VAR_3, "w");
  if (VAR_2->logfile == ((void*)0)) {
   FUNC_3("Failed to open auxiliary log file %s,"
          "continue...\n", VAR_3);
   VAR_0->use_logfile = 0;
  }
  FUNC_2(VAR_3);
 }
 return VAR_2;
}
