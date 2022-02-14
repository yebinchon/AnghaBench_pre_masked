
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfit_test_sec {int state; int ext_state; int master_passphrase; int passphrase; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;
struct nfit_test {TYPE_1__ pdev; } ;
struct nd_intel_secure_erase {int passphrase; int status; } ;


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
 int VAR_7 ;

__attribute__((used)) static int FUNC_3(struct nfit_test *VAR_8,
  struct nd_intel_secure_erase *VAR_9,
  unsigned int VAR_10, int VAR_11)
{
 struct device *VAR_12 = &VAR_8->pdev.dev;
 struct nfit_test_sec *VAR_13 = &VAR_6[VAR_11];

 if (VAR_13->state & VAR_3) {
  VAR_9->status = VAR_5;
  FUNC_0(VAR_12, "secure erase: wrong security state\n");
 } else if (FUNC_1(VAR_9->passphrase, VAR_13->passphrase,
    VAR_0) != 0) {
  VAR_9->status = VAR_4;
  FUNC_0(VAR_12, "secure erase: wrong passphrase\n");
 } else {
  if (!(VAR_13->state & VAR_2)
    && (FUNC_1(VAR_9->passphrase, VAR_7,
     VAR_0) != 0)) {
   FUNC_0(VAR_12, "invalid zero key\n");
   return 0;
  }
  FUNC_2(VAR_13->passphrase, 0, VAR_0);
  FUNC_2(VAR_13->master_passphrase, 0, VAR_0);
  VAR_13->state = 0;
  VAR_13->ext_state = VAR_1;
  FUNC_0(VAR_12, "secure erase: done\n");
 }

 return 0;
}
