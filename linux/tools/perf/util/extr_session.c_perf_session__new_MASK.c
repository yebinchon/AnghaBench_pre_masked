
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct perf_tool {int ordered_events; scalar_t__ ordering_requires_timestamps; } ;
struct TYPE_5__ {int * env; int single_address_space; } ;
struct TYPE_6__ {TYPE_2__ host; } ;
struct TYPE_4__ {int env; } ;
struct perf_session {int repipe; int evlist; TYPE_3__ machines; struct perf_data* data; TYPE_1__ header; int ordered_events; int auxtrace_index; struct perf_tool* tool; } ;
struct perf_data {int is_pipe; scalar_t__ is_dir; } ;


 int VAR_0 ;
 struct perf_session* FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_4 (int *,int ,int *) ;
 scalar_t__ FUNC_5 (struct perf_data*) ;
 scalar_t__ FUNC_6 (struct perf_data*) ;
 int FUNC_7 (struct perf_data*) ;
 int FUNC_8 (struct perf_data*) ;
 int VAR_2 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (struct perf_session*) ;
 int FUNC_14 (struct perf_session*) ;
 int FUNC_15 (struct perf_session*) ;
 int FUNC_16 (struct perf_session*) ;
 int FUNC_17 (struct perf_session*) ;
 int FUNC_18 (char*) ;
 struct perf_session* FUNC_19 (int) ;

struct perf_session *FUNC_20(struct perf_data *VAR_3,
           bool VAR_4, struct perf_tool *VAR_5)
{
 int VAR_6 = -VAR_0;
 struct perf_session *VAR_7 = FUNC_19(sizeof(*VAR_7));

 if (!VAR_7)
  goto out;

 VAR_7->repipe = VAR_4;
 VAR_7->tool = VAR_5;
 FUNC_1(&VAR_7->auxtrace_index);
 FUNC_3(&VAR_7->machines);
 FUNC_4(&VAR_7->ordered_events,
        VAR_1, ((void*)0));

 FUNC_9(&VAR_7->header.env);
 if (VAR_3) {
  VAR_6 = FUNC_7(VAR_3);
  if (VAR_6 < 0)
   goto out_delete;

  VAR_7->data = VAR_3;

  if (FUNC_5(VAR_3)) {
   VAR_6 = FUNC_15(VAR_7);
   if (VAR_6 < 0)
    goto out_delete;





   if (!VAR_3->is_pipe) {
    FUNC_17(VAR_7);
    FUNC_16(VAR_7);
   }

   FUNC_11(VAR_7->evlist);


   if (VAR_3->is_dir) {
    VAR_6 = FUNC_8(VAR_3);
   if (VAR_6)
    goto out_delete;
   }
  }
 } else {
  VAR_7->machines.host.env = &VAR_2;
 }

 VAR_7->machines.host.single_address_space =
  FUNC_10(VAR_7->machines.host.env);

 if (!VAR_3 || FUNC_6(VAR_3)) {




  if (FUNC_13(VAR_7) < 0)
   FUNC_18("Cannot read kernel map\n");
 }





 if ((!VAR_3 || !VAR_3->is_pipe) && VAR_5 && VAR_5->ordering_requires_timestamps &&
     VAR_5->ordered_events && !FUNC_12(VAR_7->evlist)) {
  FUNC_2("WARNING: No sample_id_all support, falling back to unordered processing\n");
  VAR_5->ordered_events = 0;
 }

 return VAR_7;

 out_delete:
 FUNC_14(VAR_7);
 out:
 return FUNC_0(VAR_6);
}
