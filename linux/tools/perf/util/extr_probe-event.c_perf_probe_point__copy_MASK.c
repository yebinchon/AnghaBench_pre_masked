
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_probe_point {int offset; int retprobe; int line; void* lazy_line; void* function; void* file; } ;


 int VAR_0 ;
 int FUNC_0 (struct perf_probe_point*) ;
 int VAR_1 ;
 void* FUNC_1 (void*,int ) ;

__attribute__((used)) static int FUNC_2(struct perf_probe_point *VAR_2,
      struct perf_probe_point *VAR_3)
{
 VAR_2->file = FUNC_1(VAR_3->file, VAR_1);
 VAR_2->function = FUNC_1(VAR_3->function, VAR_1);
 VAR_2->lazy_line = FUNC_1(VAR_3->lazy_line, VAR_1);
 VAR_2->line = VAR_3->line;
 VAR_2->retprobe = VAR_3->retprobe;
 VAR_2->offset = VAR_3->offset;
 return 0;

out_err:
 FUNC_0(VAR_2);
 return -VAR_0;
}
