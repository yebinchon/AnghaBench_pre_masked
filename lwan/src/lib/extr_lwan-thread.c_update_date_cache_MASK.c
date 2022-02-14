
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_6__ {int expires; int date; } ;
struct lwan_thread {TYPE_3__ date; TYPE_2__* lwan; } ;
struct TYPE_4__ {scalar_t__ expires; } ;
struct TYPE_5__ {TYPE_1__ config; } ;


 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct lwan_thread *VAR_0)
{
    time_t VAR_1 = FUNC_1(((void*)0));

    FUNC_0(VAR_1, VAR_0->date.date);
    FUNC_0(VAR_1 + (time_t)VAR_0->lwan->config.expires,
                         VAR_0->date.expires);
}
