
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int len; int truesize; } ;
struct sctp_ulpevent {int dummy; } ;
struct sctp_remote_error {int sre_assoc_id; int sre_error; int sre_length; scalar_t__ sre_flags; int sre_type; } ;
struct sctp_errhdr {int length; int cause; } ;
struct sctp_chunk {TYPE_1__* skb; } ;
struct sctp_association {int dummy; } ;
typedef int gfp_t ;
typedef int __u16 ;
typedef int __be16 ;
struct TYPE_3__ {scalar_t__ data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct sctp_remote_error*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sctp_association const*) ;
 struct sctp_ulpevent* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sctp_ulpevent*,int ,int ) ;
 int FUNC_6 (struct sctp_ulpevent*,struct sctp_association const*) ;
 struct sk_buff* FUNC_7 (TYPE_1__*,int,int ,int ) ;
 int FUNC_8 (TYPE_1__*,int) ;
 struct sctp_remote_error* FUNC_9 (struct sk_buff*,int) ;
 int FUNC_10 (struct sk_buff*,int) ;

struct sctp_ulpevent *
FUNC_11(const struct sctp_association *VAR_2,
    struct sctp_chunk *VAR_3, __u16 VAR_4,
    gfp_t VAR_5)
{
 struct sctp_remote_error *VAR_6;
 struct sctp_ulpevent *VAR_7;
 struct sctp_errhdr *VAR_8;
 struct sk_buff *VAR_9;
 __be16 VAR_10;
 int VAR_11;

 VAR_8 = (struct sctp_errhdr *)(VAR_3->skb->data);
 VAR_10 = VAR_8->cause;
 VAR_11 = FUNC_0(FUNC_2(VAR_8->length)) - sizeof(*VAR_8);


 FUNC_8(VAR_3->skb, sizeof(*VAR_8));




 VAR_9 = FUNC_7(VAR_3->skb, sizeof(*VAR_6), 0, VAR_5);


 FUNC_8(VAR_3->skb, VAR_11);
 if (!VAR_9)
  goto fail;


 VAR_7 = FUNC_4(VAR_9);
 FUNC_5(VAR_7, VAR_0, VAR_9->truesize);

 VAR_6 = FUNC_9(VAR_9, sizeof(*VAR_6));


 FUNC_10(VAR_9, sizeof(*VAR_6) + VAR_11);


 FUNC_1(VAR_6, 0, sizeof(*VAR_6));
 VAR_6->sre_type = VAR_1;
 VAR_6->sre_flags = 0;
 VAR_6->sre_length = VAR_9->len;
 VAR_6->sre_error = VAR_10;
 FUNC_6(VAR_7, VAR_2);
 VAR_6->sre_assoc_id = FUNC_3(VAR_2);

 return VAR_7;
fail:
 return ((void*)0);
}
