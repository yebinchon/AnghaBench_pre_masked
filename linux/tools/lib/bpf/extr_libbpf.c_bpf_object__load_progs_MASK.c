
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bpf_object {size_t nr_programs; int kern_version; int license; TYPE_1__* programs; } ;
struct TYPE_3__ {int log_level; } ;


 scalar_t__ FUNC_0 (TYPE_1__*,struct bpf_object*) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct bpf_object *VAR_0, int VAR_1)
{
 size_t VAR_2;
 int VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0->nr_programs; VAR_2++) {
  if (FUNC_0(&VAR_0->programs[VAR_2], VAR_0))
   continue;
  VAR_0->programs[VAR_2].log_level |= VAR_1;
  VAR_3 = FUNC_1(&VAR_0->programs[VAR_2],
     VAR_0->license,
     VAR_0->kern_version);
  if (VAR_3)
   return VAR_3;
 }
 return 0;
}
