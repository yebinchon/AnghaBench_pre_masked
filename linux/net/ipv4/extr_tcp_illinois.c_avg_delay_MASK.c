
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct illinois {scalar_t__ base_rtt; int cnt_rtt; scalar_t__ sum_rtt; } ;


 int FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static inline u32 FUNC_1(const struct illinois *VAR_0)
{
 u64 VAR_1 = VAR_0->sum_rtt;

 FUNC_0(VAR_1, VAR_0->cnt_rtt);
 return VAR_1 - VAR_0->base_rtt;
}
