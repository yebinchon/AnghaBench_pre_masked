
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfit_test_sec {int ext_state; int state; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;
struct nfit_test {TYPE_1__ pdev; } ;
struct nd_intel_get_security_state {int state; int extended_state; scalar_t__ status; } ;


 int FUNC_0 (struct device*,char*,int ) ;
 struct nfit_test_sec* VAR_0 ;

__attribute__((used)) static int FUNC_1(struct nfit_test *VAR_1,
  struct nd_intel_get_security_state *VAR_2,
  unsigned int VAR_3, int VAR_4)
{
 struct device *VAR_5 = &VAR_1->pdev.dev;
 struct nfit_test_sec *VAR_6 = &VAR_0[VAR_4];

 VAR_2->status = 0;
 VAR_2->state = VAR_6->state;
 VAR_2->extended_state = VAR_6->ext_state;
 FUNC_0(VAR_5, "security state (%#x) returned\n", VAR_2->state);

 return 0;
}
