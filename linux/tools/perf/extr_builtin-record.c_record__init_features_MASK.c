
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ clockid_res_ns; scalar_t__ use_clockid; int full_auxtrace; int branch_stack; } ;
struct record {TYPE_3__ opts; TYPE_2__* evlist; scalar_t__ no_buildid; struct perf_session* session; } ;
struct perf_session {int header; } ;
struct TYPE_4__ {int entries; } ;
struct TYPE_5__ {TYPE_1__ core; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct record*) ;

__attribute__((used)) static void FUNC_4(struct record *VAR_10)
{
 struct perf_session *VAR_11 = VAR_10->session;
 int VAR_12;

 for (VAR_12 = VAR_6; VAR_12 < VAR_7; VAR_12++)
  FUNC_2(&VAR_11->header, VAR_12);

 if (VAR_10->no_buildid)
  FUNC_1(&VAR_11->header, VAR_2);

 if (!FUNC_0(&VAR_10->evlist->core.entries))
  FUNC_1(&VAR_11->header, VAR_9);

 if (!VAR_10->opts.branch_stack)
  FUNC_1(&VAR_11->header, VAR_1);

 if (!VAR_10->opts.full_auxtrace)
  FUNC_1(&VAR_11->header, VAR_0);

 if (!(VAR_10->opts.use_clockid && VAR_10->opts.clockid_res_ns))
  FUNC_1(&VAR_11->header, VAR_3);

 FUNC_1(&VAR_11->header, VAR_5);
 if (!FUNC_3(VAR_10))
  FUNC_1(&VAR_11->header, VAR_4);

 FUNC_1(&VAR_11->header, VAR_8);
}
