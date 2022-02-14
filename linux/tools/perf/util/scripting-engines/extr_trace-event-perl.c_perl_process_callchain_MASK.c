
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct perf_sample {int callchain; } ;
struct map {TYPE_2__* dso; } ;
struct evsel {int dummy; } ;
struct callchain_cursor_node {struct map* map; TYPE_1__* sym; int ip; } ;
struct addr_location {int thread; } ;
struct TYPE_6__ {scalar_t__ show_kernel_path; int use_callchain; } ;
struct TYPE_5__ {char* long_name; char* name; } ;
struct TYPE_4__ {int namelen; int name; int binding; int end; int start; } ;
typedef int SV ;
typedef int HV ;
typedef int AV ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct callchain_cursor_node* FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 () ;
 int * FUNC_7 () ;
 int * FUNC_8 (int *) ;
 int * FUNC_9 (char const*,int ) ;
 int * FUNC_10 (int ,int ) ;
 int * FUNC_11 (int ) ;
 int FUNC_12 (char*) ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 scalar_t__ FUNC_13 (int ,int *,struct evsel*,struct perf_sample*,int *,int *,int ) ;

__attribute__((used)) static SV *FUNC_14(struct perf_sample *VAR_3,
      struct evsel *VAR_4,
      struct addr_location *VAR_5)
{
 AV *VAR_6;

 VAR_6 = FUNC_6();
 if (!VAR_6)
  goto exit;

 if (!VAR_2.use_callchain || !VAR_3->callchain)
  goto exit;

 if (FUNC_13(VAR_5->thread, &VAR_0, VAR_4,
          VAR_3, ((void*)0), ((void*)0), VAR_1) != 0) {
  FUNC_12("Failed to resolve callchain. Skipping\n");
  goto exit;
 }
 FUNC_2(&VAR_0);


 while (1) {
  HV *VAR_7;
  struct callchain_cursor_node *VAR_8;
  VAR_8 = FUNC_3(&VAR_0);
  if (!VAR_8)
   break;

  VAR_7 = FUNC_7();
  if (!VAR_7)
   goto exit;

  if (!FUNC_4(VAR_7, "ip", FUNC_11(VAR_8->ip))) {
   FUNC_5(VAR_7);
   goto exit;
  }

  if (VAR_8->sym) {
   HV *VAR_9 = FUNC_7();
   if (!VAR_9) {
    FUNC_5(VAR_7);
    goto exit;
   }
   if (!FUNC_4(VAR_9, "start", FUNC_11(VAR_8->sym->start)) ||
       !FUNC_4(VAR_9, "end", FUNC_11(VAR_8->sym->end)) ||
       !FUNC_4(VAR_9, "binding", FUNC_11(VAR_8->sym->binding)) ||
       !FUNC_4(VAR_9, "name", FUNC_10(VAR_8->sym->name,
        VAR_8->sym->namelen)) ||
       !FUNC_4(VAR_7, "sym", FUNC_8((SV*)VAR_9))) {
    FUNC_5(VAR_9);
    FUNC_5(VAR_7);
    goto exit;
   }
  }

  if (VAR_8->map) {
   struct map *VAR_10 = VAR_8->map;
   const char *VAR_11 = "[unknown]";
   if (VAR_10 && VAR_10->dso) {
    if (VAR_2.show_kernel_path && VAR_10->dso->long_name)
     VAR_11 = VAR_10->dso->long_name;
    else
     VAR_11 = VAR_10->dso->name;
   }
   if (!FUNC_4(VAR_7, "dso", FUNC_9(VAR_11,0))) {
    FUNC_5(VAR_7);
    goto exit;
   }
  }

  FUNC_1(&VAR_0);
  FUNC_0(VAR_6, FUNC_8((SV*)VAR_7));
 }

exit:
 return FUNC_8((SV*)VAR_6);
}
