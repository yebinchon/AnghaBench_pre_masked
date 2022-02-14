
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfit_test_sec {int state; int old_state; scalar_t__ overwrite_end_time; int passphrase; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;
struct nfit_test {TYPE_1__ pdev; } ;
struct nd_intel_overwrite {int status; int passphrase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*) ;
 struct nfit_test_sec* VAR_5 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct nfit_test *VAR_6,
  struct nd_intel_overwrite *VAR_7,
  unsigned int VAR_8, int VAR_9)
{
 struct device *VAR_10 = &VAR_6->pdev.dev;
 struct nfit_test_sec *VAR_11 = &VAR_5[VAR_9];

 if ((VAR_11->state & VAR_2) &&
   FUNC_2(VAR_7->passphrase, VAR_11->passphrase,
    VAR_1) != 0) {
  VAR_7->status = VAR_4;
  FUNC_0(VAR_10, "overwrite: wrong passphrase\n");
  return 0;
 }

 VAR_11->old_state = VAR_11->state;
 VAR_11->state = VAR_3;
 FUNC_0(VAR_10, "overwrite progressing.\n");
 VAR_11->overwrite_end_time = FUNC_1() + 5 * VAR_0;

 return 0;
}
