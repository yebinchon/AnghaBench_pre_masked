
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct pcap_pkthdr {int len; int caplen; } ;
struct TYPE_2__ {scalar_t__ Rs; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int *,int ,int ,int) ;
 struct pcap_pkthdr* FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char*) ;
 int FUNC_10 (char*,int *,int) ;

__attribute__((used)) static int FUNC_11(char *VAR_5)
{
 struct pcap_pkthdr *VAR_6;
 int VAR_7, VAR_8;

 if (!FUNC_0() || !FUNC_5())
  return VAR_0;

 VAR_7 = FUNC_10(VAR_5, ((void*)0), 10);
 if (VAR_7 == 0 || FUNC_9(VAR_5) == 0)
  VAR_7 = 1;
 if (VAR_7 < 0) {
  if (!FUNC_2(VAR_7))
   return VAR_0;
  VAR_7 = 1;
 }

 VAR_6 = FUNC_4();
 VAR_8 = FUNC_3(VAR_3, VAR_4,
          (uint8_t *) VAR_6 + sizeof(*VAR_6),
          VAR_6->caplen, VAR_6->len, VAR_7);
 if (VAR_8 >= 0 || VAR_2.Rs) {
  FUNC_1();
  if (!FUNC_6()) {
   FUNC_8("(going back to first packet)\n");
   FUNC_7();
  } else {
   FUNC_8("(next packet)\n");
  }
 }

 return VAR_1;
}
