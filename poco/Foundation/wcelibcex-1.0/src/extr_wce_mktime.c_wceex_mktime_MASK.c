
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct tm {int dummy; } ;
struct TYPE_4__ {scalar_t__ wMonth; } ;
struct TYPE_5__ {int Bias; int StandardBias; TYPE_1__ StandardDate; } ;
typedef TYPE_2__ TIME_ZONE_INFORMATION ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (struct tm*,scalar_t__) ;

time_t FUNC_2(struct tm *VAR_0)
{
    time_t VAR_1;
    TIME_ZONE_INFORMATION VAR_2;

    VAR_1 = 0;


 if (FUNC_0(&VAR_2) != 0xFFFFFFFF)
 {
  VAR_1 += (VAR_2.Bias * 60);
  if (VAR_2.StandardDate.wMonth != 0)
        {
   VAR_1 += (VAR_2.StandardBias * 60);
        }
 }

    return FUNC_1(VAR_0, VAR_1);
}
