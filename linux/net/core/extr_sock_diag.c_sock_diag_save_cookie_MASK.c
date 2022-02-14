
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct sock {int dummy; } ;
typedef scalar_t__ __u32 ;


 int FUNC_0 (struct sock*) ;

void FUNC_1(struct sock *VAR_0, __u32 *VAR_1)
{
 u64 VAR_2 = FUNC_0(VAR_0);

 VAR_1[0] = (u32)VAR_2;
 VAR_1[1] = (u32)(VAR_2 >> 32);
}
