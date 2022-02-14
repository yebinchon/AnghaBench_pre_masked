
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timechart {scalar_t__ skip_eagain; struct per_pid* all_data; } ;
struct per_pidcomm {int Y; double max_bytes; double total_bytes; struct per_pidcomm* next; int start_time; scalar_t__ comm; struct io_sample* io_samples; int end_time; int display; } ;
struct per_pid {int pid; struct per_pid* next; struct per_pidcomm* all; } ;
struct io_sample {scalar_t__ type; int merges; scalar_t__ err; int fd; int end_time; int start_time; scalar_t__ bytes; struct io_sample* next; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*,char*,char*,int,double,char const*) ;
 int FUNC_1 (int,int ,int ,char*) ;
 int FUNC_2 (int,int ,int ,int,char*,int ,scalar_t__,int ) ;
 int FUNC_3 (int,int ,int ,double,char*,int ,scalar_t__,int ) ;
 int FUNC_4 (int,int ,char*) ;
 int FUNC_5 (int,int ,int ,double,char*,int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_6(struct timechart *VAR_7)
{
 const char *VAR_8;
 double VAR_9;
 char VAR_10[256];
 struct per_pid *VAR_11;
 struct per_pidcomm *VAR_12;
 struct io_sample *VAR_13;
 int VAR_14 = 1;

 VAR_11 = VAR_7->all_data;
 while (VAR_11) {
  VAR_12 = VAR_11->all;
  while (VAR_12) {
   if (!VAR_12->display) {
    VAR_12->Y = 0;
    VAR_12 = VAR_12->next;
    continue;
   }

   FUNC_1(VAR_14, VAR_12->start_time, VAR_12->end_time, "process3");
   VAR_13 = VAR_12->io_samples;
   for (VAR_13 = VAR_12->io_samples; VAR_13; VAR_13 = VAR_13->next) {
    double VAR_15 = (double)VAR_13->bytes / VAR_12->max_bytes;

    if (VAR_7->skip_eagain &&
        VAR_13->err == -VAR_0)
     continue;

    if (VAR_13->err)
     VAR_15 = 1;

    if (VAR_13->type == VAR_4)
     FUNC_2(VAR_14,
      VAR_13->start_time,
      VAR_13->end_time,
      1,
      VAR_13->err ? "error" : "sync",
      VAR_13->fd,
      VAR_13->err,
      VAR_13->merges);
    else if (VAR_13->type == VAR_1)
     FUNC_2(VAR_14,
      VAR_13->start_time,
      VAR_13->end_time,
      1,
      VAR_13->err ? "error" : "poll",
      VAR_13->fd,
      VAR_13->err,
      VAR_13->merges);
    else if (VAR_13->type == VAR_2)
     FUNC_5(VAR_14,
      VAR_13->start_time,
      VAR_13->end_time,
      VAR_15,
      VAR_13->err ? "error" : "disk",
      VAR_13->fd,
      VAR_13->err,
      VAR_13->merges);
    else if (VAR_13->type == VAR_6)
     FUNC_3(VAR_14,
      VAR_13->start_time,
      VAR_13->end_time,
      VAR_15,
      VAR_13->err ? "error" : "disk",
      VAR_13->fd,
      VAR_13->err,
      VAR_13->merges);
    else if (VAR_13->type == VAR_3)
     FUNC_5(VAR_14,
      VAR_13->start_time,
      VAR_13->end_time,
      VAR_15,
      VAR_13->err ? "error" : "net",
      VAR_13->fd,
      VAR_13->err,
      VAR_13->merges);
    else if (VAR_13->type == VAR_5)
     FUNC_3(VAR_14,
      VAR_13->start_time,
      VAR_13->end_time,
      VAR_15,
      VAR_13->err ? "error" : "net",
      VAR_13->fd,
      VAR_13->err,
      VAR_13->merges);
   }

   VAR_8 = "";
   VAR_9 = VAR_12->total_bytes;
   if (VAR_9 > 1024) {
    VAR_9 = VAR_9 / 1024;
    VAR_8 = "K";
   }
   if (VAR_9 > 1024) {
    VAR_9 = VAR_9 / 1024;
    VAR_8 = "M";
   }
   if (VAR_9 > 1024) {
    VAR_9 = VAR_9 / 1024;
    VAR_8 = "G";
   }


   FUNC_0(VAR_10, "%s:%i (%3.1f %sbytes)", VAR_12->comm ?: "", VAR_11->pid, VAR_9, VAR_8);
   FUNC_4(VAR_14, VAR_12->start_time, VAR_10);

   VAR_12->Y = VAR_14;
   VAR_14++;
   VAR_12 = VAR_12->next;
  }
  VAR_11 = VAR_11->next;
 }
}
