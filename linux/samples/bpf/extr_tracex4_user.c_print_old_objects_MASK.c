
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pair {long long val; int ip; } ;
typedef int __u64 ;


 scalar_t__ FUNC_0 (int ,int*,int*) ;
 int FUNC_1 (int ,int*,struct pair*) ;
 int * VAR_0 ;
 int FUNC_2 (char*,int,long long,int ) ;
 long long FUNC_3 () ;
 int FUNC_4 (int,char*,int) ;

__attribute__((used)) static void FUNC_5(int VAR_1)
{
 long long VAR_2 = FUNC_3();
 __u64 VAR_3, VAR_4;
 struct pair VAR_5;

 VAR_3 = FUNC_4(1, "\e[1;1H\e[2J", 12);

 VAR_3 = -1;
 while (FUNC_0(VAR_0[0], &VAR_3, &VAR_4) == 0) {
  FUNC_1(VAR_0[0], &VAR_4, &VAR_5);
  VAR_3 = VAR_4;
  if (VAR_2 - VAR_5.val < 1000000000ll)

   continue;
  FUNC_2("obj 0x%llx is %2lldsec old was allocated at ip %llx\n",
         VAR_4, (VAR_2 - VAR_5.val) / 1000000000ll, VAR_5.ip);
 }
}
