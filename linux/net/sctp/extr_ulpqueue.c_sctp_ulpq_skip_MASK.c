
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_ulpq {TYPE_1__* asoc; } ;
struct sctp_stream {int dummy; } ;
typedef int __u16 ;
struct TYPE_2__ {struct sctp_stream stream; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct sctp_stream*,int ,int ) ;
 int FUNC_2 (struct sctp_stream*,int ,int ,int ) ;
 int FUNC_3 (struct sctp_ulpq*,int ) ;

void FUNC_4(struct sctp_ulpq *VAR_1, __u16 VAR_2, __u16 VAR_3)
{
 struct sctp_stream *VAR_4;


 VAR_4 = &VAR_1->asoc->stream;


 if (FUNC_0(VAR_3, FUNC_1(VAR_4, VAR_0, VAR_2)))
  return;


 FUNC_2(VAR_4, VAR_0, VAR_2, VAR_3);




 FUNC_3(VAR_1, VAR_2);
}
