
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int array; } ;
struct TYPE_4__ {char* stream_key; char* vendor_name; scalar_t__ peak_kbps; scalar_t__ fps_den; scalar_t__ fps_num; int vendor_version; int ingest_hostname; int audio_codec; int video_codec; } ;
struct ftl_stream {scalar_t__ peak_kbps; int drop_threshold_usec; int max_shutdown_time_sec; TYPE_2__ bind_ip; TYPE_2__ path; TYPE_2__ password; TYPE_2__ username; TYPE_1__ params; int ftl_handle; int output; scalar_t__ min_priority; scalar_t__ dropped_frames; scalar_t__ total_bytes_sent; int encode_error; int disconnected; int send_thread; } ;
typedef int obs_service_t ;
typedef int obs_encoder_t ;
typedef int obs_data_t ;
typedef int int64_t ;
typedef scalar_t__ ftl_status_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 char* VAR_10 ;
 char* VAR_11 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (TYPE_2__*,char const*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct ftl_stream*) ;
 scalar_t__ FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int *,char*) ;
 char* FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;
 int * FUNC_11 (int ) ;
 int * FUNC_12 (int ) ;
 int * FUNC_13 (int ) ;
 char* FUNC_14 (int *) ;
 char const* FUNC_15 (int *) ;
 char const* FUNC_16 (int *) ;
 char const* FUNC_17 (int *) ;
 int FUNC_18 (int *,int) ;
 int FUNC_19 (int ,int *) ;
 scalar_t__ FUNC_20 (struct ftl_stream*) ;

__attribute__((used)) static int FUNC_21(struct ftl_stream *VAR_12)
{
 obs_service_t *VAR_13;
 obs_data_t *VAR_14;
 const char *VAR_15, *VAR_16;
 ftl_status_t VAR_17;

 FUNC_6("init_connect");

 if (FUNC_20(VAR_12))
  FUNC_19(VAR_12->send_thread, ((void*)0));

 FUNC_3(VAR_12);

 VAR_13 = FUNC_11(VAR_12->output);
 if (!VAR_13) {
  return VAR_5;
 }

 FUNC_18(&VAR_12->disconnected, 0);
 FUNC_18(&VAR_12->encode_error, 0);
 VAR_12->total_bytes_sent = 0;
 VAR_12->dropped_frames = 0;
 VAR_12->min_priority = 0;

 VAR_14 = FUNC_12(VAR_12->output);
 obs_encoder_t *VAR_18 =
  FUNC_13(VAR_12->output);
 obs_data_t *VAR_19 = FUNC_10(VAR_18);

 FUNC_1(&VAR_12->path, FUNC_16(VAR_13));
 VAR_16 = FUNC_14(VAR_13);

 int VAR_20 = (int)FUNC_7(VAR_19, "bitrate");
 int VAR_21 = (int)((float)VAR_20 * 1.1f);


 if (VAR_21 < VAR_20) {
  VAR_21 = VAR_20;
 }

 VAR_12->params.stream_key = (char *)VAR_16;
 VAR_12->params.video_codec = VAR_3;
 VAR_12->params.audio_codec = VAR_0;
 VAR_12->params.ingest_hostname = VAR_12->path.array;
 VAR_12->params.vendor_name = "OBS Studio";
 VAR_12->params.vendor_version = VAR_8;
 VAR_12->params.peak_kbps = VAR_12->peak_kbps < 0 ? 0
        : VAR_12->peak_kbps;


 VAR_12->params.fps_num = 0;
 VAR_12->params.fps_den = 0;

 VAR_17 = FUNC_4(&VAR_12->ftl_handle, &VAR_12->params);
 if (VAR_17 != VAR_2) {
  if (VAR_17 == VAR_1) {
   FUNC_0(VAR_4, "Invalid Key (%s)",
        FUNC_5(VAR_17));
   return VAR_6;
  } else {
   FUNC_0(VAR_4, "Failed to create ingest handle (%s)",
        FUNC_5(VAR_17));
   return VAR_5;
  }
 }

 FUNC_1(&VAR_12->username, FUNC_17(VAR_13));
 FUNC_1(&VAR_12->password, FUNC_15(VAR_13));
 FUNC_2(&VAR_12->path);

 VAR_12->drop_threshold_usec =
  (int64_t)FUNC_7(VAR_14, VAR_10) * 1000;
 VAR_12->max_shutdown_time_sec =
  (int)FUNC_7(VAR_14, VAR_11);

 VAR_15 = FUNC_8(VAR_14, VAR_9);
 FUNC_1(&VAR_12->bind_ip, VAR_15);

 FUNC_9(VAR_14);
 FUNC_9(VAR_19);
 return VAR_7;
}
