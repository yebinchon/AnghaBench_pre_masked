
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int explicit_exit_notification_time_wait; int explicit_exit_notification_interval; } ;
struct context {TYPE_1__ c2; int sig; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*) ;
 int VAR_1 ;
 int FUNC_3 (struct context*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct context *VAR_2)
{
    FUNC_2(VAR_0, "SIGTERM received, sending exit notification to peer");
    FUNC_0(&VAR_2->c2.explicit_exit_notification_interval, 1, 0);
    FUNC_3(VAR_2);
    FUNC_4(VAR_2->sig);
    FUNC_1();
    VAR_2->c2.explicit_exit_notification_time_wait = VAR_1;
}
