
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ ip_summed; int csum_start; int transport_header; int network_header; int mac_header; int inner_transport_header; int inner_network_header; int inner_mac_header; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;

void FUNC_1(struct sk_buff *VAR_1, int VAR_2)
{

 if (VAR_1->ip_summed == VAR_0)
  VAR_1->csum_start += VAR_2;

 VAR_1->transport_header += VAR_2;
 VAR_1->network_header += VAR_2;
 if (FUNC_0(VAR_1))
  VAR_1->mac_header += VAR_2;
 VAR_1->inner_transport_header += VAR_2;
 VAR_1->inner_network_header += VAR_2;
 VAR_1->inner_mac_header += VAR_2;
}
