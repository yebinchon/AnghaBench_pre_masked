
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symbol {int dummy; } ;
struct rb_root {int dummy; } ;
struct map {struct dso* dso; } ;
struct evsel {int dummy; } ;
struct dso {int long_name; } ;
struct annotation_options {int full_path; scalar_t__ print_lines; } ;
struct TYPE_2__ {int src; } ;


 struct rb_root VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct rb_root*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct symbol*,struct map*,struct evsel*,int ,struct annotation_options*,int *) ;
 int FUNC_3 (struct symbol*,struct map*,struct evsel*,struct annotation_options*) ;
 TYPE_1__* FUNC_4 (struct symbol*) ;
 int FUNC_5 (struct symbol*,struct map*,struct rb_root*,struct annotation_options*) ;
 int FUNC_6 (struct symbol*,struct evsel*) ;

int FUNC_7(struct symbol *VAR_2, struct map *VAR_3,
    struct evsel *VAR_4,
    struct annotation_options *VAR_5)
{
 struct dso *VAR_6 = VAR_3->dso;
 struct rb_root VAR_7 = VAR_0;

 if (FUNC_2(VAR_2, VAR_3, VAR_4, 0, VAR_5, ((void*)0)) < 0)
  return -1;

 FUNC_6(VAR_2, VAR_4);

 if (VAR_5->print_lines) {
  VAR_1 = VAR_5->full_path;
  FUNC_5(VAR_2, VAR_3, &VAR_7, VAR_5);
  FUNC_1(&VAR_7, VAR_6->long_name);
 }

 FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5);

 FUNC_0(FUNC_4(VAR_2)->src);

 return 0;
}
