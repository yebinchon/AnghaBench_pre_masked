
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {int dummy; } ;
struct event_set_return {int dummy; } ;
struct TYPE_2__ {int (* wait ) (struct event_set*,struct timeval const*,struct event_set_return*,int) ;} ;
struct event_set {TYPE_1__ func; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct event_set*,struct timeval const*,struct event_set_return*,int) ;

__attribute__((used)) static inline int
FUNC_3(struct event_set *VAR_1, const struct timeval *VAR_2, struct event_set_return *VAR_3, int VAR_4)
{
    int VAR_5;
    FUNC_1(VAR_0);
    VAR_5 = (*VAR_1->func.wait)(VAR_1, VAR_2, VAR_3, VAR_4);
    FUNC_0();
    return VAR_5;
}
