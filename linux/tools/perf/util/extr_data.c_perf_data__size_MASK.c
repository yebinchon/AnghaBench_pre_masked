
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long u64 ;
struct perf_data_file {scalar_t__ size; } ;
struct TYPE_4__ {int nr; struct perf_data_file* files; } ;
struct TYPE_3__ {unsigned long size; } ;
struct perf_data {TYPE_2__ dir; int is_dir; TYPE_1__ file; } ;



unsigned long FUNC_0(struct perf_data *VAR_0)
{
 u64 VAR_1 = VAR_0->file.size;
 int VAR_2;

 if (!VAR_0->is_dir)
  return VAR_1;

 for (VAR_2 = 0; VAR_2 < VAR_0->dir.nr; VAR_2++) {
  struct perf_data_file *VAR_3 = &VAR_0->dir.files[VAR_2];

  VAR_1 += VAR_3->size;
 }

 return VAR_1;
}
