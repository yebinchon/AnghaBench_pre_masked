
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct sctp_ulpevent {int dummy; } ;
struct TYPE_2__ {int adaptation_ind; } ;
struct sctp_association {TYPE_1__ peer; } ;
struct sctp_adaptation_event {int sai_length; int sai_assoc_id; int sai_adaptation_ind; scalar_t__ sai_flags; int sai_type; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sctp_association const*) ;
 struct sk_buff* FUNC_1 (struct sctp_ulpevent*) ;
 struct sctp_ulpevent* FUNC_2 (int,int ,int ) ;
 int FUNC_3 (struct sctp_ulpevent*,struct sctp_association const*) ;
 struct sctp_adaptation_event* FUNC_4 (struct sk_buff*,int) ;

struct sctp_ulpevent *FUNC_5(
 const struct sctp_association *VAR_2, gfp_t VAR_3)
{
 struct sctp_ulpevent *VAR_4;
 struct sctp_adaptation_event *VAR_5;
 struct sk_buff *VAR_6;

 VAR_4 = FUNC_2(sizeof(struct sctp_adaptation_event),
      VAR_0, VAR_3);
 if (!VAR_4)
  goto fail;

 VAR_6 = FUNC_1(VAR_4);
 VAR_5 = FUNC_4(VAR_6, sizeof(struct sctp_adaptation_event));

 VAR_5->sai_type = VAR_1;
 VAR_5->sai_flags = 0;
 VAR_5->sai_length = sizeof(struct sctp_adaptation_event);
 VAR_5->sai_adaptation_ind = VAR_2->peer.adaptation_ind;
 FUNC_3(VAR_4, VAR_2);
 VAR_5->sai_assoc_id = FUNC_0(VAR_2);

 return VAR_4;

fail:
 return ((void*)0);
}
