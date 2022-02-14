
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct rtmp_stream {int output; int send_sem; scalar_t__ stop_ts; int stop_event; scalar_t__ max_shutdown_time_sec; scalar_t__ shutdown_timeout_ts; int connect_thread; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rtmp_stream*) ;
 scalar_t__ FUNC_1 (struct rtmp_stream*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (struct rtmp_stream*) ;

__attribute__((used)) static void FUNC_7(void *VAR_1, uint64_t VAR_2)
{
 struct rtmp_stream *VAR_3 = VAR_1;

 if (FUNC_6(VAR_3) && VAR_2 != 0)
  return;

 if (FUNC_1(VAR_3))
  FUNC_5(VAR_3->connect_thread, ((void*)0));

 VAR_3->stop_ts = VAR_2 / 1000ULL;

 if (VAR_2)
  VAR_3->shutdown_timeout_ts =
   VAR_2 +
   (uint64_t)VAR_3->max_shutdown_time_sec * 1000000000ULL;

 if (FUNC_0(VAR_3)) {
  FUNC_3(VAR_3->stop_event);
  if (VAR_3->stop_ts == 0)
   FUNC_4(VAR_3->send_sem);
 } else {
  FUNC_2(VAR_3->output, VAR_0);
 }
}
