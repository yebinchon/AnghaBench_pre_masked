
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; } ;
struct rtmp_stream {long dbr_prev_bitrate; long dbr_est_bitrate; long dbr_cur_bitrate; scalar_t__ dbr_inc_timeout; TYPE_1__ dbr_frames; scalar_t__ dbr_data_size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,long,long) ;
 int FUNC_1 (TYPE_1__*,int *,int ) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static bool FUNC_4(struct rtmp_stream *VAR_2)
{
 long VAR_3 = VAR_2->dbr_prev_bitrate;
 long VAR_4 = 0;
 long VAR_5;

 if (VAR_2->dbr_est_bitrate &&
     VAR_2->dbr_est_bitrate < VAR_2->dbr_cur_bitrate) {
  VAR_2->dbr_data_size = 0;
  FUNC_1(&VAR_2->dbr_frames, ((void*)0),
        VAR_2->dbr_frames.size);
  VAR_4 = VAR_2->dbr_est_bitrate / 100 * 100;
  if (VAR_4 < 50) {
   VAR_4 = 50;
  }
 }
 if (VAR_4) {
  VAR_5 = VAR_4;

 } else if (VAR_3) {
  VAR_5 = VAR_3;
  FUNC_2("going back to prev bitrate");

 } else {
  return 0;
 }

 if (VAR_5 == VAR_2->dbr_cur_bitrate) {
  return 0;
 }


 VAR_2->dbr_prev_bitrate = 0;
 VAR_2->dbr_cur_bitrate = VAR_5;
 VAR_2->dbr_inc_timeout = FUNC_3() + VAR_0;
 FUNC_2("bitrate decreased to: %ld", VAR_2->dbr_cur_bitrate);
 return 1;
}
