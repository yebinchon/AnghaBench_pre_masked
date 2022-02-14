
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int m_bCustomSend; } ;
struct TYPE_3__ {int array; } ;
struct rtmp_stream {scalar_t__ stop_ts; int sent_headers; int socket_thread_active; scalar_t__ dbr_cur_bitrate; scalar_t__ dbr_orig_bitrate; scalar_t__ dbr_enabled; int active; int stop_event; int output; int send_thread; TYPE_2__ rtmp; int socket_thread; int buffer_has_data_event; int send_thread_signaled_exit; scalar_t__ new_socket_loop; TYPE_1__ path; int encode_error; int dbr_mutex; int disconnected; int send_sem; } ;
struct encoder_packet {int track_idx; int size; } ;
struct dbr_frame {void* send_end; int size; void* send_beg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (struct rtmp_stream*,struct encoder_packet*) ;
 int FUNC_2 (struct rtmp_stream*,struct dbr_frame*) ;
 int FUNC_3 (struct rtmp_stream*) ;
 scalar_t__ FUNC_4 (struct rtmp_stream*) ;
 int FUNC_5 (struct rtmp_stream*) ;
 int FUNC_6 (struct rtmp_stream*,struct encoder_packet*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (struct encoder_packet*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 void* FUNC_15 () ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ,int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (struct rtmp_stream*) ;
 scalar_t__ FUNC_23 (struct rtmp_stream*,struct encoder_packet*,int,int ) ;
 int FUNC_24 (struct rtmp_stream*) ;
 scalar_t__ FUNC_25 (struct rtmp_stream*) ;

__attribute__((used)) static void *FUNC_26(void *VAR_2)
{
 struct rtmp_stream *VAR_3 = VAR_2;

 FUNC_17("rtmp-stream: send_thread");

 while (FUNC_16(VAR_3->send_sem) == 0) {
  struct encoder_packet VAR_4;
  struct dbr_frame VAR_5;

  if (FUNC_25(VAR_3) && VAR_3->stop_ts == 0) {
   break;
  }

  if (!FUNC_6(VAR_3, &VAR_4))
   continue;

  if (FUNC_25(VAR_3)) {
   if (FUNC_1(VAR_3, &VAR_4)) {
    FUNC_8(&VAR_4);
    break;
   }
  }

  if (!VAR_3->sent_headers) {
   if (!FUNC_22(VAR_3)) {
    FUNC_12(&VAR_3->disconnected, 1);
    break;
   }
  }

  if (VAR_3->dbr_enabled) {
   VAR_5.send_beg = FUNC_15();
   VAR_5.size = VAR_4.size;
  }

  if (FUNC_23(VAR_3, &VAR_4, 0, VAR_4.track_idx) < 0) {
   FUNC_12(&VAR_3->disconnected, 1);
   break;
  }

  if (VAR_3->dbr_enabled) {
   VAR_5.send_end = FUNC_15();

   FUNC_20(&VAR_3->dbr_mutex);
   FUNC_2(VAR_3, &VAR_5);
   FUNC_21(&VAR_3->dbr_mutex);
  }
 }

 bool VAR_6 = FUNC_11(&VAR_3->encode_error);

 if (FUNC_4(VAR_3)) {
  FUNC_7("Disconnected from %s", VAR_3->path.array);
 } else if (VAR_6) {
  FUNC_7("Encoder error, disconnecting");
 } else {
  FUNC_7("User stopped the stream");
 }

 if (VAR_3->new_socket_loop) {
  FUNC_14(VAR_3->send_thread_signaled_exit);
  FUNC_14(VAR_3->buffer_has_data_event);
  FUNC_19(VAR_3->socket_thread, ((void*)0));
  VAR_3->socket_thread_active = 0;
  VAR_3->rtmp.m_bCustomSend = 0;
 }

 FUNC_24(VAR_3);
 FUNC_0(&VAR_3->rtmp);

 if (!FUNC_25(VAR_3)) {
  FUNC_18(VAR_3->send_thread);
  FUNC_10(VAR_3->output, VAR_0);
 } else if (VAR_6) {
  FUNC_10(VAR_3->output, VAR_1);
 } else {
  FUNC_9(VAR_3->output);
 }

 FUNC_5(VAR_3);
 FUNC_13(VAR_3->stop_event);
 FUNC_12(&VAR_3->active, 0);
 VAR_3->sent_headers = 0;


 if (VAR_3->dbr_enabled) {
  if (VAR_3->dbr_cur_bitrate != VAR_3->dbr_orig_bitrate) {
   VAR_3->dbr_cur_bitrate = VAR_3->dbr_orig_bitrate;
   FUNC_3(VAR_3);
  }
 }

 return ((void*)0);
}
