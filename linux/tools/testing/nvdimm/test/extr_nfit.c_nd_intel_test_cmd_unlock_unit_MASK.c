
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfit_test_sec {int state; int passphrase; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;
struct nfit_test {TYPE_1__ pdev; } ;
struct nd_intel_unlock_unit {int status; int passphrase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*,char*,...) ;
 struct nfit_test_sec* VAR_6 ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct nfit_test *VAR_7,
  struct nd_intel_unlock_unit *VAR_8,
  unsigned int VAR_9, int VAR_10)
{
 struct device *VAR_11 = &VAR_7->pdev.dev;
 struct nfit_test_sec *VAR_12 = &VAR_6[VAR_10];

 if (!(VAR_12->state & VAR_3) ||
   (VAR_12->state & VAR_2)) {
  VAR_8->status = VAR_5;
  FUNC_0(VAR_11, "unlock unit: invalid state: %#x\n",
    VAR_12->state);
 } else if (FUNC_1(VAR_8->passphrase, VAR_12->passphrase,
    VAR_0) != 0) {
  VAR_8->status = VAR_4;
  FUNC_0(VAR_11, "unlock unit: invalid passphrase\n");
 } else {
  VAR_8->status = 0;
  VAR_12->state = VAR_1;
  FUNC_0(VAR_11, "Unit unlocked\n");
 }

 FUNC_0(VAR_11, "unlocking status returned: %#x\n", VAR_8->status);
 return 0;
}
