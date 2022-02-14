
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {int st_size; int st_mode; } ;
struct perf_data_file {int fd; int size; int path; } ;
struct TYPE_2__ {scalar_t__ version; int nr; struct perf_data_file* files; } ;
struct perf_data {char* path; TYPE_1__ dir; int is_dir; } ;
struct dirent {char* d_name; } ;
typedef int path ;
typedef int DIR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct perf_data_file*,int) ;
 int FUNC_3 (int ,int ) ;
 int * FUNC_4 (char*) ;
 struct dirent* FUNC_5 (int *) ;
 struct perf_data_file* FUNC_6 (struct perf_data_file*,int) ;
 int FUNC_7 (char*,int,char*,char*,char*) ;
 scalar_t__ FUNC_8 (char*,struct stat*) ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (char*,char*,int) ;

int FUNC_11(struct perf_data *VAR_5)
{
 struct perf_data_file *VAR_6 = ((void*)0);
 struct dirent *VAR_7;
 int VAR_8 = -1;
 DIR *VAR_9;
 int VAR_10 = 0;

 if (FUNC_1(!VAR_5->is_dir))
  return -VAR_0;


 if (FUNC_1(VAR_5->dir.version != VAR_4))
  return -1;

 VAR_9 = FUNC_4(VAR_5->path);
 if (!VAR_9)
  return -VAR_0;

 while ((VAR_7 = FUNC_5(VAR_9)) != ((void*)0)) {
  struct perf_data_file *VAR_11;
  char VAR_12[VAR_3];
  struct stat VAR_13;

  FUNC_7(VAR_12, sizeof(VAR_12), "%s/%s", VAR_5->path, VAR_7->d_name);
  if (FUNC_8(VAR_12, &VAR_13))
   continue;

  if (!FUNC_0(VAR_13.st_mode) || FUNC_10(VAR_7->d_name, "data", 4))
   continue;

  VAR_8 = -VAR_1;

  VAR_11 = FUNC_6(VAR_6, (VAR_10 + 1) * sizeof(*VAR_6));
  if (!VAR_11)
   goto out_err;

  VAR_6 = VAR_11;
  VAR_11 = &VAR_6[VAR_10++];

  VAR_11->path = FUNC_9(VAR_12);
  if (!VAR_11->path)
   goto out_err;

  VAR_8 = FUNC_3(VAR_11->path, VAR_2);
  if (VAR_8 < 0)
   goto out_err;

  VAR_11->fd = VAR_8;
  VAR_11->size = VAR_13.st_size;
 }

 if (!VAR_6)
  return -VAR_0;

 VAR_5->dir.files = VAR_6;
 VAR_5->dir.nr = VAR_10;
 return 0;

out_err:
 FUNC_2(VAR_6, VAR_10);
 return VAR_8;
}
