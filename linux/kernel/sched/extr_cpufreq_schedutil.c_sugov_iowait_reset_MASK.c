
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct sugov_cpu {scalar_t__ last_update; int iowait_boost_pending; int iowait_boost; } ;
typedef scalar_t__ s64 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct sugov_cpu *VAR_2, u64 VAR_3,
          bool VAR_4)
{
 s64 VAR_5 = VAR_3 - VAR_2->last_update;


 if (VAR_5 <= VAR_1)
  return 0;

 VAR_2->iowait_boost = VAR_4 ? VAR_0 : 0;
 VAR_2->iowait_boost_pending = VAR_4;

 return 1;
}
