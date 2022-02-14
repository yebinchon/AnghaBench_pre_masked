
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct pcap_pkthdr {int len; int caplen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int *,int ,int ) ;
 struct pcap_pkthdr* FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (char*) ;
 int FUNC_9 (char*,int *,int) ;

__attribute__((used)) static int FUNC_10(char *VAR_4)
{
 static uint32_t VAR_5, VAR_6;
 bool VAR_7 = 1;
 int VAR_8 = 0, VAR_9 = 0;

 if (!FUNC_0() || !FUNC_4())
  return VAR_0;

 VAR_8 = FUNC_9(VAR_4, ((void*)0), 10);
 if (VAR_8 == 0 || FUNC_8(VAR_4) == 0)
  VAR_7 = 0;

 do {
  struct pcap_pkthdr *VAR_10 = FUNC_3();
  int VAR_11 = FUNC_2(VAR_2, VAR_3,
          (uint8_t *) VAR_10 + sizeof(*VAR_10),
          VAR_10->caplen, VAR_10->len);
  if (VAR_11 > 0)
   VAR_5++;
  else if (VAR_11 == 0)
   VAR_6++;
  else
   return VAR_1;
  FUNC_1();
 } while (FUNC_5() && (!VAR_7 || (VAR_7 && ++VAR_9 < VAR_8)));

 FUNC_7("bpf passes:%u fails:%u\n", VAR_5, VAR_6);

 FUNC_6();
 FUNC_1();

 VAR_5 = VAR_6 = 0;
 return VAR_1;
}
