
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinginfo {scalar_t__* times; int member_0; } ;
struct in_addr {int s_addr; } ;
typedef int inaddrbuf ;
typedef int __u32 ;
typedef size_t __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int *) ;
 scalar_t__ FUNC_1 (int,int *,struct pinginfo*) ;
 int FUNC_2 (int ,char*,size_t,size_t) ;
 char* FUNC_3 (int ,struct in_addr*,char*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,...) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(int VAR_3, __u16 VAR_4, __u32 VAR_5)
{
 struct pinginfo VAR_6 = { 0 };
 char VAR_7[VAR_1];
 struct in_addr VAR_8;
 __u16 VAR_9;

 VAR_8.s_addr = VAR_5;

 FUNC_5("\nXDP RTT data:\n");

 if (FUNC_1(VAR_3, &VAR_5, &VAR_6)) {
  FUNC_4("bpf_map_lookup elem: ");
  return 1;
 }

 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  if (VAR_6.times[VAR_9] == 0)
   break;

  FUNC_5("64 bytes from %s: icmp_seq=%d ttl=64 time=%#.5f ms\n",
         FUNC_3(VAR_0, &VAR_8, VAR_7,
     sizeof(VAR_7)),
         VAR_4 + VAR_9 + 1,
         (double)VAR_6.times[VAR_9]/1000000);
 }

 if (VAR_9 < VAR_4) {
  FUNC_2(VAR_2, "Expected %zu samples, got %zu.\n", VAR_4, VAR_9);
  return 1;
 }

 FUNC_0(VAR_3, &VAR_5);

 return 0;
}
