
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_inq {struct sctp_chunk* in_progress; } ;
struct sctp_chunkhdr {int dummy; } ;
struct sctp_chunk {scalar_t__ chunk_end; scalar_t__ pdiscard; scalar_t__ end_of_packet; scalar_t__ singleton; } ;



struct sctp_chunkhdr *FUNC_0(struct sctp_inq *VAR_0)
{
 struct sctp_chunk *VAR_1;
 struct sctp_chunkhdr *VAR_2 = ((void*)0);

 VAR_1 = VAR_0->in_progress;

 if (VAR_1->singleton ||
     VAR_1->end_of_packet ||
     VAR_1->pdiscard)
      return ((void*)0);

 VAR_2 = (struct sctp_chunkhdr *)VAR_1->chunk_end;

 return VAR_2;
}
