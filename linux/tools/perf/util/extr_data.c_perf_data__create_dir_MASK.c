
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_data_file {int fd; int path; } ;
struct TYPE_2__ {int nr; struct perf_data_file* files; int version; } ;
struct perf_data {int path; TYPE_1__ dir; int is_dir; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,char*,int ,int) ;
 int FUNC_2 (struct perf_data_file*,int) ;
 int FUNC_3 (int ,int,int) ;
 struct perf_data_file* FUNC_4 (int) ;

int FUNC_5(struct perf_data *VAR_8, int VAR_9)
{
 struct perf_data_file *VAR_10 = ((void*)0);
 int VAR_11, VAR_12 = -1;

 if (FUNC_0(!VAR_8->is_dir))
  return -VAR_0;

 VAR_10 = FUNC_4(VAR_9 * sizeof(*VAR_10));
 if (!VAR_10)
  return -VAR_1;

 VAR_8->dir.version = VAR_5;
 VAR_8->dir.files = VAR_10;
 VAR_8->dir.nr = VAR_9;

 for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
  struct perf_data_file *VAR_13 = &VAR_10[VAR_11];

  if (FUNC_1(&VAR_13->path, "%d/data.%d", VAR_8->path, VAR_11) < 0)
   goto out_err;

  VAR_12 = FUNC_3(VAR_13->path, VAR_3|VAR_2|VAR_4, VAR_6|VAR_7);
  if (VAR_12 < 0)
   goto out_err;

  VAR_13->fd = VAR_12;
 }

 return 0;

out_err:
 FUNC_2(VAR_10, VAR_11);
 return VAR_12;
}
