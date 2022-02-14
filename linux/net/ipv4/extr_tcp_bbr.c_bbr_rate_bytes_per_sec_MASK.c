
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u64 ;
struct sock {int dummy; } ;
struct TYPE_2__ {unsigned int mss_cache; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (struct sock*) ;

__attribute__((used)) static u64 FUNC_1(struct sock *VAR_4, u64 VAR_5, int VAR_6)
{
 unsigned int VAR_7 = FUNC_0(VAR_4)->mss_cache;

 VAR_5 *= VAR_7;
 VAR_5 *= VAR_6;
 VAR_5 >>= VAR_0;
 VAR_5 *= VAR_2 / 100 * (100 - VAR_3);
 return VAR_5 >> VAR_1;
}
