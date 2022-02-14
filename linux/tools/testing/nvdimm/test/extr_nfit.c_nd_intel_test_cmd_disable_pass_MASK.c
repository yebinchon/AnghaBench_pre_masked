
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfit_test_sec {int state; int passphrase; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;
struct nfit_test {TYPE_1__ pdev; } ;
struct nd_intel_disable_passphrase {int status; int passphrase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*) ;
 struct nfit_test_sec* VAR_5 ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct nfit_test *VAR_6,
  struct nd_intel_disable_passphrase *VAR_7,
  unsigned int VAR_8, int VAR_9)
{
 struct device *VAR_10 = &VAR_6->pdev.dev;
 struct nfit_test_sec *VAR_11 = &VAR_5[VAR_9];

 if (!(VAR_11->state & VAR_1) ||
   (VAR_11->state & VAR_2)) {
  VAR_7->status = VAR_4;
  FUNC_0(VAR_10, "disable passphrase: wrong security state\n");
 } else if (FUNC_1(VAR_7->passphrase, VAR_11->passphrase,
    VAR_0) != 0) {
  VAR_7->status = VAR_3;
  FUNC_0(VAR_10, "disable passphrase: wrong passphrase\n");
 } else {
  FUNC_2(VAR_11->passphrase, 0, VAR_0);
  VAR_11->state = 0;
  FUNC_0(VAR_10, "disable passphrase: done\n");
 }

 return 0;
}
