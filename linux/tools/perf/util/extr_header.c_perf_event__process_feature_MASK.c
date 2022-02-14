
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ size; } ;
union perf_event {TYPE_2__ header; } ;
typedef size_t u64 ;
struct perf_tool {scalar_t__ show_feat_hdr; } ;
struct perf_session {int header; struct perf_tool* tool; } ;
struct TYPE_4__ {int type; } ;
struct perf_record_header_feature {size_t feat_id; scalar_t__ data; TYPE_1__ header; } ;
struct feat_fd {int * ph; scalar_t__ size; void* buf; int fd; } ;
struct TYPE_6__ {char* name; int (* print ) (struct feat_fd*,int ) ;int full_only; scalar_t__ (* process ) (struct feat_fd*,int *) ;} ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_3__* VAR_4 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (char*,int) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (struct feat_fd*,int *) ;
 int FUNC_3 (struct feat_fd*,int ) ;

int FUNC_4(struct perf_session *VAR_6,
    union perf_event *VAR_7)
{
 struct perf_tool *VAR_8 = VAR_6->tool;
 struct feat_fd VAR_9 = { .fd = 0 };
 struct perf_record_header_feature *VAR_10 = (struct perf_record_header_feature *)VAR_7;
 int VAR_11 = VAR_10->header.type;
 u64 VAR_12 = VAR_10->feat_id;

 if (VAR_11 < 0 || VAR_11 >= VAR_2) {
  FUNC_1("invalid record type %d in pipe-mode\n", VAR_11);
  return 0;
 }
 if (VAR_12 == VAR_1 || VAR_12 >= VAR_0) {
  FUNC_1("invalid record type %d in pipe-mode\n", VAR_11);
  return -1;
 }

 if (!VAR_4[VAR_12].process)
  return 0;

 VAR_9.buf = (void *)VAR_10->data;
 VAR_9.size = VAR_7->header.size - sizeof(*VAR_10);
 VAR_9.ph = &VAR_6->header;

 if (VAR_4[VAR_12].process(&VAR_9, ((void*)0)))
  return -1;

 if (!VAR_4[VAR_12].print || !VAR_8->show_feat_hdr)
  return 0;

 if (!VAR_4[VAR_12].full_only ||
     VAR_8->show_feat_hdr >= VAR_3) {
  VAR_4[VAR_12].print(&VAR_9, VAR_5);
 } else {
  FUNC_0(VAR_5, "# %s info available, use -I to display\n",
   VAR_4[VAR_12].name);
 }

 return 0;
}
