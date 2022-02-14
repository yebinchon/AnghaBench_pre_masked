
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union sctp_subtype {scalar_t__ chunk; } ;
struct sctp_ulpevent {int dummy; } ;
struct sctp_cmd_seq {int dummy; } ;
struct sctp_chunk {int dummy; } ;
struct TYPE_6__ {unsigned int error; } ;
struct TYPE_5__ {TYPE_1__* si; } ;
struct sctp_association {scalar_t__ overall_error_count; scalar_t__ max_retrans; TYPE_3__ outqueue; int ulpq; TYPE_2__ stream; } ;
typedef enum sctp_event_type { ____Placeholder_sctp_event_type } sctp_event_type ;
typedef int __u16 ;
struct TYPE_4__ {int (* abort_pd ) (int *,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct sctp_chunk*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_8 ;
 int FUNC_3 (struct sctp_ulpevent*) ;
 int FUNC_4 (struct sctp_cmd_seq*,int ,int ) ;
 struct sctp_chunk* FUNC_5 (struct sctp_association*,struct sctp_chunk*) ;
 struct sctp_ulpevent* FUNC_6 (struct sctp_association*,int ,int ,int ,int ,int ,struct sctp_chunk*,int ) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static void FUNC_8(struct sctp_cmd_seq *VAR_9,
      struct sctp_association *VAR_10,
      enum sctp_event_type VAR_11,
      union sctp_subtype VAR_12,
      struct sctp_chunk *VAR_13,
      unsigned int VAR_14)
{
 struct sctp_ulpevent *VAR_15;
 struct sctp_chunk *VAR_16;


 VAR_10->stream.si->abort_pd(&VAR_10->ulpq, VAR_0);

 if (VAR_11 == VAR_7 && VAR_12.chunk == VAR_1)
  VAR_15 = FUNC_6(VAR_10, 0, VAR_6,
      (__u16)VAR_14, 0, 0, VAR_13,
      VAR_0);
 else
  VAR_15 = FUNC_6(VAR_10, 0, VAR_6,
      (__u16)VAR_14, 0, 0, ((void*)0),
      VAR_0);
 if (VAR_15)
  FUNC_4(VAR_9, VAR_3,
    FUNC_3(VAR_15));

 if (VAR_10->overall_error_count >= VAR_10->max_retrans) {
  VAR_16 = FUNC_5(VAR_10, VAR_13);
  if (VAR_16)
   FUNC_4(VAR_9, VAR_5,
     FUNC_0(VAR_16));
 }

 FUNC_4(VAR_9, VAR_4,
   FUNC_2(VAR_8));


 VAR_10->outqueue.error = VAR_14;
 FUNC_4(VAR_9, VAR_2, FUNC_1());
}
