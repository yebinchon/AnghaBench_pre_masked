
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct sctp_ulpevent {int dummy; } ;
struct sctp_pdapi_event {int pdapi_length; int pdapi_assoc_id; void* pdapi_indication; void* pdapi_seq; void* pdapi_stream; void* pdapi_flags; int pdapi_type; } ;
struct sctp_association {int dummy; } ;
typedef int gfp_t ;
typedef void* __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sctp_association const*) ;
 struct sk_buff* FUNC_1 (struct sctp_ulpevent*) ;
 struct sctp_ulpevent* FUNC_2 (int,int ,int ) ;
 int FUNC_3 (struct sctp_ulpevent*,struct sctp_association const*) ;
 struct sctp_pdapi_event* FUNC_4 (struct sk_buff*,int) ;

struct sctp_ulpevent *FUNC_5(
     const struct sctp_association *VAR_2,
     __u32 VAR_3, __u32 VAR_4, __u32 VAR_5,
     __u32 VAR_6, gfp_t VAR_7)
{
 struct sctp_ulpevent *VAR_8;
 struct sctp_pdapi_event *VAR_9;
 struct sk_buff *VAR_10;

 VAR_8 = FUNC_2(sizeof(struct sctp_pdapi_event),
      VAR_0, VAR_7);
 if (!VAR_8)
  goto fail;

 VAR_10 = FUNC_1(VAR_8);
 VAR_9 = FUNC_4(VAR_10, sizeof(struct sctp_pdapi_event));







 VAR_9->pdapi_type = VAR_1;
 VAR_9->pdapi_flags = VAR_6;
 VAR_9->pdapi_stream = VAR_4;
 VAR_9->pdapi_seq = VAR_5;







 VAR_9->pdapi_length = sizeof(struct sctp_pdapi_event);





 VAR_9->pdapi_indication = VAR_3;





 FUNC_3(VAR_8, VAR_2);
 VAR_9->pdapi_assoc_id = FUNC_0(VAR_2);

 return VAR_8;
fail:
 return ((void*)0);
}
