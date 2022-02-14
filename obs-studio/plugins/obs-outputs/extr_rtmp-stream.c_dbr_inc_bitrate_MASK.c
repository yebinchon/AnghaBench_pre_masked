
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtmp_stream {scalar_t__ dbr_prev_bitrate; scalar_t__ dbr_cur_bitrate; scalar_t__ dbr_inc_bitrate; scalar_t__ dbr_orig_bitrate; scalar_t__ dbr_inc_timeout; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct rtmp_stream *VAR_1)
{
 VAR_1->dbr_prev_bitrate = VAR_1->dbr_cur_bitrate;
 VAR_1->dbr_cur_bitrate += VAR_1->dbr_inc_bitrate;

 if (VAR_1->dbr_cur_bitrate >= VAR_1->dbr_orig_bitrate) {
  VAR_1->dbr_cur_bitrate = VAR_1->dbr_orig_bitrate;
  FUNC_0("bitrate increased to: %ld, done",
       VAR_1->dbr_cur_bitrate);
 } else if (VAR_1->dbr_cur_bitrate < VAR_1->dbr_orig_bitrate) {
  VAR_1->dbr_inc_timeout = FUNC_1() + VAR_0;
  FUNC_0("bitrate increased to: %ld, waiting",
       VAR_1->dbr_cur_bitrate);
 }
}
