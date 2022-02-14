
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse_events_term {int dummy; } ;
struct bpf_map_op {int dummy; } ;
struct bpf_map {int dummy; } ;


 struct bpf_map_op* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct bpf_map_op*) ;
 int FUNC_2 (struct bpf_map*,struct bpf_map_op*) ;
 int FUNC_3 (struct bpf_map_op*) ;
 struct bpf_map_op* FUNC_4 (struct parse_events_term*) ;

__attribute__((used)) static struct bpf_map_op *
FUNC_5(struct bpf_map *VAR_0, struct parse_events_term *VAR_1)
{
 struct bpf_map_op *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_4(VAR_1);
 if (FUNC_1(VAR_2))
  return VAR_2;

 VAR_3 = FUNC_2(VAR_0, VAR_2);
 if (VAR_3) {
  FUNC_3(VAR_2);
  return FUNC_0(VAR_3);
 }
 return VAR_2;
}
