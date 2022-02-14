
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sr6_tlv_hmac {int hmac; int hmackeyid; } ;
struct seg6_hmac_info {int dummy; } ;
struct net {int dummy; } ;
struct ipv6_sr_hdr {int dummy; } ;
struct in6_addr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct sr6_tlv_hmac* FUNC_4 (struct ipv6_sr_hdr*) ;
 int FUNC_5 (struct seg6_hmac_info*,struct ipv6_sr_hdr*,struct in6_addr*,int ) ;
 struct seg6_hmac_info* FUNC_6 (struct net*,int ) ;

int FUNC_7(struct net *VAR_3, struct in6_addr *VAR_4,
     struct ipv6_sr_hdr *VAR_5)
{
 struct seg6_hmac_info *VAR_6;
 struct sr6_tlv_hmac *VAR_7;
 int VAR_8 = -VAR_1;

 VAR_7 = FUNC_4(VAR_5);
 if (!VAR_7)
  return -VAR_0;

 FUNC_2();

 VAR_6 = FUNC_6(VAR_3, FUNC_0(VAR_7->hmackeyid));
 if (!VAR_6)
  goto out;

 FUNC_1(VAR_7->hmac, 0, VAR_2);
 VAR_8 = FUNC_5(VAR_6, VAR_5, VAR_4, VAR_7->hmac);

out:
 FUNC_3();
 return VAR_8;
}
