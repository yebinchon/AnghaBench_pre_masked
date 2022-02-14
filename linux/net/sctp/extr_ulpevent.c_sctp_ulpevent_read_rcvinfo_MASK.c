
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_ulpevent {TYPE_1__* asoc; int cumtsn; int tsn; int flags; int ppid; int ssn; int stream; } ;
struct sctp_rcvinfo {int rcv_context; int rcv_assoc_id; int rcv_cumtsn; int rcv_tsn; int rcv_flags; int rcv_ppid; int rcv_ssn; int rcv_sid; } ;
struct msghdr {int dummy; } ;
typedef int rinfo ;
struct TYPE_2__ {int default_rcv_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sctp_rcvinfo*,int ,int) ;
 int FUNC_1 (struct msghdr*,int ,int ,int,struct sctp_rcvinfo*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (struct sctp_ulpevent const*) ;

void FUNC_4(const struct sctp_ulpevent *VAR_2,
    struct msghdr *VAR_3)
{
 struct sctp_rcvinfo VAR_4;

 if (FUNC_3(VAR_2))
  return;

 FUNC_0(&VAR_4, 0, sizeof(struct sctp_rcvinfo));
 VAR_4.rcv_sid = VAR_2->stream;
 VAR_4.rcv_ssn = VAR_2->ssn;
 VAR_4.rcv_ppid = VAR_2->ppid;
 VAR_4.rcv_flags = VAR_2->flags;
 VAR_4.rcv_tsn = VAR_2->tsn;
 VAR_4.rcv_cumtsn = VAR_2->cumtsn;
 VAR_4.rcv_assoc_id = FUNC_2(VAR_2->asoc);
 VAR_4.rcv_context = VAR_2->asoc->default_rcv_context;

 FUNC_1(VAR_3, VAR_0, VAR_1,
   sizeof(VAR_4), &VAR_4);
}
