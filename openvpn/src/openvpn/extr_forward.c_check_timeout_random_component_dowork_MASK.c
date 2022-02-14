
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_3__ {int tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_4__ {TYPE_1__ timeout_random_component; scalar_t__ update_timeout_random_component; } ;
struct context {TYPE_2__ c2; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,long) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_2(struct context *VAR_2)
{
    const int VAR_3 = 10;
    VAR_2->c2.update_timeout_random_component = VAR_1 + VAR_3;
    VAR_2->c2.timeout_random_component.tv_usec = (time_t) FUNC_1() & 0x0003FFFF;
    VAR_2->c2.timeout_random_component.tv_sec = 0;

    FUNC_0(VAR_0, "RANDOM USEC=%ld", (long) VAR_2->c2.timeout_random_component.tv_usec);
}
