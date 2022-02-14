
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtmp_stream {struct rtmp_stream* write_buf; int write_buf_mutex; int send_thread_signaled_exit; int socket_available_event; int buffer_has_data_event; int buffer_space_available_event; int dbr_mutex; int dbr_frames; int droptest_info; int packets; int packets_mutex; int send_sem; int stop_event; int bind_ip; int encoder_name; int password; int username; int key; int path; int send_thread; int output; scalar_t__ stop_ts; int connect_thread; scalar_t__ connecting; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct rtmp_stream*) ;
 int FUNC_2 (struct rtmp_stream*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct rtmp_stream*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct rtmp_stream*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (struct rtmp_stream*) ;

__attribute__((used)) static void FUNC_15(void *VAR_0)
{
 struct rtmp_stream *VAR_1 = VAR_0;

 if (FUNC_14(VAR_1) && !FUNC_4(VAR_1)) {
  FUNC_12(VAR_1->send_thread, ((void*)0));

 } else if (FUNC_4(VAR_1) || FUNC_1(VAR_1)) {
  if (VAR_1->connecting)
   FUNC_12(VAR_1->connect_thread, ((void*)0));

  VAR_1->stop_ts = 0;
  FUNC_9(VAR_1->stop_event);

  if (FUNC_1(VAR_1)) {
   FUNC_11(VAR_1->send_sem);
   FUNC_7(VAR_1->output);
   FUNC_12(VAR_1->send_thread, ((void*)0));
  }
 }

 FUNC_0();
 FUNC_6(VAR_1);
 FUNC_5(&VAR_1->path);
 FUNC_5(&VAR_1->key);
 FUNC_5(&VAR_1->username);
 FUNC_5(&VAR_1->password);
 FUNC_5(&VAR_1->encoder_name);
 FUNC_5(&VAR_1->bind_ip);
 FUNC_8(VAR_1->stop_event);
 FUNC_10(VAR_1->send_sem);
 FUNC_13(&VAR_1->packets_mutex);
 FUNC_3(&VAR_1->packets);



 FUNC_3(&VAR_1->dbr_frames);
 FUNC_13(&VAR_1->dbr_mutex);

 FUNC_8(VAR_1->buffer_space_available_event);
 FUNC_8(VAR_1->buffer_has_data_event);
 FUNC_8(VAR_1->socket_available_event);
 FUNC_8(VAR_1->send_thread_signaled_exit);
 FUNC_13(&VAR_1->write_buf_mutex);

 if (VAR_1->write_buf)
  FUNC_2(VAR_1->write_buf);
 FUNC_2(VAR_1);
}
