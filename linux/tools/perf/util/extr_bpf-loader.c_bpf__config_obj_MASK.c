
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse_events_term {int config; } ;
struct evlist {int dummy; } ;
struct bpf_object {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bpf_object*,struct parse_events_term*,struct evlist*,int*) ;
 scalar_t__ FUNC_1 (int ,char*) ;

int FUNC_2(struct bpf_object *VAR_2,
      struct parse_events_term *VAR_3,
      struct evlist *VAR_4,
      int *VAR_5)
{
 int VAR_6 = 0;
 int VAR_7;

 if (!VAR_2 || !VAR_3 || !VAR_3->config)
  return -VAR_1;

 if (FUNC_1(VAR_3->config, "map:")) {
  VAR_6 = sizeof("map:") - 1;
  VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_4, &VAR_6);
  goto out;
 }
 VAR_7 = -VAR_0;
out:
 if (VAR_5)
  *VAR_5 = VAR_6;
 return VAR_7;

}
