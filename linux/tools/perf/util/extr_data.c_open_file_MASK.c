
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fd; int path; } ;
struct perf_data {TYPE_1__ file; } ;


 int FUNC_0 (struct perf_data*) ;
 int FUNC_1 (struct perf_data*) ;
 scalar_t__ FUNC_2 (struct perf_data*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct perf_data *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_2(VAR_0) ?
      FUNC_0(VAR_0) : FUNC_1(VAR_0);

 if (VAR_1 < 0) {
  FUNC_3(&VAR_0->file.path);
  return -1;
 }

 VAR_0->file.fd = VAR_1;
 return 0;
}
