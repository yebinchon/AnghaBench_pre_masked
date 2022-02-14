
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int num; } ;
struct parse_events_term {TYPE_2__ val; } ;
struct TYPE_3__ {int value; } ;
typedef struct bpf_map_op {scalar_t__ type; int key_size; int value_size; TYPE_1__ v; int op_type; } const bpf_map_op ;
struct bpf_map_def {scalar_t__ type; int key_size; int value_size; TYPE_1__ v; int op_type; } ;
struct bpf_map {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct bpf_map_op const*) ;
 int FUNC_1 (struct bpf_map_op const*) ;
 struct bpf_map_op* FUNC_2 (struct bpf_map*,struct parse_events_term*) ;
 struct bpf_map_op* FUNC_3 (struct bpf_map*) ;
 char* FUNC_4 (struct bpf_map*) ;
 int FUNC_5 (char*,char const*) ;

__attribute__((used)) static int
FUNC_6(struct bpf_map *VAR_6,
   struct parse_events_term *VAR_7)
{
 struct bpf_map_op *VAR_8;
 const char *VAR_9 = FUNC_4(VAR_6);
 const struct bpf_map_def *VAR_10 = FUNC_3(VAR_6);

 if (FUNC_0(VAR_10)) {
  FUNC_5("Unable to get map definition from '%s'\n",
    VAR_9);
  return -VAR_0;
 }

 if (VAR_10->type != VAR_5) {
  FUNC_5("Map %s type is not BPF_MAP_TYPE_ARRAY\n",
    VAR_9);
  return -VAR_2;
 }
 if (VAR_10->key_size < sizeof(unsigned int)) {
  FUNC_5("Map %s has incorrect key size\n", VAR_9);
  return -VAR_1;
 }
 switch (VAR_10->value_size) {
 case 1:
 case 2:
 case 4:
 case 8:
  break;
 default:
  FUNC_5("Map %s has incorrect value size\n", VAR_9);
  return -VAR_3;
 }

 VAR_8 = FUNC_2(VAR_6, VAR_7);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);
 VAR_8->op_type = VAR_4;
 VAR_8->v.value = VAR_7->val.num;
 return 0;
}
