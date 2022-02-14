
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff_head {int dummy; } ;
struct sctp_ulpq {int dummy; } ;
struct sctp_ulpevent {int msg_flags; void* fsn; int ppid; void* mid; } ;
struct TYPE_4__ {TYPE_1__* idata_hdr; } ;
struct sctp_chunk {TYPE_2__ subh; int asoc; } ;
typedef int gfp_t ;
struct TYPE_3__ {int fsn; int ppid; int mid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff_head*,int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct sctp_ulpq*,struct sk_buff_head*) ;
 int FUNC_3 (struct sctp_ulpevent*) ;
 struct sctp_ulpevent* FUNC_4 (struct sctp_ulpq*,struct sctp_ulpevent*) ;
 struct sctp_ulpevent* FUNC_5 (struct sctp_ulpq*,struct sctp_ulpevent*) ;
 struct sctp_ulpevent* FUNC_6 (struct sctp_ulpq*,struct sctp_ulpevent*) ;
 struct sctp_ulpevent* FUNC_7 (int ,struct sctp_chunk*,int ) ;
 int FUNC_8 (struct sk_buff_head*) ;

__attribute__((used)) static int FUNC_9(struct sctp_ulpq *VAR_4,
          struct sctp_chunk *VAR_5, gfp_t VAR_6)
{
 struct sctp_ulpevent *VAR_7;
 struct sk_buff_head VAR_8;
 int VAR_9 = 0;

 VAR_7 = FUNC_7(VAR_5->asoc, VAR_5, VAR_6);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->mid = FUNC_1(VAR_5->subh.idata_hdr->mid);
 if (VAR_7->msg_flags & VAR_2)
  VAR_7->ppid = VAR_5->subh.idata_hdr->ppid;
 else
  VAR_7->fsn = FUNC_1(VAR_5->subh.idata_hdr->fsn);

 if (!(VAR_7->msg_flags & VAR_3)) {
  VAR_7 = FUNC_5(VAR_4, VAR_7);
  if (VAR_7) {
   FUNC_8(&VAR_8);
   FUNC_0(&VAR_8, FUNC_3(VAR_7));

   if (VAR_7->msg_flags & VAR_1)
    VAR_7 = FUNC_4(VAR_4, VAR_7);
  }
 } else {
  VAR_7 = FUNC_6(VAR_4, VAR_7);
  if (VAR_7) {
   FUNC_8(&VAR_8);
   FUNC_0(&VAR_8, FUNC_3(VAR_7));
  }
 }

 if (VAR_7) {
  VAR_9 = (VAR_7->msg_flags & VAR_1) ? 1 : 0;
  FUNC_2(VAR_4, &VAR_8);
 }

 return VAR_9;
}
