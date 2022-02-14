
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_18__ {int pevent; } ;
struct TYPE_12__ {int * env; } ;
struct TYPE_13__ {TYPE_1__ host; } ;
struct perf_header {scalar_t__ needs_swap; int env; } ;
struct perf_session {TYPE_8__* evlist; TYPE_7__ tevent; TYPE_2__ machines; struct perf_header header; struct perf_data* data; } ;
struct TYPE_16__ {int size; int offset; } ;
struct TYPE_14__ {scalar_t__ size; } ;
struct perf_file_header {int attr_size; TYPE_5__ attrs; TYPE_3__ data; } ;
struct TYPE_17__ {int size; int offset; } ;
struct perf_file_attr {TYPE_6__ ids; int attr; } ;
struct TYPE_15__ {int path; } ;
struct perf_data {TYPE_4__ file; } ;
struct evsel {int core; scalar_t__ needs_swap; } ;
typedef int off_t ;
typedef int f_id ;
struct TYPE_19__ {int core; int * env; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (TYPE_8__*,struct evsel*) ;
 int FUNC_2 (TYPE_8__*) ;
 TYPE_8__* FUNC_3 () ;
 struct evsel* FUNC_4 (int *) ;
 int FUNC_5 (int,int,int ) ;
 int FUNC_6 (struct perf_data*) ;
 scalar_t__ FUNC_7 (struct perf_data*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int ,int,int ) ;
 scalar_t__ FUNC_10 (TYPE_8__*,int ) ;
 scalar_t__ FUNC_11 (int *,int,int) ;
 scalar_t__ FUNC_12 (struct perf_file_header*,struct perf_header*,int) ;
 int VAR_5 ;
 scalar_t__ FUNC_13 (struct perf_header*,int,int *,int) ;
 int FUNC_14 (struct perf_header*,int,TYPE_7__*,int ) ;
 int FUNC_15 (struct perf_session*) ;
 int FUNC_16 (char*,int ) ;
 int FUNC_17 (char*,int ) ;
 scalar_t__ FUNC_18 (int,struct perf_header*,struct perf_file_attr*) ;

int FUNC_19(struct perf_session *VAR_6)
{
 struct perf_data *VAR_7 = VAR_6->data;
 struct perf_header *VAR_8 = &VAR_6->header;
 struct perf_file_header VAR_9;
 struct perf_file_attr VAR_10;
 u64 VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15;
 int VAR_16 = FUNC_6(VAR_7);

 VAR_6->evlist = FUNC_3();
 if (VAR_6->evlist == ((void*)0))
  return -VAR_1;

 VAR_6->evlist->env = &VAR_8->env;
 VAR_6->machines.host.env = &VAR_8->env;
 if (FUNC_7(VAR_7))
  return FUNC_15(VAR_6);

 if (FUNC_12(&VAR_9, VAR_8, VAR_16) < 0)
  return -VAR_0;







 if (VAR_9.data.size == 0) {
  FUNC_17("WARNING: The %s file's data size field is 0 which is unexpected.\n"
      "Was the 'perf record' command properly terminated?\n",
      VAR_7->file.path);
 }

 if (VAR_9.attr_size == 0) {
  FUNC_16("ERROR: The %s file's attr size field is 0 which is unexpected.\n"
         "Was the 'perf record' command properly terminated?\n",
         VAR_7->file.path);
  return -VAR_0;
 }

 VAR_12 = VAR_9.attrs.size / VAR_9.attr_size;
 FUNC_5(VAR_16, VAR_9.attrs.offset, VAR_3);

 for (VAR_14 = 0; VAR_14 < VAR_12; VAR_14++) {
  struct evsel *VAR_17;
  off_t VAR_18;

  if (FUNC_18(VAR_16, VAR_8, &VAR_10) < 0)
   goto out_errno;

  if (VAR_8->needs_swap) {
   VAR_10.ids.size = FUNC_0(VAR_10.ids.size);
   VAR_10.ids.offset = FUNC_0(VAR_10.ids.offset);
   FUNC_8(&VAR_10.attr);
  }

  VAR_18 = FUNC_5(VAR_16, 0, VAR_2);
  VAR_17 = FUNC_4(&VAR_10.attr);

  if (VAR_17 == ((void*)0))
   goto out_delete_evlist;

  VAR_17->needs_swap = VAR_8->needs_swap;




  FUNC_1(VAR_6->evlist, VAR_17);

  VAR_13 = VAR_10.ids.size / sizeof(u64);





  if (FUNC_11(&VAR_17->core, 1, VAR_13))
   goto out_delete_evlist;

  FUNC_5(VAR_16, VAR_10.ids.offset, VAR_3);

  for (VAR_15 = 0; VAR_15 < VAR_13; VAR_15++) {
   if (FUNC_13(VAR_8, VAR_16, &VAR_11, sizeof(VAR_11)))
    goto out_errno;

   FUNC_9(&VAR_6->evlist->core, &VAR_17->core, 0, VAR_15, VAR_11);
  }

  FUNC_5(VAR_16, VAR_18, VAR_3);
 }

 FUNC_14(VAR_8, VAR_16, &VAR_6->tevent,
          VAR_5);

 if (FUNC_10(VAR_6->evlist,
         VAR_6->tevent.pevent))
  goto out_delete_evlist;

 return 0;
out_errno:
 return -VAR_4;

out_delete_evlist:
 FUNC_2(VAR_6->evlist);
 VAR_6->evlist = ((void*)0);
 return -VAR_1;
}
