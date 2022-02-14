
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct rtmp_stream {scalar_t__ shutdown_timeout_ts; scalar_t__ stop_ts; int max_shutdown_time_sec; } ;
struct encoder_packet {scalar_t__ sys_dts_usec; } ;
typedef scalar_t__ int64_t ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static inline bool FUNC_2(struct rtmp_stream *VAR_0,
           struct encoder_packet *VAR_1)
{
 uint64_t VAR_2 = FUNC_1();
 bool VAR_3 = VAR_2 >= VAR_0->shutdown_timeout_ts;

 if (VAR_3)
  FUNC_0("Stream shutdown timeout reached (%d second(s))",
       VAR_0->max_shutdown_time_sec);

 return VAR_3 || VAR_1->sys_dts_usec >= (int64_t)VAR_0->stop_ts;
}
