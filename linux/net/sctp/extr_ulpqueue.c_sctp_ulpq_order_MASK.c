
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_ulpq {TYPE_1__* asoc; } ;
struct sctp_ulpevent {int msg_flags; scalar_t__ stream; scalar_t__ ssn; } ;
struct sctp_stream {int dummy; } ;
typedef scalar_t__ __u16 ;
struct TYPE_2__ {struct sctp_stream stream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sctp_stream*,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (struct sctp_stream*,int ,scalar_t__) ;
 int FUNC_2 (struct sctp_ulpq*,struct sctp_ulpevent*) ;
 int FUNC_3 (struct sctp_ulpq*,struct sctp_ulpevent*) ;

__attribute__((used)) static struct sctp_ulpevent *FUNC_4(struct sctp_ulpq *VAR_2,
          struct sctp_ulpevent *VAR_3)
{
 __u16 VAR_4, VAR_5;
 struct sctp_stream *VAR_6;


 if (VAR_3->msg_flags & VAR_0)
  return VAR_3;


 VAR_4 = VAR_3->stream;
 VAR_5 = VAR_3->ssn;
 VAR_6 = &VAR_2->asoc->stream;


 if (VAR_5 != FUNC_1(VAR_6, VAR_1, VAR_4)) {



  FUNC_3(VAR_2, VAR_3);
  return ((void*)0);
 }


 FUNC_0(VAR_6, VAR_1, VAR_4);




 FUNC_2(VAR_2, VAR_3);

 return VAR_3;
}
