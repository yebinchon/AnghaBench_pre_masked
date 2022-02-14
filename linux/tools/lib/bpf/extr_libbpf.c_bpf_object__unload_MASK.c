
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bpf_object {size_t nr_maps; size_t nr_programs; int * programs; TYPE_1__* maps; } ;
struct TYPE_2__ {int fd; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct bpf_object *VAR_1)
{
 size_t VAR_2;

 if (!VAR_1)
  return -VAR_0;

 for (VAR_2 = 0; VAR_2 < VAR_1->nr_maps; VAR_2++)
  FUNC_1(VAR_1->maps[VAR_2].fd);

 for (VAR_2 = 0; VAR_2 < VAR_1->nr_programs; VAR_2++)
  FUNC_0(&VAR_1->programs[VAR_2]);

 return 0;
}
