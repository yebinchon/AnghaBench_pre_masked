
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct smc_ib_device {int ibdev; TYPE_1__* pattr; } ;
struct net_device {scalar_t__ gid_type; int index; int gid; int ndev; } ;
struct ib_gid_attr {scalar_t__ gid_type; int index; int gid; int ndev; } ;
struct TYPE_2__ {int gid_tbl_len; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct net_device const*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int*,int *,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 struct net_device* FUNC_5 (int ,int,int) ;
 int FUNC_6 (struct net_device const*) ;
 struct net_device* FUNC_7 (struct net_device const*) ;
 unsigned short FUNC_8 (int ) ;

int FUNC_9(struct smc_ib_device *VAR_3, u8 VAR_4,
    unsigned short VAR_5, u8 VAR_6[], u8 *VAR_7)
{
 const struct ib_gid_attr *VAR_8;
 const struct net_device *VAR_9;
 int VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_3->pattr[VAR_4 - 1].gid_tbl_len; VAR_10++) {
  VAR_8 = FUNC_5(VAR_3->ibdev, VAR_4, VAR_10);
  if (FUNC_0(VAR_8))
   continue;

  FUNC_3();
  VAR_9 = FUNC_7(VAR_8);
  if (!FUNC_0(VAR_9) &&
      ((!VAR_5 && !FUNC_1(VAR_8->ndev)) ||
       (VAR_5 && FUNC_1(VAR_8->ndev) &&
        FUNC_8(VAR_8->ndev) == VAR_5)) &&
      VAR_8->gid_type == VAR_1) {
   FUNC_4();
   if (VAR_6)
    FUNC_2(VAR_6, &VAR_8->gid, VAR_2);
   if (VAR_7)
    *VAR_7 = VAR_8->index;
   FUNC_6(VAR_8);
   return 0;
  }
  FUNC_4();
  FUNC_6(VAR_8);
 }
 return -VAR_0;
}
