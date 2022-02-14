
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_data_file {int path; int fd; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct perf_data_file*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct perf_data_file *VAR_0, int VAR_1)
{
 while (--VAR_1 >= 1) {
  FUNC_0(VAR_0[VAR_1].fd);
  FUNC_2(&VAR_0[VAR_1].path);
 }
 FUNC_1(VAR_0);
}
