
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfit_test_sec {int state; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;
struct nfit_test {TYPE_1__ pdev; } ;
struct nd_intel_freeze_lock {scalar_t__ status; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct device*,char*) ;
 struct nfit_test_sec* VAR_3 ;

__attribute__((used)) static int FUNC_1(struct nfit_test *VAR_4,
  struct nd_intel_freeze_lock *VAR_5,
  unsigned int VAR_6, int VAR_7)
{
 struct device *VAR_8 = &VAR_4->pdev.dev;
 struct nfit_test_sec *VAR_9 = &VAR_3[VAR_7];

 if (!(VAR_9->state & VAR_0)) {
  VAR_5->status = VAR_2;
  FUNC_0(VAR_8, "freeze lock: wrong security state\n");
 } else {
  VAR_9->state |= VAR_1;
  VAR_5->status = 0;
  FUNC_0(VAR_8, "security frozen\n");
 }

 return 0;
}
