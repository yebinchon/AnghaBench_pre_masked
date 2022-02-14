
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_stream_out_ext {int rr_list; } ;
struct sctp_stream {struct sctp_stream_out_ext* rr_next; int rr_list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct sctp_stream *VAR_0,
    struct sctp_stream_out_ext *VAR_1)
{
 if (!FUNC_1(&VAR_1->rr_list))

  return;


 FUNC_0(&VAR_1->rr_list, &VAR_0->rr_list);

 if (!VAR_0->rr_next)
  VAR_0->rr_next = VAR_1;
}
