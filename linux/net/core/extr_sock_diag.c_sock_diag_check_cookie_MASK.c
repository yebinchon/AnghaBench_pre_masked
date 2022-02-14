
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ const u32 ;
struct sock {int dummy; } ;
typedef scalar_t__ __u32 ;


 int VAR_0 ;
 scalar_t__ const VAR_1 ;
 int FUNC_0 (struct sock*) ;

int FUNC_1(struct sock *VAR_2, const __u32 *VAR_3)
{
 u64 VAR_4;

 if (VAR_3[0] == VAR_1 && VAR_3[1] == VAR_1)
  return 0;

 VAR_4 = FUNC_0(VAR_2);
 if ((u32)VAR_4 != VAR_3[0] || (u32)(VAR_4 >> 32) != VAR_3[1])
  return -VAR_0;

 return 0;
}
