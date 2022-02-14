
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* data; TYPE_2__* rodata; } ;
struct bpf_object {size_t nr_maps; size_t nr_programs; int list; TYPE_2__* programs; TYPE_2__* maps; TYPE_1__ sections; int btf_ext; int btf; int priv; int (* clear_priv ) (struct bpf_object*,int ) ;} ;
struct TYPE_6__ {int (* clear_priv ) (TYPE_2__*,int *) ;int * priv; struct TYPE_6__* name; } ;


 int FUNC_0 (struct bpf_object*) ;
 int FUNC_1 (struct bpf_object*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct bpf_object*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct bpf_object*,int ) ;
 int FUNC_8 (TYPE_2__*,int *) ;
 int FUNC_9 (TYPE_2__**) ;

void FUNC_10(struct bpf_object *VAR_0)
{
 size_t VAR_1;

 if (!VAR_0)
  return;

 if (VAR_0->clear_priv)
  VAR_0->clear_priv(VAR_0, VAR_0->priv);

 FUNC_0(VAR_0);
 FUNC_1(VAR_0);
 FUNC_3(VAR_0->btf);
 FUNC_4(VAR_0->btf_ext);

 for (VAR_1 = 0; VAR_1 < VAR_0->nr_maps; VAR_1++) {
  FUNC_9(&VAR_0->maps[VAR_1].name);
  if (VAR_0->maps[VAR_1].clear_priv)
   VAR_0->maps[VAR_1].clear_priv(&VAR_0->maps[VAR_1],
      VAR_0->maps[VAR_1].priv);
  VAR_0->maps[VAR_1].priv = ((void*)0);
  VAR_0->maps[VAR_1].clear_priv = ((void*)0);
 }

 FUNC_9(&VAR_0->sections.rodata);
 FUNC_9(&VAR_0->sections.data);
 FUNC_9(&VAR_0->maps);
 VAR_0->nr_maps = 0;

 if (VAR_0->programs && VAR_0->nr_programs) {
  for (VAR_1 = 0; VAR_1 < VAR_0->nr_programs; VAR_1++)
   FUNC_2(&VAR_0->programs[VAR_1]);
 }
 FUNC_9(&VAR_0->programs);

 FUNC_6(&VAR_0->list);
 FUNC_5(VAR_0);
}
