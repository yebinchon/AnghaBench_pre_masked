
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nr; int * fds; } ;
struct bpf_program {int * line_info; int * func_info; TYPE_1__ instances; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int **) ;

void FUNC_3(struct bpf_program *VAR_0)
{
 int VAR_1;

 if (!VAR_0)
  return;





 if (VAR_0->instances.nr > 0) {
  for (VAR_1 = 0; VAR_1 < VAR_0->instances.nr; VAR_1++)
   FUNC_1(VAR_0->instances.fds[VAR_1]);
 } else if (VAR_0->instances.nr != -1) {
  FUNC_0("Internal error: instances.nr is %d\n",
      VAR_0->instances.nr);
 }

 VAR_0->instances.nr = -1;
 FUNC_2(&VAR_0->instances.fds);

 FUNC_2(&VAR_0->func_info);
 FUNC_2(&VAR_0->line_info);
}
