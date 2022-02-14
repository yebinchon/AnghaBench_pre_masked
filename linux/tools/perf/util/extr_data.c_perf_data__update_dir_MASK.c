
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {int st_size; } ;
struct perf_data_file {int size; int fd; } ;
struct TYPE_2__ {int nr; struct perf_data_file* files; } ;
struct perf_data {TYPE_1__ dir; int is_dir; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,struct stat*) ;

int FUNC_2(struct perf_data *VAR_1)
{
 int VAR_2;

 if (FUNC_0(!VAR_1->is_dir))
  return -VAR_0;

 for (VAR_2 = 0; VAR_2 < VAR_1->dir.nr; VAR_2++) {
  struct perf_data_file *VAR_3 = &VAR_1->dir.files[VAR_2];
  struct stat VAR_4;

  if (FUNC_1(VAR_3->fd, &VAR_4))
   return -1;

  VAR_3->size = VAR_4.st_size;
 }

 return 0;
}
