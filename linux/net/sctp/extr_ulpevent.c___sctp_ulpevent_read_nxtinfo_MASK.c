
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct sctp_ulpevent {int asoc; int flags; int ppid; int stream; } ;
struct sctp_nxtinfo {int nxt_assoc_id; int nxt_length; int nxt_flags; int nxt_ppid; int nxt_sid; } ;
struct msghdr {int dummy; } ;
typedef int nxtinfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sctp_nxtinfo*,int ,int) ;
 int FUNC_1 (struct msghdr*,int ,int ,int,struct sctp_nxtinfo*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct sctp_ulpevent const*) ;

__attribute__((used)) static void FUNC_4(const struct sctp_ulpevent *VAR_3,
      struct msghdr *VAR_4,
      const struct sk_buff *VAR_5)
{
 struct sctp_nxtinfo VAR_6;

 FUNC_0(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.nxt_sid = VAR_3->stream;
 VAR_6.nxt_ppid = VAR_3->ppid;
 VAR_6.nxt_flags = VAR_3->flags;
 if (FUNC_3(VAR_3))
  VAR_6.nxt_flags |= VAR_1;
 VAR_6.nxt_length = VAR_5->len;
 VAR_6.nxt_assoc_id = FUNC_2(VAR_3->asoc);

 FUNC_1(VAR_4, VAR_0, VAR_2,
   sizeof(VAR_6), &VAR_6);
}
