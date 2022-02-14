
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct thread {int dummy; } ;
struct perf_sample {int callchain; } ;
struct machine {int dummy; } ;
struct evsel {int dummy; } ;
struct db_export {TYPE_4__* cpr; } ;
struct callchain_cursor_node {int ip; TYPE_1__* map; scalar_t__ sym; } ;
struct call_path {int dummy; } ;
struct addr_location {scalar_t__ sym; int addr; TYPE_1__* map; struct machine* machine; } ;
typedef enum chain_order { ____Placeholder_chain_order } chain_order ;
typedef int al ;
struct TYPE_8__ {struct call_path call_path; } ;
struct TYPE_7__ {int order; } ;
struct TYPE_6__ {int use_callchain; } ;
struct TYPE_5__ {int dso; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct call_path* FUNC_0 (TYPE_4__*,struct call_path*,scalar_t__,int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct callchain_cursor_node* FUNC_3 (int *) ;
 TYPE_3__ VAR_3 ;
 int FUNC_4 (struct db_export*,struct addr_location*,int *,int *,int *) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (struct machine*) ;
 int FUNC_7 (struct addr_location*,int ,int) ;
 TYPE_2__ VAR_4 ;
 int FUNC_8 (struct thread*,int *,struct evsel*,struct perf_sample*,int *,int *,int ) ;

__attribute__((used)) static struct call_path *FUNC_9(struct db_export *VAR_5,
            struct machine *VAR_6,
            struct thread *VAR_7,
            struct perf_sample *VAR_8,
            struct evsel *VAR_9)
{
 u64 VAR_10 = FUNC_6(VAR_6);
 struct call_path *VAR_11 = &VAR_5->cpr->call_path;
 enum chain_order VAR_12 = VAR_3.order;
 int VAR_13;

 if (!VAR_4.use_callchain || !VAR_8->callchain)
  return ((void*)0);






 VAR_3.order = VAR_0;
 VAR_13 = FUNC_8(VAR_7, &VAR_2, VAR_9,
     VAR_8, ((void*)0), ((void*)0), VAR_1);
 if (VAR_13) {
  VAR_3.order = VAR_12;
  return ((void*)0);
 }
 FUNC_2(&VAR_2);

 while (1) {
  struct callchain_cursor_node *VAR_14;
  struct addr_location VAR_15;
  u64 VAR_16 = 0, VAR_17 = 0, VAR_18 = 0;

  FUNC_7(&VAR_15, 0, sizeof(VAR_15));

  VAR_14 = FUNC_3(&VAR_2);
  if (!VAR_14)
   break;





  VAR_15.sym = VAR_14->sym;
  VAR_15.map = VAR_14->map;
  VAR_15.machine = VAR_6;
  VAR_15.addr = VAR_14->ip;

  if (VAR_15.map && !VAR_15.sym)
   VAR_15.sym = FUNC_5(VAR_15.map->dso, VAR_15.addr);

  FUNC_4(VAR_5, &VAR_15, &VAR_16, &VAR_17, &VAR_18);


  VAR_11 = FUNC_0(VAR_5->cpr, VAR_11,
          VAR_15.sym, VAR_14->ip,
          VAR_10);

  FUNC_1(&VAR_2);
 }


 VAR_3.order = VAR_12;

 if (VAR_11 == &VAR_5->cpr->call_path) {

  return ((void*)0);
 }

 return VAR_11;
}
