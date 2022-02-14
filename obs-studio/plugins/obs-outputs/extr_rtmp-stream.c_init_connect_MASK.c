
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rtmp_stream {int got_first_video; int max_shutdown_time_sec; long audio_bitrate; long dbr_orig_bitrate; long dbr_cur_bitrate; int dbr_inc_bitrate; int dbr_enabled; int drop_threshold_usec; int pframe_drop_threshold_usec; void* low_latency_mode; void* new_socket_loop; int bind_ip; int output; scalar_t__ dbr_inc_timeout; scalar_t__ dbr_est_bitrate; scalar_t__ dbr_data_size; int dbr_frames; int key; int path; int password; int username; scalar_t__ min_priority; scalar_t__ dropped_frames; scalar_t__ total_bytes_sent; int encode_error; int disconnected; int send_thread; } ;
typedef int obs_service_t ;
typedef int obs_encoder_t ;
typedef int obs_data_t ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct rtmp_stream*) ;
 int FUNC_4 (char*) ;
 void* FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int *,char*) ;
 char* FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;
 int * FUNC_11 (int ,int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int * FUNC_13 (int ) ;
 int * FUNC_14 (int ) ;
 int * FUNC_15 (int ) ;
 char const* FUNC_16 (int *) ;
 char const* FUNC_17 (int *) ;
 char const* FUNC_18 (int *) ;
 char const* FUNC_19 (int *) ;
 int FUNC_20 (int *,int) ;
 int FUNC_21 (int ,int *) ;
 scalar_t__ FUNC_22 (struct rtmp_stream*) ;

__attribute__((used)) static bool FUNC_23(struct rtmp_stream *VAR_8)
{
 obs_service_t *VAR_9;
 obs_data_t *VAR_10;
 const char *VAR_11;
 int64_t VAR_12;
 int64_t VAR_13;
 uint32_t VAR_14;

 if (FUNC_22(VAR_8)) {
  FUNC_21(VAR_8->send_thread, ((void*)0));
 }

 FUNC_3(VAR_8);

 VAR_9 = FUNC_13(VAR_8->output);
 if (!VAR_9)
  return 0;

 FUNC_20(&VAR_8->disconnected, 0);
 FUNC_20(&VAR_8->encode_error, 0);
 VAR_8->total_bytes_sent = 0;
 VAR_8->dropped_frames = 0;
 VAR_8->min_priority = 0;
 VAR_8->got_first_video = 0;

 VAR_10 = FUNC_14(VAR_8->output);
 FUNC_1(&VAR_8->path, FUNC_18(VAR_9));
 FUNC_1(&VAR_8->key, FUNC_16(VAR_9));
 FUNC_1(&VAR_8->username, FUNC_19(VAR_9));
 FUNC_1(&VAR_8->password, FUNC_17(VAR_9));
 FUNC_2(&VAR_8->path);
 FUNC_2(&VAR_8->key);
 VAR_13 = (int64_t)FUNC_6(VAR_10, VAR_2);
 VAR_12 = (int64_t)FUNC_6(VAR_10, VAR_7);
 VAR_8->max_shutdown_time_sec =
  (int)FUNC_6(VAR_10, VAR_5);

 obs_encoder_t *VAR_15 = FUNC_15(VAR_8->output);
 obs_encoder_t *VAR_16 = FUNC_11(VAR_8->output, 0);
 obs_data_t *VAR_17 = FUNC_10(VAR_15);
 obs_data_t *VAR_18 = FUNC_10(VAR_16);

 FUNC_0(&VAR_8->dbr_frames);
 VAR_8->audio_bitrate = (long)FUNC_6(VAR_18, "bitrate");
 VAR_8->dbr_data_size = 0;
 VAR_8->dbr_orig_bitrate = (long)FUNC_6(VAR_17, "bitrate");
 VAR_8->dbr_cur_bitrate = VAR_8->dbr_orig_bitrate;
 VAR_8->dbr_est_bitrate = 0;
 VAR_8->dbr_inc_bitrate = VAR_8->dbr_orig_bitrate / 10;
 VAR_8->dbr_inc_timeout = 0;
 VAR_8->dbr_enabled = FUNC_5(VAR_10, VAR_3);

 VAR_14 = FUNC_9(VAR_15);
 if ((VAR_14 & VAR_0) == 0) {
  VAR_8->dbr_enabled = 0;
 }

 if (FUNC_12(VAR_8->output) != 0) {
  VAR_8->dbr_enabled = 0;
 }

 if (VAR_8->dbr_enabled) {
  FUNC_4("Dynamic bitrate enabled.  Dropped frames begone!");
 }

 FUNC_8(VAR_17);
 FUNC_8(VAR_18);

 if (VAR_12 < (VAR_13 + 200))
  VAR_12 = VAR_13 + 200;

 VAR_8->drop_threshold_usec = 1000 * VAR_13;
 VAR_8->pframe_drop_threshold_usec = 1000 * VAR_12;

 VAR_11 = FUNC_7(VAR_10, VAR_1);
 FUNC_1(&VAR_8->bind_ip, VAR_11);

 VAR_8->new_socket_loop =
  FUNC_5(VAR_10, VAR_6);
 VAR_8->low_latency_mode =
  FUNC_5(VAR_10, VAR_4);

 FUNC_8(VAR_10);
 return 1;
}
