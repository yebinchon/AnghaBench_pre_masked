
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ether_header {int ether_dhost; int ether_shost; } ;
struct ether_addr {int dummy; } ;



__attribute__((used)) static void FUNC_0(void *VAR_0)
{
 struct ether_header *VAR_1 = (struct ether_header *)VAR_0;
 struct ether_addr *VAR_2 = (struct ether_addr *)&VAR_1->ether_shost;
 struct ether_addr *VAR_3 = (struct ether_addr *)&VAR_1->ether_dhost;
 struct ether_addr VAR_4;

 VAR_4 = *VAR_2;
 *VAR_2 = *VAR_3;
 *VAR_3 = VAR_4;
}
