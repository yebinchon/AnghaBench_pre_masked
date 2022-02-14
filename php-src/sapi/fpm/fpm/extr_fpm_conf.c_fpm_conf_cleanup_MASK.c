
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ syslog_ident; int log_limit; scalar_t__ error_log; scalar_t__ pid_file; scalar_t__ events_mechanism; } ;
struct TYPE_3__ {scalar_t__ config; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(int VAR_3, void *VAR_4)
{
 FUNC_0(VAR_1.pid_file);
 FUNC_0(VAR_1.error_log);
 FUNC_0(VAR_1.events_mechanism);
 VAR_1.pid_file = 0;
 VAR_1.error_log = 0;
 VAR_1.log_limit = VAR_0;




 FUNC_0(VAR_2.config);
}
