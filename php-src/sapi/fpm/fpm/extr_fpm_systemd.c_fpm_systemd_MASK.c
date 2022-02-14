
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fpm_worker_pool_s {TYPE_1__* scoreboard; struct fpm_worker_pool_s* next; } ;
struct TYPE_4__ {float systemd_interval; scalar_t__ systemd_watchdog; } ;
struct TYPE_3__ {scalar_t__ slow_rq; scalar_t__ requests; scalar_t__ idle; scalar_t__ active; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 struct fpm_worker_pool_s* VAR_2 ;
 scalar_t__ FUNC_0 (int ,char*,char*,int,int,unsigned long,unsigned long,float) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2()
{
 static unsigned long int VAR_3=0;
 struct fpm_worker_pool_s *VAR_4;
 unsigned long int VAR_5=0, VAR_6=0;
 int VAR_7=0, VAR_8=0;


 for (VAR_4 = VAR_2; VAR_4; VAR_4 = VAR_4->next) {
  if (VAR_4->scoreboard) {
   VAR_7 += VAR_4->scoreboard->active;
   VAR_8 += VAR_4->scoreboard->idle;
   VAR_5 += VAR_4->scoreboard->requests;
   VAR_6 += VAR_4->scoreboard->slow_rq;
  }
 }







 if (0 > FUNC_0(0, "READY=1\n%s"
    "STATUS=Processes active: %d, idle: %d, Requests: %lu, slow: %lu, Traffic: %.3greq/sec",
    VAR_1.systemd_watchdog ? "WATCHDOG=1\n" : "",
    VAR_7, VAR_8, VAR_5, VAR_6, ((float)VAR_5 - VAR_3) * 1000.0 / VAR_1.systemd_interval)) {
  FUNC_1(VAR_0, "failed to notify status to systemd");
 }

 VAR_3 = VAR_5;
}
