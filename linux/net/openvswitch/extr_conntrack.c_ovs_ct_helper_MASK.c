
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct nf_conntrack_helper {int (* help ) (struct sk_buff*,unsigned int,struct nf_conn*,int) ;} ;
struct nf_conn_help {int helper; } ;
struct nf_conn {int status; } ;
struct ipv6hdr {int dummy; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
typedef int __be16 ;
struct TYPE_2__ {int nexthdr; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int) ;
 unsigned int FUNC_2 (struct sk_buff*) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,int,int *,int*) ;
 struct nf_conn* FUNC_5 (struct sk_buff*,int*) ;
 int FUNC_6 (struct sk_buff*,struct nf_conn*,int,unsigned int) ;
 struct nf_conn_help* FUNC_7 (struct nf_conn*) ;
 int FUNC_8 (char*) ;
 struct nf_conntrack_helper* FUNC_9 (int ) ;
 int FUNC_10 (struct sk_buff*,unsigned int,struct nf_conn*,int) ;
 scalar_t__ FUNC_11 (int ,int *) ;

__attribute__((used)) static int FUNC_12(struct sk_buff *VAR_4, u16 VAR_5)
{
 const struct nf_conntrack_helper *VAR_6;
 const struct nf_conn_help *VAR_7;
 enum ip_conntrack_info VAR_8;
 unsigned int VAR_9;
 struct nf_conn *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_5(VAR_4, &VAR_8);
 if (!VAR_10 || VAR_8 == VAR_1)
  return VAR_2;

 VAR_7 = FUNC_7(VAR_10);
 if (!VAR_7)
  return VAR_2;

 VAR_6 = FUNC_9(VAR_7->helper);
 if (!VAR_6)
  return VAR_2;

 switch (VAR_5) {
 case 129:
  VAR_9 = FUNC_2(VAR_4);
  break;
 case 128: {
  u8 VAR_12 = FUNC_3(VAR_4)->nexthdr;
  __be16 VAR_13;
  int VAR_14;

  VAR_14 = FUNC_4(VAR_4, sizeof(struct ipv6hdr), &VAR_12,
           &VAR_13);
  if (VAR_14 < 0 || (VAR_13 & FUNC_1(~0x7)) != 0) {
   FUNC_8("proto header not found\n");
   return VAR_2;
  }
  VAR_9 = VAR_14;
  break;
 }
 default:
  FUNC_0(1, "helper invoked on non-IP family!");
  return VAR_3;
 }

 VAR_11 = VAR_6->help(VAR_4, VAR_9, VAR_10, VAR_8);
 if (VAR_11 != VAR_2)
  return VAR_11;





 if (FUNC_11(VAR_0, &VAR_10->status) &&
     !FUNC_6(VAR_4, VAR_10, VAR_8, VAR_9))
  return VAR_3;
 return VAR_2;
}
