
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zlog_stream {unsigned int is_stdout; int child_pid; } ;
struct fpm_event_s {int fd; } ;
struct fpm_child_s {int fd_stdout; int fd_stderr; scalar_t__ pid; TYPE_2__* wp; struct zlog_stream* log_stream; struct fpm_event_s ev_stderr; struct fpm_event_s ev_stdout; } ;
struct TYPE_4__ {TYPE_1__* config; } ;
struct TYPE_3__ {int name; int decorate_workers_output; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct fpm_event_s*) ;
 struct zlog_stream* FUNC_2 (int) ;
 char* FUNC_3 (char*,char,int) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (int,char*,int const) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (struct zlog_stream*) ;
 int FUNC_8 (struct zlog_stream*,int ,int ) ;
 int FUNC_9 (struct zlog_stream*,int) ;
 int FUNC_10 (struct zlog_stream*,int ) ;
 int FUNC_11 (struct zlog_stream*,int) ;
 int FUNC_12 (struct zlog_stream*,int ,int ,int,char*) ;
 int FUNC_13 (struct zlog_stream*,int ) ;
 int FUNC_14 (struct zlog_stream*,int *,char*) ;
 int FUNC_15 (struct zlog_stream*,int ) ;
 int FUNC_16 (struct zlog_stream*,char*,int) ;

__attribute__((used)) static void FUNC_17(struct fpm_event_s *VAR_8, short VAR_9, void *VAR_10)
{
 static const int VAR_11 = 1024;
 int VAR_12 = VAR_8->fd;
 char VAR_13[VAR_11];
 struct fpm_child_s *VAR_14;
 int VAR_15;
 struct fpm_event_s *VAR_16;
 int VAR_17 = 1, VAR_18 = 1;
 int VAR_19 = 0;
 int VAR_20 = 0, VAR_21 = 0, VAR_22;
 int VAR_23;
 struct zlog_stream *VAR_24;

 if (!VAR_10) {
  return;
 }
 VAR_14 = (struct fpm_child_s *)VAR_10;

 VAR_15 = (VAR_12 == VAR_14->fd_stdout);
 if (VAR_15) {
  VAR_16 = &VAR_14->ev_stdout;
 } else {
  VAR_16 = &VAR_14->ev_stderr;
 }

 VAR_22 = !VAR_14->log_stream;
 if (VAR_22) {
  VAR_24 = VAR_14->log_stream = FUNC_2(sizeof(struct zlog_stream));
  FUNC_8(VAR_24, VAR_6, VAR_2);
  FUNC_10(VAR_24, VAR_14->wp->config->decorate_workers_output);
  FUNC_15(VAR_24, VAR_5);
  FUNC_12(VAR_24, VAR_3,
    VAR_14->wp->config->name, (int) VAR_14->pid, VAR_15 ? "stdout" : "stderr");
  FUNC_13(VAR_24, VAR_5);
  FUNC_11(VAR_24, VAR_15);
  FUNC_9(VAR_24, (int)VAR_14->pid);
 } else {
  VAR_24 = VAR_14->log_stream;


  if (VAR_24->is_stdout != (unsigned int)VAR_15 || VAR_24->child_pid != (int)VAR_14->pid) {
   FUNC_7(VAR_24);
   FUNC_12(VAR_24, VAR_3,
     VAR_14->wp->config->name, (int) VAR_14->pid, VAR_15 ? "stdout" : "stderr");
   FUNC_11(VAR_24, VAR_15);
   FUNC_9(VAR_24, (int)VAR_14->pid);
  }
 }

 while (VAR_17 || VAR_18) {
  if (VAR_17) {
   VAR_23 = FUNC_5(VAR_12, VAR_13 + VAR_19, VAR_11 - 1 - VAR_19);
   if (VAR_23 <= 0) {
    VAR_17 = 0;
    if (VAR_23 == 0 || (VAR_7 != VAR_0 && VAR_7 != VAR_1)) {

     VAR_20 = (VAR_23 < 0) ? VAR_23 : 1;
    }
   } else {
    VAR_19 += VAR_23;

    if (!VAR_13[VAR_19 - 1]) {
     VAR_21 = 1;
     VAR_19--;
    }
   }
  }

  if (VAR_18) {
   if (VAR_19 == 0) {
    VAR_18 = 0;
   } else {
    char *VAR_25;

    VAR_25 = FUNC_3(VAR_13, '\n', VAR_19);
    if (VAR_25) {

     int VAR_26 = VAR_25 - VAR_13;
     FUNC_16(VAR_24, VAR_13, VAR_26);
     FUNC_7(VAR_24);

     VAR_26++;

     FUNC_4(VAR_13, VAR_13 + VAR_26, VAR_19 - VAR_26);
     VAR_19 -= VAR_26;
    } else if (VAR_19 == VAR_11 - 1 || !VAR_17) {

     FUNC_16(VAR_24, VAR_13, VAR_19);
     VAR_19 = 0;
    }
   }
  }
 }

 if (VAR_20) {
  if (VAR_22) {
   FUNC_14(VAR_24, ((void*)0), ", pipe is closed");
   FUNC_7(VAR_24);
  }
  if (VAR_20 < 0) {
   FUNC_6(VAR_4, "unable to read what child say");
  }

  FUNC_1(VAR_16);

  if (VAR_15) {
   FUNC_0(VAR_14->fd_stdout);
   VAR_14->fd_stdout = -1;
  } else {
   FUNC_0(VAR_14->fd_stderr);
   VAR_14->fd_stderr = -1;
  }
 } else if (VAR_21) {
  FUNC_7(VAR_24);
 }
}
