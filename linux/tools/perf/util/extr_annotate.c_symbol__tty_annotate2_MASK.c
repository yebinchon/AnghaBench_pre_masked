
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symbol {char* name; } ;
struct rb_root {int dummy; } ;
struct map {struct dso* dso; } ;
struct hists {int dummy; } ;
struct evsel {int dummy; } ;
struct dso {char* long_name; } ;
struct annotation_options {int percent_type; int full_path; scalar_t__ print_lines; } ;
typedef int buf ;
struct TYPE_2__ {int src; } ;


 struct rb_root VAR_0 ;
 int FUNC_0 (int ) ;
 struct hists* FUNC_1 (struct evsel*) ;
 int FUNC_2 (int ,char*,char*,char*,char*,char*) ;
 int FUNC_3 (struct hists*,char*,int) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (struct rb_root*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (struct symbol*,struct map*,struct evsel*,struct annotation_options*,int *) ;
 int FUNC_7 (struct symbol*,int ,struct annotation_options*) ;
 TYPE_1__* FUNC_8 (struct symbol*) ;
 int FUNC_9 (struct symbol*,struct map*,struct rb_root*,struct annotation_options*) ;

int FUNC_10(struct symbol *VAR_3, struct map *VAR_4,
     struct evsel *VAR_5,
     struct annotation_options *VAR_6)
{
 struct dso *VAR_7 = VAR_4->dso;
 struct rb_root VAR_8 = VAR_0;
 struct hists *VAR_9 = FUNC_1(VAR_5);
 char VAR_10[1024];

 if (FUNC_6(VAR_3, VAR_4, VAR_5, VAR_6, ((void*)0)) < 0)
  return -1;

 if (VAR_6->print_lines) {
  VAR_1 = VAR_6->full_path;
  FUNC_9(VAR_3, VAR_4, &VAR_8, VAR_6);
  FUNC_5(&VAR_8, VAR_7->long_name);
 }

 FUNC_3(VAR_9, VAR_10, sizeof(VAR_10));
 FUNC_2(VAR_2, "%s, [percent: %s]\n%s() %s\n",
  VAR_10, FUNC_4(VAR_6->percent_type), VAR_3->name, VAR_7->long_name);
 FUNC_7(VAR_3, VAR_2, VAR_6);

 FUNC_0(FUNC_8(VAR_3)->src);

 return 0;
}
