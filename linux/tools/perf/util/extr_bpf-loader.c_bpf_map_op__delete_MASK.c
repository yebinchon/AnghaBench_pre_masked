
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int array; } ;
struct bpf_map_op {scalar_t__ key_type; TYPE_1__ k; int list; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bpf_map_op*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct bpf_map_op *VAR_1)
{
 if (!FUNC_2(&VAR_1->list))
  FUNC_1(&VAR_1->list);
 if (VAR_1->key_type == VAR_0)
  FUNC_3(&VAR_1->k.array);
 FUNC_0(VAR_1);
}
