
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ftl_stream {int packets; int packets_mutex; int send_sem; int stop_event; int bind_ip; int encoder_name; int password; int username; int path; int ftl_handle; int send_thread; int output; scalar_t__ stop_ts; int connect_thread; int status_thread; scalar_t__ connecting; } ;
typedef scalar_t__ ftl_status_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct ftl_stream*) ;
 int FUNC_1 (struct ftl_stream*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct ftl_stream*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ftl_stream*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (struct ftl_stream*) ;

__attribute__((used)) static void FUNC_16(void *VAR_1)
{
 struct ftl_stream *VAR_2 = VAR_1;
 ftl_status_t VAR_3;

 FUNC_7("ftl_stream_destroy");

 if (FUNC_15(VAR_2) && !FUNC_3(VAR_2)) {
  FUNC_13(VAR_2->send_thread, ((void*)0));

 } else if (FUNC_3(VAR_2) || FUNC_0(VAR_2)) {
  if (VAR_2->connecting) {
   FUNC_7("wait for connect_thread to terminate");
   FUNC_13(VAR_2->status_thread, ((void*)0));
   FUNC_13(VAR_2->connect_thread, ((void*)0));
   FUNC_7("wait for connect_thread to terminate: done");
  }

  VAR_2->stop_ts = 0;
  FUNC_10(VAR_2->stop_event);

  if (FUNC_0(VAR_2)) {
   FUNC_12(VAR_2->send_sem);
   FUNC_8(VAR_2->output);
   FUNC_13(VAR_2->send_thread, ((void*)0));
  }
 }

 FUNC_7("ingest destroy");

 VAR_3 = FUNC_6(&VAR_2->ftl_handle);
 if (VAR_3 != VAR_0) {
  FUNC_7("Failed to destroy from ingest %d", VAR_3);
 }

 if (VAR_2) {
  FUNC_5(VAR_2);
  FUNC_4(&VAR_2->path);
  FUNC_4(&VAR_2->username);
  FUNC_4(&VAR_2->password);
  FUNC_4(&VAR_2->encoder_name);
  FUNC_4(&VAR_2->bind_ip);
  FUNC_9(VAR_2->stop_event);
  FUNC_11(VAR_2->send_sem);
  FUNC_14(&VAR_2->packets_mutex);
  FUNC_2(&VAR_2->packets);
  FUNC_1(VAR_2);
 }
}
