
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_3__ {int tb_low; int tb_high; } ;
typedef TYPE_1__ timebasestruct_t ;
struct timeval {int tv_usec; int tv_sec; } ;
struct timespec {int tv_nsec; int tv_sec; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,struct timespec*) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (struct timeval*,int *) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static uint64_t FUNC_7(void)
{
    uint64_t VAR_2 = FUNC_0();

    if (VAR_2 != 0)
        return VAR_2;
    {
        struct timeval VAR_3;

        if (FUNC_4(&VAR_3, ((void*)0)) == 0)
            return FUNC_1(VAR_3.tv_sec, VAR_3.tv_usec);
    }

    return FUNC_6(((void*)0));
}
