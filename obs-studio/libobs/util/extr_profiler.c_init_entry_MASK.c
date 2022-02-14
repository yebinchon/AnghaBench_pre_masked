
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* name; int times_between_calls; scalar_t__ expected_time_between_calls; int overhead; int times; } ;
typedef TYPE_1__ profile_entry ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static profile_entry *FUNC_1(profile_entry *VAR_0, const char *VAR_1)
{
 VAR_0->name = VAR_1;
 FUNC_0(&VAR_0->times, 1);



 VAR_0->expected_time_between_calls = 0;
 FUNC_0(&VAR_0->times_between_calls, 1);
 return VAR_0;
}
