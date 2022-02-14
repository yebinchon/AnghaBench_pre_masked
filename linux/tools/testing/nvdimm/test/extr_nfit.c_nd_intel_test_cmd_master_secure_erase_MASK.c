
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfit_test_sec {int ext_state; scalar_t__ state; int passphrase; int master_passphrase; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;
struct nfit_test {TYPE_1__ pdev; } ;
struct nd_intel_master_secure_erase {int status; int passphrase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*,char*) ;
 struct nfit_test_sec* VAR_6 ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct nfit_test *VAR_7,
  struct nd_intel_master_secure_erase *VAR_8,
  unsigned int VAR_9, int VAR_10)
{
 struct device *VAR_11 = &VAR_7->pdev.dev;
 struct nfit_test_sec *VAR_12 = &VAR_6[VAR_10];

 if (!(VAR_12->ext_state & VAR_1)) {
  VAR_8->status = VAR_5;
  FUNC_0(VAR_11, "master secure erase: in wrong state\n");
 } else if (VAR_12->ext_state & VAR_2) {
  VAR_8->status = VAR_4;
  FUNC_0(VAR_11, "master secure erase: in wrong security state\n");
 } else if (FUNC_1(VAR_8->passphrase, VAR_12->master_passphrase,
    VAR_0) != 0) {
  VAR_8->status = VAR_3;
  FUNC_0(VAR_11, "master secure erase: wrong passphrase\n");
 } else {

  VAR_12->ext_state = VAR_1;
  FUNC_2(VAR_12->passphrase, 0, VAR_0);
  VAR_12->state = 0;
  FUNC_0(VAR_11, "master secure erase: done\n");
 }

 return 0;
}
