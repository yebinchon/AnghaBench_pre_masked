
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int path; } ;
struct perf_data {int path; TYPE_1__ file; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,char*,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct perf_data*) ;
 scalar_t__ FUNC_3 (struct perf_data*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct perf_data *VAR_1)
{
 int VAR_2;





 if (FUNC_0(&VAR_1->file.path, "%d/header", VAR_1->path) < 0)
  return -1;

 if (FUNC_3(VAR_1) &&
     FUNC_1(VAR_1->path, VAR_0) < 0)
  return -1;

 VAR_2 = FUNC_2(VAR_1);


 if (VAR_2 && FUNC_3(VAR_1))
  FUNC_4(VAR_1->path);

 return VAR_2;
}
