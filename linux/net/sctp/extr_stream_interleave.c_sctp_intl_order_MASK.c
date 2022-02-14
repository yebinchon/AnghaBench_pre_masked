
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_ulpq {TYPE_1__* asoc; } ;
struct sctp_ulpevent {scalar_t__ mid; int stream; } ;
struct sctp_stream {int dummy; } ;
typedef int __u16 ;
struct TYPE_2__ {struct sctp_stream stream; } ;


 int VAR_0 ;
 int FUNC_0 (struct sctp_ulpq*,struct sctp_ulpevent*) ;
 int FUNC_1 (struct sctp_ulpq*,struct sctp_ulpevent*) ;
 int FUNC_2 (struct sctp_stream*,int ,int ) ;
 scalar_t__ FUNC_3 (struct sctp_stream*,int ,int ) ;

__attribute__((used)) static struct sctp_ulpevent *FUNC_4(struct sctp_ulpq *VAR_1,
          struct sctp_ulpevent *VAR_2)
{
 struct sctp_stream *VAR_3;
 __u16 VAR_4;

 VAR_3 = &VAR_1->asoc->stream;
 VAR_4 = VAR_2->stream;

 if (VAR_2->mid != FUNC_3(VAR_3, VAR_0, VAR_4)) {
  FUNC_1(VAR_1, VAR_2);
  return ((void*)0);
 }

 FUNC_2(VAR_3, VAR_0, VAR_4);

 FUNC_0(VAR_1, VAR_2);

 return VAR_2;
}
