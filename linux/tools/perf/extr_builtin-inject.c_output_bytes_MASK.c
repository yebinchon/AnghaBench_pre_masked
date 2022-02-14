
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_inject {int bytes_written; int output; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,void*,size_t) ;

__attribute__((used)) static int FUNC_1(struct perf_inject *VAR_1, void *VAR_2, size_t VAR_3)
{
 ssize_t VAR_4;

 VAR_4 = FUNC_0(&VAR_1->output, VAR_2, VAR_3);
 if (VAR_4 < 0)
  return -VAR_0;

 VAR_1->bytes_written += VAR_4;
 return 0;
}
