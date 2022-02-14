
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int str; } ;
struct parse_events_term {TYPE_2__ val; } ;
struct evsel {int dummy; } ;
struct evlist {int dummy; } ;
struct TYPE_3__ {struct evsel* evsel; } ;
typedef struct bpf_map_op {scalar_t__ type; TYPE_1__ v; int op_type; } const bpf_map_op ;
struct bpf_map_def {scalar_t__ type; TYPE_1__ v; int op_type; } ;
struct bpf_map {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct bpf_map_op const*) ;
 int FUNC_1 (struct bpf_map_op const*) ;
 struct bpf_map_op* FUNC_2 (struct bpf_map*,struct parse_events_term*) ;
 struct bpf_map_op* FUNC_3 (struct bpf_map*) ;
 char* FUNC_4 (struct bpf_map*) ;
 struct evsel* FUNC_5 (struct evlist*,int ) ;
 int FUNC_6 (char*,char const*,...) ;

__attribute__((used)) static int
FUNC_7(struct bpf_map *VAR_4,
   struct parse_events_term *VAR_5,
   struct evlist *VAR_6)
{
 struct evsel *VAR_7;
 const struct bpf_map_def *VAR_8;
 struct bpf_map_op *VAR_9;
 const char *VAR_10 = FUNC_4(VAR_4);

 VAR_7 = FUNC_5(VAR_6, VAR_5->val.str);
 if (!VAR_7) {
  FUNC_6("Event (for '%s') '%s' doesn't exist\n",
    VAR_10, VAR_5->val.str);
  return -VAR_0;
 }

 VAR_8 = FUNC_3(VAR_4);
 if (FUNC_0(VAR_8)) {
  FUNC_6("Unable to get map definition from '%s'\n",
    VAR_10);
  return FUNC_1(VAR_8);
 }





 if (VAR_8->type != VAR_3) {
  FUNC_6("Map %s type is not BPF_MAP_TYPE_PERF_EVENT_ARRAY\n",
    VAR_10);
  return -VAR_1;
 }

 VAR_9 = FUNC_2(VAR_4, VAR_5);
 if (FUNC_0(VAR_9))
  return FUNC_1(VAR_9);
 VAR_9->op_type = VAR_2;
 VAR_9->v.evsel = VAR_7;
 return 0;
}
