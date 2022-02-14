
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int time_t ;
struct tm {int dummy; } ;
struct TYPE_4__ {scalar_t__ wMonth; } ;
struct TYPE_5__ {int Bias; int StandardBias; TYPE_1__ StandardDate; } ;
typedef TYPE_2__ TIME_ZONE_INFORMATION ;


 int FUNC_0 (TYPE_2__*) ;
 struct tm* FUNC_1 (int const*,long) ;

struct tm * FUNC_2(const time_t *VAR_0)
{
    register struct tm *VAR_1;

    long VAR_2;
    TIME_ZONE_INFORMATION VAR_3;


    VAR_2 = 0;
 if (FUNC_0(&VAR_3) != 0xFFFFFFFF)
 {
  VAR_2 += (VAR_3.Bias * 60);
  if (VAR_3.StandardDate.wMonth != 0)
        {
   VAR_2 += (VAR_3.StandardBias * 60);
        }
 }

    VAR_2 *= -1;
    VAR_1 = FUNC_1(VAR_0, VAR_2);

    return VAR_1;
}
