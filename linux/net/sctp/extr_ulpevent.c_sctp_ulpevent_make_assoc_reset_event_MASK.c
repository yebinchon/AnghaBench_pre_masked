
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct sctp_ulpevent {int dummy; } ;
struct sctp_association {int dummy; } ;
struct sctp_assoc_reset_event {int assocreset_length; void* assocreset_remote_tsn; void* assocreset_local_tsn; int assocreset_assoc_id; int assocreset_flags; int assocreset_type; } ;
typedef int gfp_t ;
typedef void* __u32 ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sctp_association const*) ;
 struct sk_buff* FUNC_1 (struct sctp_ulpevent*) ;
 struct sctp_ulpevent* FUNC_2 (int,int ,int ) ;
 int FUNC_3 (struct sctp_ulpevent*,struct sctp_association const*) ;
 struct sctp_assoc_reset_event* FUNC_4 (struct sk_buff*,int) ;

struct sctp_ulpevent *FUNC_5(
 const struct sctp_association *VAR_2, __u16 VAR_3, __u32 VAR_4,
 __u32 VAR_5, gfp_t VAR_6)
{
 struct sctp_assoc_reset_event *VAR_7;
 struct sctp_ulpevent *VAR_8;
 struct sk_buff *VAR_9;

 VAR_8 = FUNC_2(sizeof(struct sctp_assoc_reset_event),
      VAR_0, VAR_6);
 if (!VAR_8)
  return ((void*)0);

 VAR_9 = FUNC_1(VAR_8);
 VAR_7 = FUNC_4(VAR_9, sizeof(struct sctp_assoc_reset_event));

 VAR_7->assocreset_type = VAR_1;
 VAR_7->assocreset_flags = VAR_3;
 VAR_7->assocreset_length = sizeof(struct sctp_assoc_reset_event);
 FUNC_3(VAR_8, VAR_2);
 VAR_7->assocreset_assoc_id = FUNC_0(VAR_2);
 VAR_7->assocreset_local_tsn = VAR_4;
 VAR_7->assocreset_remote_tsn = VAR_5;

 return VAR_8;
}
