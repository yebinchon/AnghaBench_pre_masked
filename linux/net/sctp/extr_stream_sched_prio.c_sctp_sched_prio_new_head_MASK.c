
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_stream_priorities {int prio; int * next; int active; int prio_sched; } ;
struct sctp_stream {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (int *) ;
 struct sctp_stream_priorities* FUNC_1 (int,int ) ;

__attribute__((used)) static struct sctp_stream_priorities *FUNC_2(
   struct sctp_stream *VAR_0, int VAR_1, gfp_t VAR_2)
{
 struct sctp_stream_priorities *VAR_3;

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_2);
 if (!VAR_3)
  return ((void*)0);

 FUNC_0(&VAR_3->prio_sched);
 FUNC_0(&VAR_3->active);
 VAR_3->next = ((void*)0);
 VAR_3->prio = VAR_1;

 return VAR_3;
}
