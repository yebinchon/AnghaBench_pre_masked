
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse_events_term {scalar_t__ type_val; int err_val; } ;
struct evlist {int dummy; } ;
struct bpf_map {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct bpf_map*,struct parse_events_term*,struct evlist*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2(struct bpf_map *VAR_3,
        struct parse_events_term *VAR_4,
        struct evlist *VAR_5)
{
 if (!VAR_4->err_val) {
  FUNC_1("Config value not set\n");
  return -VAR_0;
 }

 if (VAR_4->type_val != VAR_2) {
  FUNC_1("ERROR: wrong value type for 'event'\n");
  return -VAR_1;
 }

 return FUNC_0(VAR_3, VAR_4, VAR_5);
}
