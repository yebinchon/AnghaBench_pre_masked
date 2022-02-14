
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct timechart {int dummy; } ;
struct per_pidcomm {scalar_t__ start_time; struct io_sample* io_samples; struct per_pidcomm* next; } ;
struct per_pid {struct per_pidcomm* all; struct per_pidcomm* current; } ;
struct io_sample {int type; int fd; struct io_sample* next; scalar_t__ start_time; int end_time; } ;


 int VAR_0 ;
 struct per_pid* FUNC_0 (struct timechart*,int) ;
 int FUNC_1 (struct io_sample*) ;
 int FUNC_2 (char*) ;
 void* FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct timechart *VAR_1, int VAR_2, int VAR_3,
          u64 VAR_4, int VAR_5)
{
 struct per_pid *VAR_6 = FUNC_0(VAR_1, VAR_2);
 struct per_pidcomm *VAR_7 = VAR_6->current;
 struct io_sample *VAR_8;
 struct io_sample *VAR_9;

 if (!VAR_7) {
  VAR_7 = FUNC_3(sizeof(*VAR_7));
  if (!VAR_7)
   return -VAR_0;
  VAR_6->current = VAR_7;
  VAR_7->next = VAR_6->all;
  VAR_6->all = VAR_7;
 }

 VAR_9 = VAR_7->io_samples;

 if (VAR_9 && VAR_9->start_time && !VAR_9->end_time) {
  FUNC_2("Skip invalid start event: "
      "previous event already started!\n");



  VAR_7->io_samples = VAR_9->next;
  FUNC_1(VAR_9);
  return 0;
 }

 VAR_8 = FUNC_3(sizeof(*VAR_8));
 if (!VAR_8)
  return -VAR_0;
 VAR_8->start_time = VAR_4;
 VAR_8->type = VAR_3;
 VAR_8->fd = VAR_5;
 VAR_8->next = VAR_7->io_samples;
 VAR_7->io_samples = VAR_8;

 if (VAR_7->start_time == 0 || VAR_7->start_time > VAR_4)
  VAR_7->start_time = VAR_4;

 return 0;
}
