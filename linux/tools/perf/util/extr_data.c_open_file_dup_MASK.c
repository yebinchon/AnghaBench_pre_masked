
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int path; } ;
struct perf_data {TYPE_1__ file; int path; } ;


 int VAR_0 ;
 int FUNC_0 (struct perf_data*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct perf_data *VAR_1)
{
 VAR_1->file.path = FUNC_1(VAR_1->path);
 if (!VAR_1->file.path)
  return -VAR_0;

 return FUNC_0(VAR_1);
}
