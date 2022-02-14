
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int timestamp ;
struct TYPE_8__ {int target; } ;
struct TYPE_7__ {int num_files; int cur_file; char** filenames; } ;
struct perf_data {char* path; } ;
struct record {TYPE_4__ opts; TYPE_3__ switch_output; TYPE_2__* session; scalar_t__ bytes_written; scalar_t__ samples; struct perf_data data; } ;
struct TYPE_5__ {scalar_t__ data_size; int data_offset; } ;
struct TYPE_6__ {TYPE_1__ header; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,char*,char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct perf_data*,char*,int ,int,char**) ;
 int FUNC_4 (char*) ;
 int VAR_1 ;
 int FUNC_5 (struct record*) ;
 int FUNC_6 (struct record*) ;
 int FUNC_7 (struct record*,int) ;
 int FUNC_8 (struct record*,int) ;
 int FUNC_9 (char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (char**) ;

__attribute__((used)) static int
FUNC_12(struct record *VAR_3, bool VAR_4)
{
 struct perf_data *VAR_5 = &VAR_3->data;
 int VAR_6, VAR_7;
 char *VAR_8;


 char VAR_9[] = "InvalidTimestamp";

 FUNC_5(VAR_3);

 FUNC_7(VAR_3, 1);
 if (FUNC_10(&VAR_3->opts.target))
  FUNC_8(VAR_3, 1);

 VAR_3->samples = 0;
 FUNC_6(VAR_3);
 VAR_7 = FUNC_0(VAR_9, sizeof(VAR_9));
 if (VAR_7) {
  FUNC_4("Failed to get current timestamp\n");
  return -VAR_0;
 }

 VAR_6 = FUNC_3(VAR_5, VAR_9,
        VAR_3->session->header.data_offset,
        VAR_4, &VAR_8);
 if (VAR_6 >= 0 && !VAR_4) {
  VAR_3->bytes_written = 0;
  VAR_3->session->header.data_size = 0;
 }

 if (!VAR_1)
  FUNC_1(VAR_2, "[ perf record: Dump %s.%s ]\n",
   VAR_5->path, VAR_9);

 if (VAR_3->switch_output.num_files) {
  int VAR_10 = VAR_3->switch_output.cur_file + 1;

  if (VAR_10 >= VAR_3->switch_output.num_files)
   VAR_10 = 0;
  VAR_3->switch_output.cur_file = VAR_10;
  if (VAR_3->switch_output.filenames[VAR_10]) {
   FUNC_9(VAR_3->switch_output.filenames[VAR_10]);
   FUNC_11(&VAR_3->switch_output.filenames[VAR_10]);
  }
  VAR_3->switch_output.filenames[VAR_10] = VAR_8;
 } else {
  FUNC_2(VAR_8);
 }


 if (!VAR_4) {
  FUNC_7(VAR_3, 0);
  if (FUNC_10(&VAR_3->opts.target))
   FUNC_8(VAR_3, 0);
 }
 return VAR_6;
}
