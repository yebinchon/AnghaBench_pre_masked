
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct sctp_ulpevent {int dummy; } ;
struct sctp_stream_reset_event {int strreset_flags; int strreset_length; int * strreset_stream_list; int strreset_assoc_id; int strreset_type; } ;
struct sctp_association {int dummy; } ;
typedef int gfp_t ;
typedef int __u16 ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sctp_association const*) ;
 struct sk_buff* FUNC_2 (struct sctp_ulpevent*) ;
 struct sctp_ulpevent* FUNC_3 (int,int ,int ) ;
 int FUNC_4 (struct sctp_ulpevent*,struct sctp_association const*) ;
 struct sctp_stream_reset_event* FUNC_5 (struct sk_buff*,int) ;

struct sctp_ulpevent *FUNC_6(
 const struct sctp_association *VAR_2, __u16 VAR_3, __u16 VAR_4,
 __be16 *VAR_5, gfp_t VAR_6)
{
 struct sctp_stream_reset_event *VAR_7;
 struct sctp_ulpevent *VAR_8;
 struct sk_buff *VAR_9;
 int VAR_10, VAR_11;

 VAR_10 = sizeof(struct sctp_stream_reset_event) + 2 * VAR_4;
 VAR_8 = FUNC_3(VAR_10, VAR_0, VAR_6);
 if (!VAR_8)
  return ((void*)0);

 VAR_9 = FUNC_2(VAR_8);
 VAR_7 = FUNC_5(VAR_9, VAR_10);

 VAR_7->strreset_type = VAR_1;
 VAR_7->strreset_flags = VAR_3;
 VAR_7->strreset_length = VAR_10;
 FUNC_4(VAR_8, VAR_2);
 VAR_7->strreset_assoc_id = FUNC_1(VAR_2);

 for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++)
  VAR_7->strreset_stream_list[VAR_11] = FUNC_0(VAR_5[VAR_11]);

 return VAR_8;
}
