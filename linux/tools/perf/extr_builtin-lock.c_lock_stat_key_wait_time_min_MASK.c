
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct lock_stat {scalar_t__ wait_time_min; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct lock_stat *VAR_1,
     struct lock_stat *VAR_2)
{
 u64 VAR_3 = VAR_1->wait_time_min;
 u64 VAR_4 = VAR_2->wait_time_min;
 if (VAR_3 == VAR_0)
  VAR_3 = 0;
 if (VAR_4 == VAR_0)
  VAR_4 = 0;
 return VAR_3 > VAR_4;
}
