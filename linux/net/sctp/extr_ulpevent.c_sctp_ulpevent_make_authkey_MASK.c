
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct sctp_ulpevent {int dummy; } ;
struct sctp_authkey_event {int auth_length; int auth_assoc_id; int auth_indication; scalar_t__ auth_altkeynumber; int auth_keynumber; scalar_t__ auth_flags; int auth_type; } ;
struct sctp_association {int dummy; } ;
typedef int gfp_t ;
typedef int __u32 ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sctp_association const*) ;
 struct sk_buff* FUNC_1 (struct sctp_ulpevent*) ;
 struct sctp_ulpevent* FUNC_2 (int,int ,int ) ;
 int FUNC_3 (struct sctp_ulpevent*,struct sctp_association const*) ;
 struct sctp_authkey_event* FUNC_4 (struct sk_buff*,int) ;

struct sctp_ulpevent *FUNC_5(
 const struct sctp_association *VAR_2, __u16 VAR_3,
 __u32 VAR_4, gfp_t VAR_5)
{
 struct sctp_ulpevent *VAR_6;
 struct sctp_authkey_event *VAR_7;
 struct sk_buff *VAR_8;

 VAR_6 = FUNC_2(sizeof(struct sctp_authkey_event),
      VAR_0, VAR_5);
 if (!VAR_6)
  goto fail;

 VAR_8 = FUNC_1(VAR_6);
 VAR_7 = FUNC_4(VAR_8, sizeof(struct sctp_authkey_event));

 VAR_7->auth_type = VAR_1;
 VAR_7->auth_flags = 0;
 VAR_7->auth_length = sizeof(struct sctp_authkey_event);

 VAR_7->auth_keynumber = VAR_3;
 VAR_7->auth_altkeynumber = 0;
 VAR_7->auth_indication = VAR_4;




 FUNC_3(VAR_6, VAR_2);
 VAR_7->auth_assoc_id = FUNC_0(VAR_2);

 return VAR_6;
fail:
 return ((void*)0);
}
