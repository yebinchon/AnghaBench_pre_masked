
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_state {int lock; struct xfrm_encap_tmpl* encap; } ;
struct xfrm_encap_tmpl {int encap_type; void* encap_dport; void* encap_sport; } ;
struct udphdr {scalar_t__ check; int len; void* dest; void* source; } ;
struct sk_buff {int len; } ;
struct iphdr {int dummy; } ;
struct ip_esp_hdr {int dummy; } ;
struct esp_info {unsigned int tailen; struct ip_esp_hdr* esph; } ;
typedef int __be32 ;
typedef void* __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;


 int FUNC_0 (unsigned int) ;
 int * FUNC_1 (struct sk_buff*) ;
 unsigned int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct xfrm_state *VAR_3, struct sk_buff *VAR_4, struct esp_info *VAR_5)
{
 int VAR_6;
 struct udphdr *VAR_7;
 __be32 *VAR_8;
 __be16 VAR_9, VAR_10;
 struct xfrm_encap_tmpl *VAR_11 = VAR_3->encap;
 struct ip_esp_hdr *VAR_12 = VAR_5->esph;
 unsigned int VAR_13;

 FUNC_3(&VAR_3->lock);
 VAR_9 = VAR_11->encap_sport;
 VAR_10 = VAR_11->encap_dport;
 VAR_6 = VAR_11->encap_type;
 FUNC_4(&VAR_3->lock);

 VAR_13 = VAR_4->len + VAR_5->tailen - FUNC_2(VAR_4);
 if (VAR_13 + sizeof(struct iphdr) >= VAR_2)
  return -VAR_0;

 VAR_7 = (struct udphdr *)VAR_12;
 VAR_7->source = VAR_9;
 VAR_7->dest = VAR_10;
 VAR_7->len = FUNC_0(VAR_13);
 VAR_7->check = 0;

 switch (VAR_6) {
 default:
 case 129:
  VAR_12 = (struct ip_esp_hdr *)(VAR_7 + 1);
  break;
 case 128:
  VAR_8 = (__be32 *)(VAR_7 + 1);
  VAR_8[0] = VAR_8[1] = 0;
  VAR_12 = (struct ip_esp_hdr *)(VAR_8 + 2);
  break;
 }

 *FUNC_1(VAR_4) = VAR_1;
 VAR_5->esph = VAR_12;

 return 0;
}
