
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int threads_timedout; int threads_woken; int sockets_queued; int packets; } ;
struct svc_pool {TYPE_1__ sp_stats; int sp_id; } ;
struct seq_file {int dummy; } ;


 void* VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct seq_file*,char*,int ,unsigned long,int ,unsigned long,unsigned long) ;
 int FUNC_2 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_1, void *VAR_2)
{
 struct svc_pool *VAR_3 = VAR_2;

 if (VAR_2 == VAR_0) {
  FUNC_2(VAR_1, "# pool packets-arrived sockets-enqueued threads-woken threads-timedout\n");
  return 0;
 }

 FUNC_1(VAR_1, "%u %lu %lu %lu %lu\n",
  VAR_3->sp_id,
  (unsigned long)FUNC_0(&VAR_3->sp_stats.packets),
  VAR_3->sp_stats.sockets_queued,
  (unsigned long)FUNC_0(&VAR_3->sp_stats.threads_woken),
  (unsigned long)FUNC_0(&VAR_3->sp_stats.threads_timedout));

 return 0;
}
