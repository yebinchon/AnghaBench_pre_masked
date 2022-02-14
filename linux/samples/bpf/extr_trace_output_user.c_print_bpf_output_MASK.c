
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u64 ;
typedef int __u32 ;


 long long VAR_0 ;
 long long VAR_1 ;
 int FUNC_0 (char*,long long,...) ;
 long long VAR_2 ;
 long long FUNC_1 () ;

__attribute__((used)) static void FUNC_2(void *VAR_3, int VAR_4, void *VAR_5, __u32 VAR_6)
{
 struct {
  __u64 pid;
  __u64 cookie;
 } *VAR_7 = VAR_5;

 if (VAR_7->cookie != 0x12345678) {
  FUNC_0("BUG pid %llx cookie %llx sized %d\n",
         VAR_7->pid, VAR_7->cookie, VAR_6);
  return;
 }

 VAR_1++;

 if (VAR_1 == VAR_0) {
  FUNC_0("recv %lld events per sec\n",
         VAR_0 * 1000000000ll / (FUNC_1() - VAR_2));
  return;
 }
}
