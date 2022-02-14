
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int type; } ;
struct TYPE_7__ {int length; TYPE_2__ common; } ;
struct TYPE_8__ {TYPE_3__ hdr; } ;
union smc_llc_msg {int delete_rkey; int confirm_rkey_cont; int confirm_rkey; int delete_link; int add_link; int confirm_link; int test_link; TYPE_4__ raw; } ;
struct smc_link {scalar_t__ state; } ;
struct ib_wc {int byte_len; TYPE_1__* qp; } ;
struct TYPE_5__ {scalar_t__ qp_context; } ;
 scalar_t__ VAR_0 ;
 int FUNC_0 (struct smc_link*,int *) ;
 int FUNC_1 (struct smc_link*,int *) ;
 int FUNC_2 (struct smc_link*,int *) ;
 int FUNC_3 (struct smc_link*,int *) ;
 int FUNC_4 (struct smc_link*,int *) ;
 int FUNC_5 (struct smc_link*,int *) ;
 int FUNC_6 (struct smc_link*,int *) ;

__attribute__((used)) static void FUNC_7(struct ib_wc *VAR_1, void *VAR_2)
{
 struct smc_link *VAR_3 = (struct smc_link *)VAR_1->qp->qp_context;
 union smc_llc_msg *VAR_4 = VAR_2;

 if (VAR_1->byte_len < sizeof(*VAR_4))
  return;
 if (VAR_4->raw.hdr.length != sizeof(*VAR_4))
  return;
 if (VAR_3->state == VAR_0)
  return;

 switch (VAR_4->raw.hdr.common.type) {
 case 128:
  FUNC_6(VAR_3, &VAR_4->test_link);
  break;
 case 133:
  FUNC_1(VAR_3, &VAR_4->confirm_link);
  break;
 case 134:
  FUNC_0(VAR_3, &VAR_4->add_link);
  break;
 case 130:
  FUNC_4(VAR_3, &VAR_4->delete_link);
  break;
 case 132:
  FUNC_2(VAR_3, &VAR_4->confirm_rkey);
  break;
 case 131:
  FUNC_3(VAR_3, &VAR_4->confirm_rkey_cont);
  break;
 case 129:
  FUNC_5(VAR_3, &VAR_4->delete_rkey);
  break;
 }
}
