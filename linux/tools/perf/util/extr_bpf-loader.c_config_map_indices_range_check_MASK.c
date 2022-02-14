
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parse_events_array {unsigned int nr_ranges; TYPE_1__* ranges; } ;
struct parse_events_term {struct parse_events_array array; } ;
struct bpf_map_def {unsigned int max_entries; } ;
struct bpf_map {int dummy; } ;
struct TYPE_2__ {unsigned int start; size_t length; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct bpf_map_def const*) ;
 struct bpf_map_def* FUNC_1 (struct bpf_map*) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int
FUNC_3(struct parse_events_term *VAR_2,
          struct bpf_map *VAR_3,
          const char *VAR_4)
{
 struct parse_events_array *VAR_5 = &VAR_2->array;
 const struct bpf_map_def *VAR_6;
 unsigned int VAR_7;

 if (!VAR_5->nr_ranges)
  return 0;
 if (!VAR_5->ranges) {
  FUNC_2("ERROR: map %s: array->nr_ranges is %d but range array is NULL\n",
    VAR_4, (int)VAR_5->nr_ranges);
  return -VAR_0;
 }

 VAR_6 = FUNC_1(VAR_3);
 if (FUNC_0(VAR_6)) {
  FUNC_2("ERROR: Unable to get map definition from '%s'\n",
    VAR_4);
  return -VAR_0;
 }

 for (VAR_7 = 0; VAR_7 < VAR_5->nr_ranges; VAR_7++) {
  unsigned int VAR_8 = VAR_5->ranges[VAR_7].start;
  size_t VAR_9 = VAR_5->ranges[VAR_7].length;
  unsigned int VAR_10 = VAR_8 + VAR_9 - 1;

  if (VAR_10 >= VAR_6->max_entries) {
   FUNC_2("ERROR: index %d too large\n", VAR_10);
   return -VAR_1;
  }
 }
 return 0;
}
