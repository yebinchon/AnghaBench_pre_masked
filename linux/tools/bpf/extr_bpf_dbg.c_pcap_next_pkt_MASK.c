
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcap_pkthdr {scalar_t__ caplen; scalar_t__ len; } ;


 struct pcap_pkthdr* FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static bool FUNC_1(void)
{
 struct pcap_pkthdr *VAR_3 = FUNC_0();

 if (VAR_1 + sizeof(*VAR_3) -
     VAR_2 >= VAR_0)
  return 0;
 if (VAR_3->caplen == 0 || VAR_3->len == 0 || VAR_3->caplen > VAR_3->len)
  return 0;
 if (VAR_1 + sizeof(*VAR_3) + VAR_3->caplen -
     VAR_2 >= VAR_0)
  return 0;

 VAR_1 += (sizeof(*VAR_3) + VAR_3->caplen);
 return 1;
}
