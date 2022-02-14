
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nr_ranges; struct bpf_map_op* ranges; } ;
struct TYPE_4__ {TYPE_1__ array; } ;
struct bpf_map_op {scalar_t__ key_type; TYPE_2__ k; int list; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct bpf_map_op*) ;
 void* FUNC_2 (struct bpf_map_op*,size_t) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static struct bpf_map_op *
FUNC_4(struct bpf_map_op *VAR_1)
{
 struct bpf_map_op *VAR_2;

 VAR_2 = FUNC_2(VAR_1, sizeof(*VAR_1));
 if (!VAR_2) {
  FUNC_3("Failed to alloc bpf_map_op\n");
  return ((void*)0);
 }

 FUNC_0(&VAR_2->list);
 if (VAR_1->key_type == VAR_0) {
  size_t VAR_3 = VAR_1->k.array.nr_ranges *
          sizeof(VAR_1->k.array.ranges[0]);

  VAR_2->k.array.ranges = FUNC_2(VAR_1->k.array.ranges, VAR_3);
  if (!VAR_2->k.array.ranges) {
   FUNC_3("Failed to alloc indices for map\n");
   FUNC_1(VAR_2);
   return ((void*)0);
  }
 }

 return VAR_2;
}
