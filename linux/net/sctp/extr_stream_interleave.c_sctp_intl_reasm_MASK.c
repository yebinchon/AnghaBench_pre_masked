
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_ulpq {TYPE_1__* asoc; } ;
struct sctp_ulpevent {int msg_flags; scalar_t__ mid; scalar_t__ fsn; int stream; } ;
struct sctp_stream_in {scalar_t__ mid; scalar_t__ fsn; scalar_t__ pd_mode; } ;
struct TYPE_2__ {int stream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sctp_ulpevent* FUNC_0 (struct sctp_ulpq*,struct sctp_ulpevent*) ;
 struct sctp_ulpevent* FUNC_1 (struct sctp_ulpq*,struct sctp_ulpevent*) ;
 int FUNC_2 (struct sctp_ulpq*,struct sctp_ulpevent*) ;
 struct sctp_stream_in* FUNC_3 (int *,int ) ;

__attribute__((used)) static struct sctp_ulpevent *FUNC_4(struct sctp_ulpq *VAR_3,
          struct sctp_ulpevent *VAR_4)
{
 struct sctp_ulpevent *VAR_5 = ((void*)0);
 struct sctp_stream_in *VAR_6;

 if (VAR_2 == (VAR_4->msg_flags & VAR_1)) {
  VAR_4->msg_flags |= VAR_0;
  return VAR_4;
 }

 FUNC_2(VAR_3, VAR_4);

 VAR_6 = FUNC_3(&VAR_3->asoc->stream, VAR_4->stream);
 if (VAR_6->pd_mode && VAR_4->mid == VAR_6->mid &&
     VAR_4->fsn == VAR_6->fsn)
  VAR_5 = FUNC_0(VAR_3, VAR_4);

 if (!VAR_5)
  VAR_5 = FUNC_1(VAR_3, VAR_4);

 return VAR_5;
}
