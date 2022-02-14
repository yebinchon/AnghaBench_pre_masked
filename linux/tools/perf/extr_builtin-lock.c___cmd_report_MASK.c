
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct perf_tool {int ordered_events; int namespaces; int comm; int sample; } ;
struct perf_data {int force; int mode; int path; } ;
struct TYPE_10__ {int env; } ;
struct TYPE_11__ {TYPE_1__ header; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 TYPE_2__* FUNC_5 (struct perf_data*,int,struct perf_tool*) ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 () ;
 int VAR_7 ;
 scalar_t__ FUNC_10 () ;
 TYPE_2__* VAR_8 ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(bool VAR_9)
{
 int VAR_10 = -VAR_0;
 struct perf_tool VAR_11 = {
  .sample = VAR_7,
  .comm = VAR_5,
  .namespaces = VAR_6,
  .ordered_events = 1,
 };
 struct perf_data VAR_12 = {
  .path = VAR_3,
  .mode = VAR_1,
  .force = VAR_2,
 };

 VAR_8 = FUNC_5(&VAR_12, 0, &VAR_11);
 if (FUNC_0(VAR_8)) {
  FUNC_8("Initializing perf session failed\n");
  return FUNC_1(VAR_8);
 }

 FUNC_13(&VAR_8->header.env);

 if (!FUNC_4(VAR_8, "lock record"))
  goto out_delete;

 if (FUNC_7(VAR_8, VAR_4)) {
  FUNC_8("Initializing perf session tracepoint handlers failed\n");
  goto out_delete;
 }

 if (FUNC_10())
  goto out_delete;

 VAR_10 = FUNC_6(VAR_8);
 if (VAR_10)
  goto out_delete;

 FUNC_11();
 if (VAR_9)
  VAR_10 = FUNC_2();
 else {
  FUNC_12();
  FUNC_9();
 }

out_delete:
 FUNC_3(VAR_8);
 return VAR_10;
}
