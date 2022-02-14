
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread_data {int dummy; } ;
struct pkg_data {int dummy; } ;
struct core_data {int dummy; } ;
struct TYPE_2__ {int packages; int cores; int threads; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int (*) (int *,int *,int *),struct thread_data*,struct core_data*,struct pkg_data*) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_1 ;

void FUNC_3(struct thread_data *VAR_2, struct core_data *VAR_3, struct pkg_data *VAR_4)
{
 static int VAR_5;

 if (!VAR_5 || !VAR_1)
  FUNC_2("\t");

 FUNC_1(&VAR_0.threads, &VAR_0.cores, &VAR_0.packages);

 VAR_5 = 1;

 if (VAR_1)
  return;

 FUNC_0(FUNC_1, VAR_2, VAR_3, VAR_4);
}
