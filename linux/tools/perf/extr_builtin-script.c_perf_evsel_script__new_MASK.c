
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int path; } ;
struct perf_data {TYPE_1__ file; } ;
struct evsel_script {int filename; int * fp; } ;
struct evsel {int dummy; } ;


 scalar_t__ FUNC_0 (int *,char*,int ,int ) ;
 int * FUNC_1 (int ,char*) ;
 int FUNC_2 (struct evsel_script*) ;
 int FUNC_3 (struct evsel*) ;
 struct evsel_script* FUNC_4 (int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static struct evsel_script *FUNC_6(struct evsel *VAR_0,
       struct perf_data *VAR_1)
{
 struct evsel_script *VAR_2 = FUNC_4(sizeof(*VAR_2));

 if (VAR_2 != ((void*)0)) {
  if (FUNC_0(&VAR_2->filename, "%d.%d.dump", VAR_1->file.path, FUNC_3(VAR_0)) < 0)
   goto out_free;
  VAR_2->fp = FUNC_1(VAR_2->filename, "w");
  if (VAR_2->fp == ((void*)0))
   goto out_free_filename;
 }

 return VAR_2;
out_free_filename:
 FUNC_5(&VAR_2->filename);
out_free:
 FUNC_2(VAR_2);
 return ((void*)0);
}
