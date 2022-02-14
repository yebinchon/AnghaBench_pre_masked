
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union nf_inet_addr {int dummy; } nf_inet_addr ;
struct sk_buff {int dummy; } ;
struct sdp_media_type {int class; scalar_t__ len; } ;
struct nf_nat_sip_hooks {int (* sdp_addr ) (struct sk_buff*,unsigned int,unsigned int,char const**,unsigned int*,unsigned int,int ,int ,union nf_inet_addr*) ;int (* sdp_session ) (struct sk_buff*,unsigned int,unsigned int,char const**,unsigned int*,unsigned int,union nf_inet_addr*) ;} ;
struct nf_conn {int status; } ;
typedef int rtp_addr ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct nf_conn*,char const*,unsigned int,unsigned int,int ,int ,unsigned int*,unsigned int*) ;
 scalar_t__ FUNC_2 (struct nf_conn*,char const*,unsigned int,unsigned int,int ,int ,unsigned int*,unsigned int*,union nf_inet_addr*) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (union nf_inet_addr*,union nf_inet_addr*,int) ;
 struct nf_conn* FUNC_5 (struct sk_buff*,int*) ;
 int FUNC_6 (struct sk_buff*,struct nf_conn*,char*,...) ;
 int VAR_7 ;
 struct nf_nat_sip_hooks* FUNC_7 (int ) ;
 struct sdp_media_type* FUNC_8 (char const*,unsigned int,unsigned int) ;
 int VAR_8 ;
 int FUNC_9 (struct sk_buff*,unsigned int,unsigned int,char const**,unsigned int*,union nf_inet_addr*,int ,int ,unsigned int,unsigned int) ;
 unsigned int FUNC_10 (char const*,int *,int) ;
 int FUNC_11 (struct sk_buff*,unsigned int,unsigned int,char const**,unsigned int*,unsigned int,int ,int ,union nf_inet_addr*) ;
 int FUNC_12 (struct sk_buff*,unsigned int,unsigned int,char const**,unsigned int*,unsigned int,union nf_inet_addr*) ;

__attribute__((used)) static int FUNC_13(struct sk_buff *VAR_9, unsigned int VAR_10,
         unsigned int VAR_11,
         const char **VAR_12, unsigned int *VAR_13,
         unsigned int VAR_14)
{
 enum ip_conntrack_info VAR_15;
 struct nf_conn *VAR_16 = FUNC_5(VAR_9, &VAR_15);
 unsigned int VAR_17, VAR_18;
 unsigned int VAR_19, VAR_20;
 unsigned int VAR_21;
 unsigned int VAR_22, VAR_23;
 unsigned int VAR_24;
 union nf_inet_addr VAR_25, VAR_26, VAR_27;
 const struct nf_nat_sip_hooks *VAR_28;
 unsigned int VAR_29;
 const struct sdp_media_type *VAR_30;
 int VAR_31 = VAR_1;

 VAR_28 = FUNC_7(VAR_7);


 if (FUNC_1(VAR_16, *VAR_12, 0, *VAR_13,
      VAR_6, VAR_5,
      &VAR_17, &VAR_18) <= 0)
  return VAR_1;
 VAR_21 = VAR_17;




 VAR_22 = 0;
 if (FUNC_2(VAR_16, *VAR_12, VAR_21, *VAR_13,
      VAR_3, VAR_4,
      &VAR_17, &VAR_18, &VAR_25) > 0)
  VAR_22 = VAR_18;

 VAR_19 = VAR_21;
 for (VAR_24 = 0; VAR_24 < FUNC_0(VAR_8); ) {
  if (FUNC_1(VAR_16, *VAR_12, VAR_19, *VAR_13,
       VAR_4, VAR_5,
       &VAR_19, &VAR_20) <= 0)
   break;



  VAR_30 = FUNC_8(*VAR_12, VAR_19, VAR_20);
  if (!VAR_30) {
   VAR_19 += VAR_20;
   continue;
  }
  VAR_19 += VAR_30->len;
  VAR_20 -= VAR_30->len;

  VAR_29 = FUNC_10(*VAR_12 + VAR_19, ((void*)0), 10);
  if (VAR_29 == 0)
   continue;
  if (VAR_29 < 1024 || VAR_29 > 65535) {
   FUNC_6(VAR_9, VAR_16, "wrong port %u", VAR_29);
   return VAR_2;
  }


  VAR_23 = 0;
  if (FUNC_2(VAR_16, *VAR_12, VAR_19, *VAR_13,
       VAR_3, VAR_4,
       &VAR_17, &VAR_18, &VAR_26) > 0) {
   VAR_23 = VAR_18;
   FUNC_4(&VAR_27, &VAR_26, sizeof(VAR_27));
  } else if (VAR_22)
   FUNC_4(&VAR_27, &VAR_25, sizeof(VAR_27));
  else {
   FUNC_6(VAR_9, VAR_16, "cannot parse SDP message");
   return VAR_2;
  }

  VAR_31 = FUNC_9(VAR_9, VAR_10, VAR_11,
         VAR_12, VAR_13,
         &VAR_27, FUNC_3(VAR_29), VAR_30->class,
         VAR_19, VAR_20);
  if (VAR_31 != VAR_1) {
   FUNC_6(VAR_9, VAR_16,
      "cannot add expectation for voice");
   return VAR_31;
  }


  if (VAR_23 && VAR_28 && VAR_16->status & VAR_0) {
   VAR_31 = VAR_28->sdp_addr(VAR_9, VAR_10, VAR_11,
           VAR_12, VAR_13, VAR_19,
           VAR_3,
           VAR_4,
           &VAR_27);
   if (VAR_31 != VAR_1) {
    FUNC_6(VAR_9, VAR_16, "cannot mangle SDP");
    return VAR_31;
   }
  }
  VAR_24++;
 }


 VAR_28 = FUNC_7(VAR_7);
 if (VAR_28 && VAR_16->status & VAR_0)
  VAR_31 = VAR_28->sdp_session(VAR_9, VAR_10, VAR_11,
      VAR_12, VAR_13, VAR_21,
      &VAR_27);

 return VAR_31;
}
