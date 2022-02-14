
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct smc_user_pnetentry {char* pnet_name; int ib_port; TYPE_4__* smcd_dev; TYPE_3__* smcibdev; TYPE_5__* ndev; } ;
struct sk_buff {int dummy; } ;
struct TYPE_10__ {char* name; } ;
struct TYPE_9__ {int dev; } ;
struct TYPE_8__ {TYPE_2__* ibdev; } ;
struct TYPE_6__ {int * parent; } ;
struct TYPE_7__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,char*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_4,
       struct smc_user_pnetentry *VAR_5)
{
 if (FUNC_1(VAR_4, VAR_3, VAR_5->pnet_name))
  return -1;
 if (VAR_5->ndev) {
  if (FUNC_1(VAR_4, VAR_0,
       VAR_5->ndev->name))
   return -1;
 } else {
  if (FUNC_1(VAR_4, VAR_0, "n/a"))
   return -1;
 }
 if (VAR_5->smcibdev) {
  if (FUNC_1(VAR_4, VAR_1,
   FUNC_0(VAR_5->smcibdev->ibdev->dev.parent)) ||
      FUNC_2(VAR_4, VAR_2, VAR_5->ib_port))
   return -1;
 } else if (VAR_5->smcd_dev) {
  if (FUNC_1(VAR_4, VAR_1,
       FUNC_0(&VAR_5->smcd_dev->dev)) ||
      FUNC_2(VAR_4, VAR_2, 1))
   return -1;
 } else {
  if (FUNC_1(VAR_4, VAR_1, "n/a") ||
      FUNC_2(VAR_4, VAR_2, 0xff))
   return -1;
 }

 return 0;
}
