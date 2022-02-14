
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_stream_out_ext {int rr_list; } ;
struct sctp_stream {struct sctp_stream_out_ext* rr_next; int rr_list; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct sctp_stream*) ;

__attribute__((used)) static void FUNC_3(struct sctp_stream *VAR_0,
      struct sctp_stream_out_ext *VAR_1)
{
 if (VAR_0->rr_next == VAR_1)

  FUNC_2(VAR_0);

 FUNC_0(&VAR_1->rr_list);


 if (FUNC_1(&VAR_0->rr_list))
  VAR_0->rr_next = ((void*)0);
}
