
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pg_tm {int dummy; } ;
struct TYPE_3__ {int state; } ;
typedef TYPE_1__ pg_tz ;
typedef int pg_time_t ;


 struct pg_tm* FUNC_0 (int *,int const*,int *) ;
 int VAR_0 ;

struct pg_tm *
FUNC_1(const pg_time_t *VAR_1, const pg_tz *VAR_2)
{
 return FUNC_0(&VAR_2->state, VAR_1, &VAR_0);
}
