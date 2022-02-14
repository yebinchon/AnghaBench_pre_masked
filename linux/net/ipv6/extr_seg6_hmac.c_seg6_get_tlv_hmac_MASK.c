
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; int len; } ;
struct sr6_tlv_hmac {TYPE_1__ tlvhdr; } ;
struct ipv6_sr_hdr {int hdrlen; int first_segment; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ipv6_sr_hdr*) ;

__attribute__((used)) static struct sr6_tlv_hmac *FUNC_1(struct ipv6_sr_hdr *VAR_1)
{
 struct sr6_tlv_hmac *VAR_2;

 if (VAR_1->hdrlen < (VAR_1->first_segment + 1) * 2 + 5)
  return ((void*)0);

 if (!FUNC_0(VAR_1))
  return ((void*)0);

 VAR_2 = (struct sr6_tlv_hmac *)
       ((char *)VAR_1 + ((VAR_1->hdrlen + 1) << 3) - 40);

 if (VAR_2->tlvhdr.type != VAR_0 || VAR_2->tlvhdr.len != 38)
  return ((void*)0);

 return VAR_2;
}
