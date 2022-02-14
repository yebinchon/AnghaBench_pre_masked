
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int time_t ;
typedef int __u64 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (unsigned int,int*,int *) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ) ;
 unsigned int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(unsigned int VAR_1, unsigned int VAR_2)
{
 time_t VAR_3 = FUNC_4(((void*)0));
 __u64 VAR_4 = 0;
 int VAR_5 = 0;


 while (!VAR_2 || FUNC_4(((void*)0)) - VAR_3 <= VAR_2) {
  FUNC_3(VAR_0);

  FUNC_0(FUNC_1(VAR_1, &VAR_5, &VAR_4) == 0);

  FUNC_2("icmp \"packet too big\" sent: %10llu pkts\n", VAR_4);
 }
}
