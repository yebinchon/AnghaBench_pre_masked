
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff_head {int dummy; } ;
struct sctp_ulpq {int dummy; } ;
struct sctp_ulpevent {int msg_flags; int ppid; int ssn; } ;
struct TYPE_4__ {TYPE_1__* data_hdr; } ;
struct sctp_chunk {TYPE_2__ subh; int asoc; } ;
typedef int gfp_t ;
struct TYPE_3__ {int ppid; int ssn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff_head*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sctp_ulpevent*) ;
 struct sctp_ulpevent* FUNC_3 (int ,struct sctp_chunk*,int ) ;
 struct sctp_ulpevent* FUNC_4 (struct sctp_ulpq*,struct sctp_ulpevent*) ;
 struct sctp_ulpevent* FUNC_5 (struct sctp_ulpq*,struct sctp_ulpevent*) ;
 int FUNC_6 (struct sctp_ulpq*,struct sk_buff_head*) ;
 int FUNC_7 (struct sk_buff_head*) ;

int FUNC_8(struct sctp_ulpq *VAR_2, struct sctp_chunk *VAR_3,
   gfp_t VAR_4)
{
 struct sk_buff_head VAR_5;
 struct sctp_ulpevent *VAR_6;
 int VAR_7 = 0;


 VAR_6 = FUNC_3(VAR_3->asoc, VAR_3, VAR_4);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->ssn = FUNC_1(VAR_3->subh.data_hdr->ssn);
 VAR_6->ppid = VAR_3->subh.data_hdr->ppid;


 VAR_6 = FUNC_5(VAR_2, VAR_6);


 if (VAR_6) {

  FUNC_7(&VAR_5);
  FUNC_0(&VAR_5, FUNC_2(VAR_6));

  if (VAR_6->msg_flags & VAR_1)
   VAR_6 = FUNC_4(VAR_2, VAR_6);
 }




 if (VAR_6) {
  VAR_7 = (VAR_6->msg_flags & VAR_1) ? 1 : 0;
  FUNC_6(VAR_2, &VAR_5);
 }

 return VAR_7;
}
