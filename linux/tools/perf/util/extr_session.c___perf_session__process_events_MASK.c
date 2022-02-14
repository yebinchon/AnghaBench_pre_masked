
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ui_progress {int dummy; } ;
struct reader {scalar_t__ data_size; int process; int data_offset; int fd; } ;
struct perf_tool {int no_warn; } ;
struct ordered_events {int dummy; } ;
struct TYPE_2__ {scalar_t__ data_size; int data_offset; } ;
struct perf_session {int one_mmap; struct ordered_events ordered_events; struct perf_tool* tool; TYPE_1__ header; int data; } ;


 int VAR_0 ;
 int FUNC_0 (struct perf_session*,struct perf_tool*) ;
 int FUNC_1 (struct perf_session*) ;
 int FUNC_2 (struct ordered_events*,int ) ;
 int FUNC_3 (struct ordered_events*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct perf_session*) ;
 int FUNC_6 (struct perf_session*) ;
 int FUNC_7 (struct perf_tool*) ;
 int VAR_1 ;
 int FUNC_8 (struct reader*,struct perf_session*,struct ui_progress*) ;
 int FUNC_9 () ;
 int FUNC_10 (struct ui_progress*,scalar_t__,char*) ;

__attribute__((used)) static int FUNC_11(struct perf_session *VAR_2)
{
 struct reader VAR_3 = {
  .fd = FUNC_4(VAR_2->data),
  .data_size = VAR_2->header.data_size,
  .data_offset = VAR_2->header.data_offset,
  .process = VAR_1,
 };
 struct ordered_events *VAR_4 = &VAR_2->ordered_events;
 struct perf_tool *VAR_5 = VAR_2->tool;
 struct ui_progress VAR_6;
 int VAR_7;

 FUNC_7(VAR_5);

 if (VAR_3.data_size == 0)
  return -1;

 FUNC_10(&VAR_6, VAR_3.data_size, "Processing events...");

 VAR_7 = FUNC_8(&VAR_3, VAR_2, &VAR_6);
 if (VAR_7)
  goto out_err;

 VAR_7 = FUNC_2(VAR_4, VAR_0);
 if (VAR_7)
  goto out_err;
 VAR_7 = FUNC_0(VAR_2, VAR_5);
 if (VAR_7)
  goto out_err;
 VAR_7 = FUNC_5(VAR_2);
out_err:
 FUNC_9();
 if (!VAR_5->no_warn)
  FUNC_6(VAR_2);




 FUNC_3(&VAR_2->ordered_events);
 FUNC_1(VAR_2);
 VAR_2->one_mmap = 0;
 return VAR_7;
}
