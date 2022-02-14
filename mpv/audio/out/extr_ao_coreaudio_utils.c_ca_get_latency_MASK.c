
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_5__ {scalar_t__ denom; scalar_t__ numer; } ;
typedef TYPE_1__ mach_timebase_info_data_t ;
typedef scalar_t__ int64_t ;
struct TYPE_6__ {scalar_t__ mHostTime; } ;
typedef TYPE_2__ AudioTimeStamp ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;

int64_t FUNC_4(const AudioTimeStamp *VAR_0)
{
    static mach_timebase_info_data_t VAR_1;
    if (VAR_1.denom == 0)
        FUNC_3(&VAR_1);

    uint64_t VAR_2 = VAR_0->mHostTime;
    uint64_t VAR_3 = FUNC_2();

    if (VAR_3 > VAR_2)
        return 0;

    return (VAR_2 - VAR_3) * VAR_1.numer / VAR_1.denom / 1e3;

}
