
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nlattr {int dummy; } ;
struct TYPE_4__ {int parent; } ;
struct net_device {TYPE_2__ dev; TYPE_1__* netdev_ops; } ;
struct TYPE_3__ {int ndo_get_vf_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int ) ;
 size_t FUNC_1 (int) ;

__attribute__((used)) static size_t FUNC_2(const struct net_device *VAR_3,
        u32 VAR_4)
{
 size_t VAR_5 = FUNC_1(4)
  + FUNC_1(VAR_0)
  + FUNC_1(VAR_1)
  + FUNC_1(VAR_1)
  + FUNC_1(1)
  + FUNC_1(2);
 size_t VAR_6 = FUNC_1(sizeof(struct nlattr));
 size_t VAR_7 = FUNC_1(sizeof(struct nlattr))
  + VAR_5;
 size_t VAR_8 = FUNC_1(sizeof(struct nlattr))
  + VAR_5;

 if (!VAR_3->netdev_ops->ndo_get_vf_port || !VAR_3->dev.parent ||
     !(VAR_4 & VAR_2))
  return 0;
 if (FUNC_0(VAR_3->dev.parent))
  return VAR_8 + VAR_6 +
   VAR_7 * FUNC_0(VAR_3->dev.parent);
 else
  return VAR_8;
}
