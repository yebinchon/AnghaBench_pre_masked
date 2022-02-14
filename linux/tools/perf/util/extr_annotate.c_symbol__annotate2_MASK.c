
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symbol {int annotate2; } ;
struct map {int dummy; } ;
struct TYPE_2__ {int nr_members; } ;
struct evsel {TYPE_1__ core; } ;
struct arch {int dummy; } ;
struct annotation_options {int dummy; } ;
struct annotation_line {int dummy; } ;
struct annotation {int nr_events; int * offsets; struct annotation_options* options; } ;


 int VAR_0 ;
 int FUNC_0 (struct annotation*,size_t) ;
 int FUNC_1 (struct annotation*,struct symbol*) ;
 int FUNC_2 (struct annotation*,struct symbol*) ;
 int FUNC_3 (struct annotation*,size_t) ;
 int FUNC_4 (struct annotation*) ;
 scalar_t__ FUNC_5 (struct evsel*) ;
 int FUNC_6 (struct symbol*,struct map*,struct evsel*,int ,struct annotation_options*,struct arch**) ;
 struct annotation* FUNC_7 (struct symbol*) ;
 int FUNC_8 (struct symbol*,struct evsel*) ;
 size_t FUNC_9 (struct symbol*) ;
 int * FUNC_10 (size_t) ;
 int FUNC_11 (int **) ;

int FUNC_12(struct symbol *VAR_1, struct map *VAR_2, struct evsel *VAR_3,
        struct annotation_options *VAR_4, struct arch **VAR_5)
{
 struct annotation *VAR_6 = FUNC_7(VAR_1);
 size_t VAR_7 = FUNC_9(VAR_1);
 int VAR_8 = 1, VAR_9;

 VAR_6->offsets = FUNC_10(VAR_7 * sizeof(struct annotation_line *));
 if (VAR_6->offsets == ((void*)0))
  return VAR_0;

 if (FUNC_5(VAR_3))
  VAR_8 = VAR_3->core.nr_members;

 VAR_9 = FUNC_6(VAR_1, VAR_2, VAR_3, 0, VAR_4, VAR_5);
 if (VAR_9)
  goto out_free_offsets;

 VAR_6->options = VAR_4;

 FUNC_8(VAR_1, VAR_3);

 FUNC_3(VAR_6, VAR_7);
 FUNC_2(VAR_6, VAR_1);
 FUNC_0(VAR_6, VAR_7);
 FUNC_1(VAR_6, VAR_1);
 VAR_6->nr_events = VAR_8;

 FUNC_4(VAR_6);
 VAR_1->annotate2 = 1;

 return 0;

out_free_offsets:
 FUNC_11(&VAR_6->offsets);
 return VAR_9;
}
