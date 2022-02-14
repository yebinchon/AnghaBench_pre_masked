
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct sctp_ulpevent {int dummy; } ;
struct sctp_sender_dry_event {int sender_dry_length; int sender_dry_assoc_id; scalar_t__ sender_dry_flags; int sender_dry_type; } ;
struct sctp_association {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sctp_association const*) ;
 struct sk_buff* FUNC_1 (struct sctp_ulpevent*) ;
 struct sctp_ulpevent* FUNC_2 (int,int ,int ) ;
 int FUNC_3 (struct sctp_ulpevent*,struct sctp_association const*) ;
 struct sctp_sender_dry_event* FUNC_4 (struct sk_buff*,int) ;

struct sctp_ulpevent *FUNC_5(
 const struct sctp_association *VAR_2, gfp_t VAR_3)
{
 struct sctp_ulpevent *VAR_4;
 struct sctp_sender_dry_event *VAR_5;
 struct sk_buff *VAR_6;

 VAR_4 = FUNC_2(sizeof(struct sctp_sender_dry_event),
      VAR_0, VAR_3);
 if (!VAR_4)
  return ((void*)0);

 VAR_6 = FUNC_1(VAR_4);
 VAR_5 = FUNC_4(VAR_6, sizeof(struct sctp_sender_dry_event));

 VAR_5->sender_dry_type = VAR_1;
 VAR_5->sender_dry_flags = 0;
 VAR_5->sender_dry_length = sizeof(struct sctp_sender_dry_event);
 FUNC_3(VAR_4, VAR_2);
 VAR_5->sender_dry_assoc_id = FUNC_0(VAR_2);

 return VAR_4;
}
