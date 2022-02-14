
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct map_symbol {TYPE_3__* sym; TYPE_2__* map; } ;
struct evsel {int dummy; } ;
struct annotation_options {int dummy; } ;
typedef int buf ;
struct TYPE_6__ {char* name; } ;
struct TYPE_5__ {TYPE_1__* dso; } ;
struct TYPE_4__ {char* long_name; } ;
typedef int FILE ;


 scalar_t__ FUNC_0 (char**,char*,char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int *,char*,char*,char*,char const*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct evsel*,char*,int) ;
 scalar_t__ FUNC_6 (struct evsel*) ;
 char* FUNC_7 (struct evsel*) ;
 int FUNC_8 (TYPE_3__*,int *,struct annotation_options*) ;

int FUNC_9(struct map_symbol *VAR_0, struct evsel *VAR_1,
    struct annotation_options *VAR_2)
{
 const char *VAR_3 = FUNC_7(VAR_1);
 char VAR_4[1024];
 char *VAR_5;
 int VAR_6 = -1;
 FILE *VAR_7;

 if (FUNC_0(&VAR_5, "%s.annotation", VAR_0->sym->name) < 0)
  return -1;

 VAR_7 = FUNC_2(VAR_5, "w");
 if (VAR_7 == ((void*)0))
  goto out_free_filename;

 if (FUNC_6(VAR_1)) {
  FUNC_5(VAR_1, VAR_4, sizeof(VAR_4));
  VAR_3 = VAR_4;
 }

 FUNC_3(VAR_7, "%s() %s\nEvent: %s\n\n",
  VAR_0->sym->name, VAR_0->map->dso->long_name, VAR_3);
 FUNC_8(VAR_0->sym, VAR_7, VAR_2);

 FUNC_1(VAR_7);
 VAR_6 = 0;
out_free_filename:
 FUNC_4(VAR_5);
 return VAR_6;
}
