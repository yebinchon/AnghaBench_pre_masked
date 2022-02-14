
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sock {int sk_pacing_rate; } ;


 int VAR_0 ;

__attribute__((used)) static u32 FUNC_0(struct sock *VAR_1)
{
 return VAR_1->sk_pacing_rate < (VAR_0 >> 3) ? 1 : 2;
}
