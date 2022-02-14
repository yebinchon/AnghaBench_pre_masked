
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int array; } ;
struct ftl_stream {scalar_t__ stop_ts; int sent_headers; int active; int stop_event; int ftl_handle; int output; int send_thread; TYPE_1__ path; int encode_error; int disconnected; int send_sem; } ;
struct encoder_packet {int dts_usec; scalar_t__ keyframe; } ;
typedef scalar_t__ ftl_status_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ftl_stream*,struct encoder_packet*) ;
 scalar_t__ FUNC_1 (struct ftl_stream*) ;
 int FUNC_2 (struct ftl_stream*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct ftl_stream*,struct encoder_packet*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (struct encoder_packet*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*,scalar_t__) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (struct ftl_stream*,int ) ;
 scalar_t__ FUNC_17 (struct ftl_stream*,struct encoder_packet*,int) ;
 scalar_t__ FUNC_18 (struct ftl_stream*) ;

__attribute__((used)) static void *FUNC_19(void *VAR_3)
{
 struct ftl_stream *VAR_4 = VAR_3;
 ftl_status_t VAR_5;

 FUNC_13("ftl-stream: send_thread");

 while (FUNC_12(VAR_4->send_sem) == 0) {
  struct encoder_packet VAR_6;

  if (FUNC_18(VAR_4) && VAR_4->stop_ts == 0) {
   break;
  }

  if (!FUNC_4(VAR_4, &VAR_6))
   continue;

  if (FUNC_18(VAR_4)) {
   if (FUNC_0(VAR_4, &VAR_6)) {
    FUNC_6(&VAR_6);
    break;
   }
  }



  if (VAR_6.keyframe) {
   if (!FUNC_16(VAR_4, VAR_6.dts_usec)) {
    FUNC_10(&VAR_4->disconnected, 1);
    break;
   }
  }

  if (FUNC_17(VAR_4, &VAR_6, 0) < 0) {
   FUNC_10(&VAR_4->disconnected, 1);
   break;
  }
 }

 bool VAR_7 = FUNC_9(&VAR_4->encode_error);

 if (FUNC_1(VAR_4)) {
  FUNC_5("Disconnected from %s", VAR_4->path.array);
 } else if (VAR_7) {
  FUNC_5("Encoder error, disconnecting");
 } else {
  FUNC_5("User stopped the stream");
 }

 if (!FUNC_18(VAR_4)) {
  FUNC_15(VAR_4->send_thread);
  FUNC_8(VAR_4->output, VAR_1);
 } else if (VAR_7) {
  FUNC_8(VAR_4->output, VAR_2);
 } else {
  FUNC_7(VAR_4->output);
 }

 FUNC_5("ingest disconnect");

 VAR_5 = FUNC_3(&VAR_4->ftl_handle);
 if (VAR_5 != VAR_0) {
  FUNC_14("Failed to disconnect from ingest %d", VAR_5);
 }

 FUNC_2(VAR_4);
 FUNC_11(VAR_4->stop_event);
 FUNC_10(&VAR_4->active, 0);
 VAR_4->sent_headers = 0;
 return ((void*)0);
}
