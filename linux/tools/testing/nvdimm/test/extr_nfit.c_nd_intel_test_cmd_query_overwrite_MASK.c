
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfit_test_sec {int state; int old_state; int ext_state; scalar_t__ overwrite_end_time; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;
struct nfit_test {TYPE_1__ pdev; } ;
struct nd_intel_query_overwrite {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*) ;
 struct nfit_test_sec* VAR_4 ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct nfit_test *VAR_5,
  struct nd_intel_query_overwrite *VAR_6,
  unsigned int VAR_7, int VAR_8)
{
 struct device *VAR_9 = &VAR_5->pdev.dev;
 struct nfit_test_sec *VAR_10 = &VAR_4[VAR_8];

 if (!(VAR_10->state & VAR_1)) {
  VAR_6->status = VAR_3;
  return 0;
 }

 if (FUNC_1(VAR_10->overwrite_end_time)) {
  VAR_10->overwrite_end_time = 0;
  VAR_10->state = VAR_10->old_state;
  VAR_10->old_state = 0;
  VAR_10->ext_state = VAR_0;
  FUNC_0(VAR_9, "overwrite is complete\n");
 } else
  VAR_6->status = VAR_2;
 return 0;
}
