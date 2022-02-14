
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_stream_priorities {struct sctp_stream_out_ext* next; int prio_sched; int active; } ;
struct sctp_stream_out_ext {int prio_list; struct sctp_stream_priorities* prio_head; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct sctp_stream_priorities*) ;

__attribute__((used)) static bool FUNC_3(struct sctp_stream_out_ext *VAR_0)
{
 bool VAR_1 = 0;

 if (!FUNC_1(&VAR_0->prio_list)) {
  struct sctp_stream_priorities *VAR_2 = VAR_0->prio_head;


  VAR_1 = 1;

  if (VAR_2->next == VAR_0)

   FUNC_2(VAR_2);

  FUNC_0(&VAR_0->prio_list);


  if (FUNC_1(&VAR_2->active)) {
   FUNC_0(&VAR_2->prio_sched);

   VAR_2->next = ((void*)0);
  }
 }

 return VAR_1;
}
