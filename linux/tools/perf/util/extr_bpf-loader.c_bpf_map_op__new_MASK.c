
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse_events_term {int dummy; } ;
struct bpf_map_op {int list; } ;


 int VAR_0 ;
 struct bpf_map_op* FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct bpf_map_op*,struct parse_events_term*) ;
 int FUNC_3 (struct bpf_map_op*) ;
 int FUNC_4 (char*) ;
 struct bpf_map_op* FUNC_5 (int) ;

__attribute__((used)) static struct bpf_map_op *
FUNC_6(struct parse_events_term *VAR_1)
{
 struct bpf_map_op *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_5(sizeof(*VAR_2));
 if (!VAR_2) {
  FUNC_4("Failed to alloc bpf_map_op\n");
  return FUNC_0(-VAR_0);
 }
 FUNC_1(&VAR_2->list);

 VAR_3 = FUNC_2(VAR_2, VAR_1);
 if (VAR_3) {
  FUNC_3(VAR_2);
  return FUNC_0(VAR_3);
 }
 return VAR_2;
}
